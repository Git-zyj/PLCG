/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (min((min(814999620, 4773603035342011041)), (!var_9)));
                var_19 = (min((((arr_4 [i_1] [i_1 - 2] [i_1 + 2]) ? (arr_3 [i_1 - 2]) : (arr_3 [i_1 - 1]))), (arr_3 [i_1 - 2])));
                arr_5 [i_0] = (-(((-30948 && (arr_1 [i_0] [i_1])))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_20 = (max(var_16, (((-var_13 + 2147483647) >> var_13))));

                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        var_21 = (min(var_21, ((min(((min(1, 1))), ((18446744073709551614 ? var_15 : ((max(var_9, var_13))))))))));
                        arr_10 [i_0] [i_0] [i_0] = max((((arr_9 [i_3] [i_2] [i_2] [i_1 + 2] [i_1 + 2] [i_0]) ? (((var_8 ? var_0 : (arr_6 [i_3])))) : (arr_2 [12]))), (((~(arr_3 [i_0])))));
                    }
                    var_22 *= (min((max(var_0, var_7)), (max(((min(12, 19318))), 1055451034))));
                    var_23 = (max(var_23, (min(((min(var_16, var_16))), var_5))));
                }
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_24 = (min(1, 34345));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_25 = var_10;
                                var_26 -= ((min(var_1, (arr_9 [i_0] [i_0] [i_0] [16] [16] [i_0]))));
                                var_27 = var_2;
                                arr_18 [i_5] [i_1] [i_4] [i_5] [i_6] = (max((((((arr_17 [i_0] [i_0] [7] [7] [i_6 - 1]) | var_13)))), (arr_2 [i_1 + 2])));
                            }
                        }
                    }
                    var_28 = (min(var_28, ((min(((((7679623046303783927 | var_7) ? var_10 : (max(var_7, var_7))))), (max(((max(var_1, (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1])))), (min(var_15, var_8)))))))));
                    var_29 += (((max((arr_17 [i_0] [1] [i_0] [i_1 + 2] [i_4]), (arr_17 [i_0] [i_0] [i_4] [i_1 + 1] [i_0]))) ? (arr_17 [i_0] [i_0] [1] [i_1 + 2] [i_1]) : ((var_2 ? var_0 : (arr_8 [i_1 - 1] [i_1 - 1] [i_4] [i_4] [i_4] [i_4])))));
                }
                var_30 = ((min((arr_7 [i_0] [i_0] [i_1 - 1]), (min((arr_3 [i_1]), var_12)))));
            }
        }
    }
    var_31 = (min(((((max(var_17, -1282481508856432453))) ? (max(var_7, var_8)) : ((max(var_17, var_12))))), ((min(var_12, (max(var_4, var_1)))))));
    var_32 = (min(var_32, ((max(var_0, var_0)))));
    #pragma endscop
}
