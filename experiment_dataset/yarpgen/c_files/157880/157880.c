/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = ((3 > (arr_0 [i_0])));
        arr_4 [i_0] [i_0] = (-127 - 1);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 19;i_3 += 1)
            {
                {
                    var_18 = (max(var_18, (((31 > (arr_10 [i_3] [i_2 - 3] [i_3]))))));
                    var_19 = (13 && -3);

                    for (int i_4 = 3; i_4 < 20;i_4 += 1)
                    {
                        arr_13 [i_1] [i_1] [i_1] = (arr_2 [i_1]);
                        arr_14 [i_1] [i_1] = (var_13 / var_15);
                        var_20 = 65;
                    }
                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        var_21 ^= ((~(arr_1 [16])));
                        var_22 -= var_3;
                        var_23 -= (arr_17 [i_1] [i_5 - 3] [i_5 - 3]);
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        arr_21 [i_1] [i_2] [i_1] = (i_1 % 2 == 0) ? ((((((arr_16 [i_1]) + 2147483647)) << (((((arr_16 [i_1]) + 127)) - 12))))) : ((((((((arr_16 [i_1]) - 2147483647)) + 2147483647)) << (((((((arr_16 [i_1]) + 127)) - 12)) - 172)))));
                        arr_22 [i_1] [i_6] [i_3] [i_1] [i_2] [i_1] = 13;
                    }
                    arr_23 [i_1] [i_1] [i_1] = (arr_19 [i_1 + 1] [i_1 - 2] [i_1] [i_1] [i_3 + 2]);
                    arr_24 [i_1] [i_1] = (!25);
                }
            }
        }
        var_24 = (!-26);

        for (int i_7 = 3; i_7 < 19;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 4; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    {
                        var_25 -= arr_15 [i_8];

                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            arr_37 [i_1] = ((!(arr_32 [i_1])));
                            var_26 = (min(var_26, 25));
                        }
                        var_27 *= ((-102 <= (arr_32 [i_1])));
                        var_28 = (arr_28 [i_1 - 1] [i_1]);
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_11 = 1; i_11 < 19;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 19;i_13 += 1)
                    {
                        {
                            var_29 = (((arr_20 [i_1] [i_7] [i_11] [i_12] [i_13]) ^ 60));
                            var_30 += (arr_35 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    {
                        var_31 = ((~((~(arr_33 [i_1] [i_7] [i_14] [i_15])))));
                        arr_51 [i_1] [i_14] [i_7] [i_1] = (arr_50 [i_1] [i_1 - 2] [i_15] [i_1 - 2] [i_15]);
                        var_32 &= 32;
                    }
                }
            }
            arr_52 [i_1] [i_1] = 127;
        }
        for (int i_16 = 0; i_16 < 21;i_16 += 1) /* same iter space */
        {

            for (int i_17 = 0; i_17 < 21;i_17 += 1)
            {
                var_33 = (((arr_31 [i_1]) == -85));
                arr_59 [i_1] [i_16] [i_16] [i_16] = (((arr_7 [i_1 - 2] [i_1 - 2]) == (arr_20 [i_1] [i_1 + 1] [i_1] [i_1 - 1] [i_1])));
            }
            arr_60 [i_1] [i_1] [i_1] = -115;
        }
        for (int i_18 = 0; i_18 < 21;i_18 += 1) /* same iter space */
        {
            var_34 *= (arr_42 [i_1] [i_1 - 1] [i_1] [i_1] [i_1]);
            /* LoopNest 2 */
            for (int i_19 = 4; i_19 < 18;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 21;i_20 += 1)
                {
                    {

                        for (int i_21 = 1; i_21 < 17;i_21 += 1)
                        {
                            var_35 = (max(var_35, var_14));
                            arr_69 [i_1] [i_1] [i_19] [i_19] [i_21] [i_19] = arr_30 [i_1];
                            var_36 -= (((arr_5 [i_19 - 3]) + (arr_5 [i_19 + 2])));
                        }
                        for (int i_22 = 0; i_22 < 21;i_22 += 1)
                        {
                            var_37 = (i_1 % 2 == zero) ? (((-(((((arr_32 [i_1]) + 2147483647)) << (((arr_41 [i_1] [i_1] [i_1] [i_22]) - 2))))))) : (((-(((((arr_32 [i_1]) + 2147483647)) << (((((arr_41 [i_1] [i_1] [i_1] [i_22]) - 2)) - 49)))))));
                            var_38 = (min(var_38, (-127 - 1)));
                        }
                        var_39 = (min(var_39, (var_0 < var_3)));
                        arr_72 [i_1] = ((~(arr_29 [i_1] [i_19 - 4] [i_1])));
                    }
                }
            }
        }
        arr_73 [i_1] [i_1] = (((((arr_57 [i_1 - 1] [i_1]) + 2147483647)) >> (((arr_57 [i_1 - 1] [i_1 - 1]) + 64))));
    }
    for (int i_23 = 2; i_23 < 20;i_23 += 1) /* same iter space */
    {
        var_40 = -102;
        var_41 += arr_62 [i_23] [i_23] [i_23];
        arr_78 [i_23] [i_23] = -1;
        arr_79 [i_23] [i_23] = (max((((arr_38 [i_23] [i_23] [i_23] [i_23]) & var_16)), (((max(-21, (arr_36 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23])))))));
    }
    for (int i_24 = 2; i_24 < 20;i_24 += 1) /* same iter space */
    {

        for (int i_25 = 4; i_25 < 18;i_25 += 1)
        {
            var_42 = (~var_10);
            /* LoopNest 2 */
            for (int i_26 = 0; i_26 < 21;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 21;i_27 += 1)
                {
                    {
                        var_43 = (min(var_43, (arr_87 [i_24] [i_25 - 2] [i_24] [i_27])));
                        var_44 = ((!(arr_40 [i_24] [i_25] [i_26] [i_27] [i_27])));
                        arr_94 [i_24] [i_24] [i_24] [i_27] = (((((var_15 - (arr_6 [i_26] [i_27])))) ? ((var_2 + (arr_19 [i_24 - 1] [i_24] [i_25] [i_27] [i_27]))) : ((min((arr_67 [i_26] [i_26] [i_24 + 1] [i_27] [i_26]), (arr_1 [i_27]))))));
                    }
                }
            }
        }
        arr_95 [i_24] = ((!((min(98, 5)))));
    }
    var_45 = var_9;
    #pragma endscop
}
