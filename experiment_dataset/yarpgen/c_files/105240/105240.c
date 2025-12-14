/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (var_6 | 856480496)));
    var_19 = (max((~var_16), (max(var_5, 7))));
    var_20 = (max(var_20, (((((min((max(27851, var_15)), 37666))) > ((18446744073709551615 ? (max(var_12, var_13)) : (max(var_14, var_2)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((!(arr_2 [i_0] [i_0])));
                var_21 = (min((min(((((var_15 + 9223372036854775807) >> (arr_0 [i_0])))), (min(1, 562949953421311)))), (((!((max((arr_4 [i_0] [i_0]), var_10))))))));
                var_22 = 7;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_23 = (min((arr_10 [i_3 + 1]), ((var_4 ? (arr_1 [i_3 + 1]) : (arr_1 [i_3 - 2])))));
                                var_24 = (-((~((var_13 ? 46 : 856503704)))));
                                arr_12 [i_0] [i_2] = 576460752303423488;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
