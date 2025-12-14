/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    var_18 -= (max((min(var_4, (min(var_0, var_4)))), ((min((~var_10), var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] [i_0] [i_3] = ((((((arr_4 [i_1 - 1] [i_4 - 1]) >> (var_5 - 17930)))) ? (((arr_4 [i_0] [i_0]) ? (arr_15 [i_0] [i_0] [i_0]) : (arr_1 [i_2] [i_1]))) : ((((var_10 & var_0) ? var_11 : (min((arr_13 [i_2] [i_4] [i_2] [i_3]), (arr_0 [i_0]))))))));
                                arr_17 [i_1] [i_3] [i_0] [i_2] [i_3] [i_0] = (((max(((-36 ? 528103463184773476 : -5777133311702839570)), (!0))) >> (((min((arr_8 [i_1 - 1] [i_2]), (arr_7 [i_4 - 1] [i_3]))) - 16686))));
                                var_19 = var_5;
                            }
                        }
                    }
                }
                var_20 = (min(var_20, -var_16));
                var_21 *= (((var_7 | (arr_12 [i_0] [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1]))) < (arr_8 [i_0] [i_0]));
            }
        }
    }
    #pragma endscop
}
