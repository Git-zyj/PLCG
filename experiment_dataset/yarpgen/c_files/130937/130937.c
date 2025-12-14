/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= (max(((-(~var_0))), var_14));
    var_17 += ((var_8 ? ((var_13 ? var_10 : -33)) : ((var_12 ? var_1 : var_0))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 *= ((+(((arr_6 [i_2 - 2] [i_1] [0]) / (arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 2])))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_10 [i_3] = var_9;
                        var_19 = (max(var_19, ((((((min(-75, 0)) ? ((3 ? 20 : 210)) : ((((arr_6 [i_3] [i_0] [i_0]) > (arr_7 [3] [i_1] [i_2 - 1])))))))))));
                        var_20 -= (min(((15385 ? -32767 : 12)), ((var_14 ? (arr_8 [i_1] [14] [i_1]) : ((var_3 ? 4993 : (arr_0 [i_0])))))));
                    }
                    for (int i_4 = 3; i_4 < 14;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_21 *= arr_4 [i_1] [i_1];
                            arr_16 [i_4] [i_4] = (((arr_11 [i_1] [i_2 - 1] [i_1] [i_4 - 3] [i_4 - 3] [i_5]) - ((var_5 ? var_6 : var_13))));
                            var_22 = ((!(arr_15 [i_2 - 1] [i_2] [i_4] [9] [i_4] [i_4])));
                            arr_17 [i_0] [i_1] [i_2] [i_2] |= (arr_8 [i_0] [i_0] [i_2]);
                            arr_18 [i_4] [10] [i_4] [i_1] [i_4] = (((arr_9 [i_4 - 2] [i_2] [i_2 - 1] [i_1]) & -12289));
                        }
                        for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            var_23 = (max(var_23, (arr_8 [i_0] [i_1] [i_2 - 2])));
                            arr_21 [i_2] |= 32767;
                            var_24 = ((!(((~((var_2 ? (arr_5 [i_4] [i_6]) : var_15)))))));
                        }
                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            arr_24 [i_4] = ((30 ? 19830 : 91));
                            var_25 = (((((-var_13 / (arr_4 [i_0] [i_1])))) ? ((-(arr_12 [i_7 + 1] [i_7 + 1] [i_7 + 2] [i_7 - 1]))) : (arr_22 [i_2 - 2] [i_2 - 2] [i_7 + 3] [i_4] [i_7 + 2])));
                            var_26 = (((((11305 ? (arr_12 [i_0] [i_2] [i_4 - 2] [i_7 + 3]) : 1))) ? (~23667) : (~20765)));
                        }
                        var_27 -= ((+((var_5 ? (var_6 < var_4) : (arr_19 [i_4 - 3] [i_4 - 3] [i_2 - 1] [i_2] [i_2 + 1])))));
                        var_28 = (max(var_28, 105));
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_29 = (min(var_29, (arr_14 [i_0] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2])));
                        var_30 = ((((((35654 & -11) ? (arr_26 [i_2 + 1] [i_2 - 1]) : (arr_2 [i_1] [i_8])))) ? ((var_2 & (arr_14 [i_8] [i_2 + 1] [i_2 - 1] [i_2] [i_8]))) : (((var_15 != (((11308 < (arr_15 [i_0] [i_1] [i_1] [i_2] [i_8] [i_2])))))))));
                    }
                }
            }
        }
    }
    var_31 = var_9;
    #pragma endscop
}
