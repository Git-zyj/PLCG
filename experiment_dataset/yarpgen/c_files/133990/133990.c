/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((min((var_1 * var_7), ((max(-4, 0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] = (max(((min((!150), (!var_16)))), (max(var_0, (var_15 || 0)))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_18 |= (((((var_3 ? (arr_10 [i_2 + 1] [10] [i_1] [i_2]) : (arr_10 [i_2 + 1] [i_2] [i_1] [i_2 - 1])))) ? ((1 ? var_8 : var_11)) : (((((arr_10 [i_2 - 1] [i_2] [i_1] [i_2 - 1]) != (arr_10 [i_2 + 1] [i_2] [i_1] [i_2])))))));
                                var_19 -= (~-1);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
