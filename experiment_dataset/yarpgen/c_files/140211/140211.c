/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = (max(var_14, (((var_7 ? (((((max(var_5, 21)) <= -var_3)))) : ((var_10 ? (((8945 ? var_13 : 56598))) : ((19 ? var_4 : (arr_0 [i_0]))))))))));
        var_15 -= (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_16 = (arr_2 [i_1]);
        var_17 = (arr_3 [i_1]);
    }

    for (int i_2 = 4; i_2 < 17;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                arr_11 [i_4] [i_2] = (arr_3 [i_3 + 2]);

                for (int i_5 = 4; i_5 < 16;i_5 += 1)
                {
                    arr_14 [i_2] = (min(35106, 8923));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_18 [i_2] [i_3] = (arr_12 [12] [i_2 - 2] [i_2]);
                        arr_19 [i_2] [i_6] [i_2] [i_2] [i_2] [i_2] [i_2] &= 8937;
                        var_18 = 2550447460159548010;
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_19 &= ((~((((max(var_9, 64766))) ? 64791 : (arr_12 [i_5 - 4] [i_5 - 3] [i_7])))));
                        var_20 -= ((((min((56608 * 2147483584), ((var_12 ? 8945 : var_0))))) ? (arr_16 [i_2] [i_2] [i_4] [i_5 + 2] [i_5 - 2] [i_7]) : var_9));
                    }
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        var_21 = (min((((13967 * 56588) ? 8954 : (var_3 * var_12))), var_11));
                        arr_25 [i_4] [i_2] [i_8] [i_5] [i_2] [i_3] = var_0;
                    }
                    arr_26 [i_2 - 2] [i_3] [i_4] [i_2] = 56594;
                }
            }
            for (int i_9 = 1; i_9 < 15;i_9 += 1)
            {
                var_22 = var_9;
                var_23 -= var_9;
            }
            /* vectorizable */
            for (int i_10 = 2; i_10 < 16;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 4; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        {
                            var_24 -= (var_5 - (((1909 * (arr_24 [i_2] [i_2] [i_2] [i_2] [i_2])))));
                            var_25 = -var_13;
                            var_26 += var_7;
                        }
                    }
                }
                var_27 = (var_5 || var_0);
                arr_37 [i_2] = (-(~var_13));
                arr_38 [i_2] [i_3] [i_2] [i_3] = ((!(arr_2 [i_2])));
                var_28 = (max(var_28, ((((arr_15 [i_10] [i_10 - 2] [i_2 - 2]) ? ((var_13 ? -2514 : 8447292442487056277)) : (arr_23 [i_2] [i_2 + 1] [i_3] [i_3] [i_10]))))));
            }
            var_29 = (max(var_29, ((max(((min((var_1 * var_1), 3882))), var_6)))));
            var_30 = (max(var_30, 56581));
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
        {
            arr_41 [i_2] [i_2] = 2325050072;
            arr_42 [i_2] [i_2] [i_2] = var_11;
        }
        for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
        {
            var_31 = ((((min(var_0, 63689))) ? (!8955) : (var_2 == 26585)));

            for (int i_15 = 2; i_15 < 15;i_15 += 1)
            {
                var_32 -= 8948;

                /* vectorizable */
                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    var_33 = (max(var_33, ((((arr_20 [i_2 - 2] [i_14] [i_2 - 2] [i_15 + 3] [i_2] [i_14]) >> (((arr_20 [i_2] [i_14] [i_2 - 2] [i_15 + 1] [i_2] [i_14]) - 356365965)))))));
                    arr_52 [i_2] [i_14] = (((arr_28 [i_2] [i_2]) > 13853773314567624176));
                    var_34 *= (((~var_9) ? ((var_3 ? var_12 : var_13)) : (arr_39 [i_16] [i_2 - 1])));
                }
                for (int i_17 = 3; i_17 < 17;i_17 += 1)
                {

                    for (int i_18 = 0; i_18 < 18;i_18 += 1)
                    {
                        arr_58 [i_2 - 2] [1] [i_15] [i_14] [i_17 - 3] [i_2] = (arr_8 [i_2]);
                        arr_59 [i_2] [i_2] [i_2] [i_17] [i_18] [i_18] = (((arr_55 [i_15] [i_15 - 2] [i_15 + 1] [i_2] [i_15 + 3] [i_15 + 3]) ? ((-3882 ? 35114 : -19976)) : (arr_55 [i_15] [0] [i_15 - 2] [i_2] [i_15 + 1] [i_15 + 1])));
                        var_35 = (var_11 / 8947);
                        var_36 += (max((max((arr_15 [i_18] [i_15] [i_18]), (arr_47 [i_18] [i_14] [i_15] [i_14]))), (arr_43 [i_18] [i_17 + 1] [i_2])));
                    }
                    var_37 *= 8923;
                    var_38 = (min(var_38, ((((56588 - 0) * (min(var_0, ((((arr_28 [i_15] [i_2]) ? -100 : 2519233672))))))))));
                }
                for (int i_19 = 0; i_19 < 18;i_19 += 1)
                {
                    var_39 &= (127 * var_6);
                    var_40 *= (arr_54 [i_2] [i_14] [i_15] [i_19]);
                    arr_62 [i_15] [i_2] [i_15] [i_15] = (max(((var_13 ? 1 : 56588)), ((+(((arr_27 [0] [i_15] [i_14] [0]) * 11972))))));
                }
                for (int i_20 = 0; i_20 < 18;i_20 += 1)
                {
                    arr_67 [i_2] [i_14] [8] [8] = (9223372036854775799 ? (arr_36 [i_2] [i_2] [i_15] [i_2 - 3]) : -25031);
                    var_41 = ((~(min(((min((arr_33 [i_2 + 1] [i_2] [i_15 - 1] [i_20]), 1))), var_2))));
                }
            }
            for (int i_21 = 0; i_21 < 18;i_21 += 1)
            {
                var_42 = var_3;
                var_43 = 4294967294;
                var_44 *= (arr_54 [i_2] [i_14] [i_14] [i_21]);
                arr_70 [i_2] [i_14] [i_2] = 182;
            }
            var_45 = 13853773314567624176;
        }
        /* LoopNest 2 */
        for (int i_22 = 2; i_22 < 16;i_22 += 1)
        {
            for (int i_23 = 1; i_23 < 17;i_23 += 1)
            {
                {
                    var_46 *= (arr_40 [i_2] [i_2 - 1] [i_23 + 1]);
                    var_47 = (max(((8948 ? -86 : 1)), (arr_3 [i_23])));
                    /* LoopNest 2 */
                    for (int i_24 = 2; i_24 < 17;i_24 += 1)
                    {
                        for (int i_25 = 0; i_25 < 18;i_25 += 1)
                        {
                            {
                                var_48 = var_13;
                                arr_81 [i_2] [i_22] [i_23 + 1] [i_22] [i_25] = var_4;
                                var_49 = (min(var_49, var_8));
                                var_50 = ((((max(var_1, 2241833626727316853)) & ((var_2 ? -513913870 : var_6)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
