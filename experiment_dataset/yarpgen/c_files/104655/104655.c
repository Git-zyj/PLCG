/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, ((max(var_10, (((arr_7 [22] [i_1] [i_2] [i_2]) << (var_13 + 1049945524))))))));
                    arr_9 [i_0] [i_0] [i_2] = (max(var_0, ((var_3 ? ((max(var_4, var_10))) : (max(var_15, var_2))))));
                    var_20 = (((((arr_3 [i_0] [9] [14]) ? var_12 : (arr_4 [i_1] [i_0])))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_21 = (19012 || 384665618934636953);

        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            var_22 = ((max((arr_6 [i_3] [13] [i_3] [i_4 - 1]), var_15)));
            arr_15 [i_4] = var_7;
        }

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            arr_19 [i_3] [i_5] = max(var_0, ((var_10 * (arr_13 [i_3] [i_3]))));
            var_23 = ((((min((arr_16 [i_3] [i_3] [i_5]), var_17))) ? (((arr_16 [i_3] [i_5] [i_3]) ? (arr_16 [i_5] [i_5] [i_3]) : (arr_16 [i_3] [i_3] [i_3]))) : ((var_1 ? (arr_16 [i_3] [i_5] [i_5]) : (arr_16 [i_5] [i_5] [i_3])))));
            var_24 = (min((-47 >= 18062078454774914652), ((max(384665618934636953, 32756)))));
        }
        arr_20 [i_3] [i_3] = ((((var_6 ? (arr_7 [i_3] [i_3] [i_3] [i_3]) : (arr_7 [i_3] [9] [i_3] [i_3]))) >= ((((arr_18 [i_3] [i_3] [i_3]) & (arr_18 [i_3] [i_3] [i_3]))))));
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_25 = ((((max(var_11, (arr_23 [i_6] [i_6])))) ? ((var_3 + (arr_22 [i_6] [i_6]))) : (max((arr_23 [i_6] [i_6]), (arr_23 [i_6] [i_6])))));
        var_26 -= min(((((var_4 ? var_5 : var_16)))), (((max(var_14, (arr_24 [i_6]))) | (((arr_24 [i_6]) | var_17)))));
        arr_25 [i_6] = (min(((max(var_13, var_17))), (max((arr_22 [i_6] [i_6]), (max((arr_21 [i_6] [i_6]), (arr_23 [i_6] [i_6])))))));
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        arr_28 [i_7] [i_7] = (min((max(32756, 2048)), ((min(var_12, var_12)))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_10 = 2; i_10 < 22;i_10 += 1) /* same iter space */
                    {
                        var_27 = (var_11 - var_10);
                        var_28 = ((var_13 ? (arr_5 [i_7] [21] [i_7]) : var_5));
                        var_29 ^= (((arr_5 [i_10 + 1] [i_10] [i_10 - 2]) | (arr_4 [i_7] [i_10])));
                    }
                    for (int i_11 = 2; i_11 < 22;i_11 += 1) /* same iter space */
                    {
                        var_30 = (max((max((arr_6 [i_11 - 2] [i_8] [i_9] [i_9]), (arr_7 [i_11 - 2] [i_8] [i_9] [i_11 - 1]))), ((((((((arr_21 [i_8] [i_8]) >= (arr_33 [i_9] [i_9]))))) * ((var_14 ? var_6 : var_1)))))));

                        for (int i_12 = 2; i_12 < 21;i_12 += 1) /* same iter space */
                        {
                            var_31 = ((((var_10 == (max((arr_6 [i_7] [i_8] [i_9] [i_11]), var_4)))) || var_11));
                            var_32 = ((min((arr_2 [i_11 - 2]), (arr_0 [i_11 + 1]))) % (max(var_3, (arr_0 [i_11 - 1]))));
                        }
                        for (int i_13 = 2; i_13 < 21;i_13 += 1) /* same iter space */
                        {
                            var_33 = (arr_34 [i_7] [i_8] [i_9] [i_9] [i_9] [i_13]);
                            arr_44 [i_7] [i_7] [21] [21] [i_9] = max(((((arr_30 [i_7] [i_8] [i_9]) >= (((max(var_2, var_12))))))), ((((max(var_1, (arr_33 [i_9] [i_8])))) ? (var_3 * var_0) : (arr_30 [i_11 - 1] [i_11 - 2] [i_13 + 1]))));
                            var_34 = (max(var_34, ((((arr_7 [i_11 - 2] [i_11 + 1] [i_13 - 2] [i_13 + 1]) & -var_5)))));
                        }
                        for (int i_14 = 2; i_14 < 21;i_14 += 1) /* same iter space */
                        {
                            var_35 = (max((((var_16 ? var_3 : ((~(arr_21 [1] [i_8])))))), (max(((max(var_4, var_11))), (max((arr_24 [i_14]), (arr_35 [i_7] [i_11])))))));
                            arr_47 [i_8] [i_9] [i_7] [i_9] [i_7] = ((((((arr_26 [i_9]) / (arr_26 [i_8])))) - (((arr_3 [i_7] [i_7] [i_7]) ? var_6 : (arr_3 [i_7] [i_9] [i_11])))));
                            var_36 = var_16;
                            arr_48 [i_9] [i_14] [i_9] [i_11] [i_14] [i_7] = (max((arr_31 [i_7] [i_8] [i_9] [i_11]), (min(var_8, (arr_34 [i_14 + 2] [i_14] [i_14 - 2] [i_14 - 1] [i_9] [i_14])))));
                        }
                    }
                    var_37 = (((((max(116, 18062078454774914642)) == 32756)) || ((max(var_10, ((max((arr_41 [i_7] [i_8] [i_8] [i_9]), var_18))))))));
                }
            }
        }
    }
    for (int i_15 = 2; i_15 < 15;i_15 += 1)
    {
        var_38 = var_1;
        arr_51 [i_15] [i_15] = var_13;
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 17;i_16 += 1)
        {
            for (int i_17 = 3; i_17 < 14;i_17 += 1)
            {
                {
                    var_39 = var_3;
                    arr_57 [i_15] = ((max(2061284971, 384665618934636975)));
                    var_40 = (i_15 % 2 == 0) ? ((max((((arr_53 [i_17] [i_15] [i_15 + 2]) >> (((arr_12 [i_15] [0]) - 16895694552436947430)))), (var_3 <= var_14)))) : ((max((((((arr_53 [i_17] [i_15] [i_15 + 2]) + 9223372036854775807)) >> (((arr_12 [i_15] [0]) - 16895694552436947430)))), (var_3 <= var_14))));
                    var_41 = (((((max((arr_42 [i_16] [i_16] [i_16]), (arr_3 [8] [i_16] [8])))) ? (max(var_14, var_6)) : (var_11 + var_14))));
                }
            }
        }
    }
    var_42 = (max(((max(var_2, var_10))), (max(var_6, -var_0))));
    var_43 = (var_14 ^ var_4);
    var_44 = ((((((max(var_18, var_10))) || (((var_13 ? var_10 : var_5))))) ? -var_7 : (var_6 + var_9)));
    #pragma endscop
}
