/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = (min(var_18, var_9));
                var_19 = ((0 ? var_0 : -var_11));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_20 = 65535;

                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            arr_18 [i_2] [i_2] [i_5] [i_5] [i_6] = ((~(var_4 && 65535)));
                            arr_19 [1] [18] [i_4] [i_5] [i_5] = (arr_17 [i_3 - 3] [i_6] [i_6 - 2] [i_6 - 2] [i_5]);
                        }
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_21 *= 3730117315631929747;
                        var_22 &= ((((((arr_21 [i_7] [i_7]) ? 12988 : (arr_21 [i_2] [3])))) ? (((+((max((arr_6 [i_2]), (arr_17 [2] [i_3 - 2] [i_3 - 2] [i_7] [i_2]))))))) : (((arr_15 [i_3] [i_3 + 2] [i_3 + 2] [i_3 - 4] [i_3 + 3]) ? var_16 : 588009926661586073))));
                    }
                    var_23 = (max(var_23, ((min((((~(arr_4 [i_2])))), (max((~52547), ((((arr_15 [i_2] [i_2] [i_3 + 3] [13] [i_4]) > 92))))))))));

                    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                    {
                        var_24 = (max(var_24, ((((((((var_7 && (arr_22 [12] [i_3 - 2] [i_8]))) > -52548))))))));
                        var_25 = (((((((arr_23 [i_2]) ? 163 : (arr_25 [i_2] [i_3] [i_3 + 1] [i_4] [i_4] [i_3 + 1]))) > -1905446693)) ? (4294967289 && 329152689) : ((((((arr_4 [i_4]) ? var_6 : var_10))) ? ((var_6 ? var_6 : var_0)) : 147))));
                        var_26 ^= ((var_1 > ((((min(3068656170, (arr_16 [i_2])))) ? (arr_6 [16]) : -122))));
                        var_27 = (~var_7);
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        arr_29 [i_2] [i_3 - 1] [i_4] [1] &= ((52547 ? 0 : 0));
                        arr_30 [i_2] [i_3 - 3] [i_3 - 3] [i_9] = (((arr_14 [i_2] [i_3 + 2] [i_4] [i_9] [i_3 + 3]) && (var_13 && 88)));
                        var_28 = ((-((0 ? 0 : 2180282165513201308))));
                        var_29 -= -var_0;
                    }
                    for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                    {
                        var_30 += (((((-1587483377 && var_5) && -1)) ? ((+(((arr_6 [i_4]) ? 0 : 224)))) : 105));
                        var_31 = (((((~(arr_13 [2] [i_3 + 3] [i_3] [i_10])))) ? (((((((~(arr_26 [6] [i_3 + 2] [i_3 + 2] [i_10])))) && var_16)))) : var_0));
                    }
                    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                    {
                        var_32 = (min(27, (((!(arr_17 [i_3 + 4] [i_3 + 3] [i_3 - 3] [i_11] [i_11]))))));
                        arr_36 [i_2] [i_2] [i_2] [i_2] = ((-((((arr_28 [13] [13] [5] [13] [i_11]) > var_11)))));

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            arr_39 [i_12] [i_12] [i_12] [i_12] [i_12] = -83;
                            arr_40 [2] = (((((0 ? 52547 : 46872))) ? (58035 > var_15) : ((65513 ? var_11 : 65520))));
                            arr_41 [i_2] [i_3] [i_4] [i_11] [i_2] [i_12] [i_2] = var_7;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
