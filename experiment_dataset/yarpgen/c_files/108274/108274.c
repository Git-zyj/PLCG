/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((((var_3 ? ((var_0 << (-22 + 23)) : ((max(22, var_11))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_12 [6] [i_1] [i_1] [i_0] = (!var_6);
                            var_15 = ((((((((arr_3 [i_0] [i_0] [i_2]) ? 0 : (arr_8 [i_0] [i_1] [i_3])))) ? (arr_1 [i_3 - 1]) : 1234819987)) <= (-23 == -99)));
                        }
                    }
                }
                var_16 = ((((((~var_2) ? -var_0 : 2413369579))) ? (((arr_0 [i_0]) ? ((((arr_9 [2] [i_1] [i_0] [i_0] [i_1]) ? -30 : (arr_11 [14] [i_1] [i_1] [4])))) : (arr_5 [i_0] [i_1]))) : ((((-5 != (((arr_3 [i_0] [i_0] [i_0]) ? var_3 : var_1))))))));
                arr_13 [i_1] [i_1] = (~((max(0, -22))));
            }
        }
    }
    #pragma endscop
}
