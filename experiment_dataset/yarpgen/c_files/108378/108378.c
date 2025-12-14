/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((!(~-3228443462439907378))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 -= -1;
                    var_18 = ((var_6 ? (((var_2 | 117) ? (((arr_6 [i_0]) << (255 - 245))) : var_14)) : ((~(!4294967295)))));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_19 = var_0;
                        arr_12 [i_0 + 1] = (min((~var_6), (arr_5 [i_0 + 2])));
                        var_20 -= min(547608330240, (((var_6 ? var_3 : 31070))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_21 -= 127;
                        var_22 = -var_12;
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_19 [i_0 + 2] [i_1] &= ((~(arr_15 [i_0 - 1] [i_0 - 3])));
                        arr_20 [i_5] [i_1] [i_0] &= ((!(arr_9 [7] [7] [7])));
                    }
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        var_23 = (max(var_23, (arr_1 [i_1] [i_0])));
                        arr_24 [i_0] [3] [7] [7] |= (max((min((arr_15 [i_1] [i_6 - 1]), (arr_15 [i_0 + 1] [i_6 - 2]))), (arr_15 [i_0] [i_6 + 1])));
                        var_24 &= (min((((((arr_4 [i_0]) ? var_3 : 3473)) >> (var_4 - 118))), ((((((((-127 - 1) + 2147483647)) << (224 - 224))) == 1)))));
                        var_25 = var_7;
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            arr_30 [i_0] [i_0] [i_7] [i_2] [6] [i_0] [i_8] = 98;
                            var_26 = (((6144 != var_8) ? 192 : 4294967289));
                        }
                        var_27 *= ((var_10 ? 32768 : (arr_28 [4] [4])));
                        arr_31 [i_7] = var_7;
                        var_28 = (min(var_28, var_2));
                    }
                }
            }
        }
    }
    var_29 -= ((-((~((24 ? 12615554406057950117 : var_9))))));
    var_30 = (min(var_7, var_13));
    var_31 = -var_4;
    #pragma endscop
}
