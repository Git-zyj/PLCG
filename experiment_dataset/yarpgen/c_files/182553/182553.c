/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_2 - 2] [i_3] [14] [i_2] = 0;
                        arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] = (var_4 % var_3);
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_16 = ((-24704 ? 9790544724868170093 : 24690));
                        arr_16 [10] [1] [1] [i_2] [i_4] = ((-(arr_0 [i_0])));
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_20 [i_0] [4] [4] [i_2] [i_0] = 24713;

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_17 = (min(var_17, (((((max(6, -24710))) ? (~-24713) : 2199023254528)))));
                            var_18 = (~66);
                            var_19 ^= ((-((var_14 ? (arr_9 [i_0] [i_1] [i_2] [i_6]) : ((var_6 ? var_2 : var_6))))));
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            arr_27 [i_0] [i_1] [i_1] [i_0] |= (((arr_26 [i_0] [i_2 + 4] [3] [i_5]) ? ((((arr_5 [i_2 + 3]) != (arr_14 [i_2 - 3])))) : ((~(arr_24 [i_0] [i_2 + 4] [i_2 - 2] [i_2] [i_2])))));
                            var_20 *= -2199023254533;
                            arr_28 [i_2] [i_2] [i_5] [i_5] [i_2] = (min((((99 >= (max(2199023254534, var_15))))), 3));
                            arr_29 [i_2 + 3] [i_2] = ((((((((var_0 ? -24741 : var_1))) ? 24713 : (~24713)))) ? -36 : var_12));
                        }
                        var_21 |= ((((((arr_14 [i_0]) ? ((((arr_8 [i_0] [i_1] [i_1] [i_5]) ? 2199023254509 : (arr_22 [i_5] [i_1] [i_0] [i_1] [i_0])))) : (((arr_6 [i_0] [i_0]) ? 4611686018427387904 : (arr_5 [i_0])))))) ? var_2 : ((((13 <= (arr_10 [i_1] [i_1]))) ? (((((arr_7 [i_0] [i_1] [i_1]) >= var_14)))) : 9790544724868170109))));
                    }
                    var_22 *= ((2093187102 ? (arr_8 [i_0] [i_1] [i_2] [i_2]) : 1709447954));
                    var_23 = (min((~24704), (1 != 173)));
                    arr_30 [i_0] [i_0] [i_2] [i_1] |= ((21854 == (~-900287302)));
                }
            }
        }
    }
    var_24 = (max((((615161805 != (!var_12)))), var_2));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 4; i_9 < 21;i_9 += 1)
        {
            {
                var_25 = 3;
                arr_38 [20] [20] [i_8] = (7 ? 85 : -32760);
            }
        }
    }
    var_26 = max(((-var_0 ? ((min(var_6, var_13))) : var_11)), (var_13 >= 4294967292));
    #pragma endscop
}
