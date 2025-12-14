/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 &= 40139;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [15] [i_1] [i_3] [0] [i_1] [i_0] = (((((((arr_3 [1]) ? 110 : (arr_4 [i_3])))) ? ((-(arr_5 [i_0] [15]))) : (~var_17))));
                            var_20 = (max((arr_8 [i_1] [i_1] [i_1] [15]), (max(var_4, (arr_8 [20] [2] [i_2] [i_0])))));
                        }
                    }
                }
            }
        }
    }
    var_21 = var_11;
    var_22 = ((!(((-25399 ? ((1 ? 40139 : 2)) : var_3)))));
    #pragma endscop
}
