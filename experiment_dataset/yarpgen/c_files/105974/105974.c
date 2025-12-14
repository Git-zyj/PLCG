/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    var_20 = (max(((((-10123 == var_9) ? -0 : ((-57 ? var_7 : var_3))))), ((((min(0, 3059127323))) ? (max(118, 305708352955270580)) : (var_14 == var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_21 -= (max((arr_2 [i_3] [i_3 - 1]), ((((-20889 | 29500) ? ((1085575037 >> (var_8 - 112))) : ((var_4 ? var_6 : 28700)))))));
                            var_22 = (max((((25463 && (arr_0 [i_1 + 1] [i_3 + 1])))), (max((arr_9 [i_3 - 1] [i_2] [i_2] [i_2] [i_0] [i_0]), -var_18))));
                            var_23 = ((min((arr_8 [i_3 - 1] [i_2] [i_1 + 1] [i_0]), (arr_8 [i_3 + 1] [i_3] [i_1 + 1] [i_1]))));
                            var_24 = var_18;
                        }
                    }
                }
                arr_10 [i_0] [i_1] = (((~305708352955270561) < (((-(min(20, 0)))))));

                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_25 = (((((18446744073709551615 - (((min(var_11, var_6))))))) ? ((6 ? (arr_9 [i_1 + 1] [i_1 + 1] [13] [i_1] [i_4] [i_1 + 1]) : (arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_4]))) : (((((-(arr_11 [i_1 + 1] [17])))) ? (-991191354 % var_2) : ((var_14 ? (arr_7 [i_4] [i_1 + 1] [i_1 + 1] [i_0]) : 1))))));
                    arr_15 [i_0] [i_1] [i_4] = ((((((var_9 + (-9223372036854775807 - 1)))) <= (arr_11 [i_0] [19]))));
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        {
                            arr_22 [i_0] [5] [i_0] [i_0] [17] [9] = (max(((max(61792, ((var_1 ? var_7 : var_1))))), (((var_7 || var_1) ? (min(var_18, var_17)) : -16))));
                            var_26 = (arr_20 [i_0] [i_1] [i_5]);
                            var_27 = (arr_11 [i_6 + 2] [i_1 + 1]);
                            arr_23 [i_0] [i_0] [i_5] = (((((var_11 ? (~var_15) : (((((arr_8 [i_0] [13] [i_0] [i_0]) || 17752026955324347257))))))) ? var_18 : (min(((max(var_7, var_8))), (~var_0)))));
                        }
                    }
                }
            }
        }
    }
    var_28 = ((min((((1048575 ? var_5 : 4293918721))), (max(9151297018129348931, 1)))) == (((((~var_12) || -var_10)))));
    #pragma endscop
}
