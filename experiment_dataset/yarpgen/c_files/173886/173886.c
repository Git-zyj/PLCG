/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 105;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (max(-1023, ((((arr_0 [i_0]) ? var_7 : (arr_1 [i_0]))))));
        arr_3 [7] = (arr_0 [i_0]);
        var_18 = (min((max((arr_0 [i_0]), var_10)), ((((var_1 > var_1) == (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_19 *= (max(((((1647843310 ? (arr_1 [i_1]) : (arr_4 [i_1]))) | (-110 | 1647843314))), (min(1, 4081722762))));
        arr_7 [i_1] [i_1] = (((arr_1 [i_1]) ? ((-38 ? (arr_5 [i_1]) : ((max(1, var_10))))) : var_13));
        arr_8 [i_1] [i_1] = ((((((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1])))) ? (((arr_4 [i_1]) | (arr_4 [i_1]))) : ((-(arr_4 [i_1])))));
        arr_9 [i_1] = var_8;
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_18 [i_1] [i_4] [15] [i_4] [i_4] = (~53);

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            var_20 = (max(var_20, (~96)));
                            arr_21 [i_4] [i_2] [i_3] [i_4] [i_2] = -7242;
                            var_21 = (var_8 < (var_16 >= -33));
                        }
                        var_22 = (max(var_22, (((((((arr_19 [i_2 + 1] [i_2] [i_2] [i_4 - 3] [i_4]) ? (arr_19 [i_2 - 1] [i_4 + 1] [i_4 - 2] [i_4 - 3] [3]) : var_1))) ? -74 : (arr_19 [i_2 - 1] [i_3] [i_4 + 1] [i_4 + 2] [1]))))));
                        var_23 -= (max(var_2, ((max(var_10, var_5)))));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
    {
        var_24 = (arr_0 [i_6]);
        var_25 = (max(var_25, ((max(32756, (max(1, ((var_11 ? var_7 : 2647123998)))))))));

        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_8 = 3; i_8 < 15;i_8 += 1) /* same iter space */
            {

                for (int i_9 = 1; i_9 < 16;i_9 += 1)
                {
                    arr_33 [i_8] = (~14);
                    var_26 ^= ((((arr_0 [i_6]) ? -96 : 3983596648)));

                    for (int i_10 = 2; i_10 < 14;i_10 += 1)
                    {
                        var_27 = ((-12 ? 95 : 1));
                        arr_37 [i_8] [13] [i_8] [i_10 - 2] = var_16;
                        arr_38 [i_6] [i_7] [i_7] [i_9] [i_10] |= ((-1 ? ((-5930 ? (arr_14 [i_10] [i_7] [1] [i_9]) : (arr_5 [i_10]))) : (arr_20 [i_6] [i_10 + 3] [i_9] [i_9] [i_10 + 3] [i_7])));
                    }
                }
                arr_39 [i_6] [i_8] [i_8 - 1] = ((1338993177 ? -63 : ((var_10 ? (arr_6 [1]) : var_2))));
                arr_40 [i_6] [i_8] = ((var_10 ? ((var_12 ? 3142980861 : var_5)) : ((((arr_11 [i_6] [i_6] [i_8 - 2]) ? var_0 : -22)))));
                var_28 &= ((~(3020960571 > var_3)));

                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_29 ^= ((((32754 ? var_10 : 854300866)) * ((0 ? 2821435142 : (arr_15 [i_6] [i_7] [i_11] [i_6])))));
                    arr_43 [i_6] [i_7] [i_7] [i_8] [i_6] = 94;
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    arr_47 [i_6] [15] [i_8] = ((var_4 ? (arr_10 [i_8 - 1] [i_8 + 1] [i_8 + 2]) : (var_12 - 1)));
                    var_30 *= (arr_14 [i_8 + 1] [i_8] [i_8] [i_8 - 2]);
                    arr_48 [i_6] [1] [i_8] [i_8] = var_11;
                    arr_49 [i_8] [i_8] [i_7] [i_7] [i_8] [i_8] = (-107 != -4);
                    var_31 = var_5;
                }
                for (int i_13 = 4; i_13 < 16;i_13 += 1)
                {
                    arr_52 [i_8] [i_8] [i_7] [i_6] [i_8] [i_6] = (arr_11 [i_6] [i_6] [i_6]);
                    arr_53 [i_8] [i_8] [i_7] [i_8] = (((((var_1 ? var_15 : (arr_10 [i_8] [i_8] [i_8])))) ? (24 & var_5) : (arr_28 [i_6] [i_8 - 3] [i_13 - 1])));
                }
            }
            /* vectorizable */
            for (int i_14 = 3; i_14 < 15;i_14 += 1) /* same iter space */
            {
                arr_56 [i_7] [i_14] [i_7] [i_14] = ((((var_14 / (arr_15 [i_14] [i_7] [i_14] [i_6]))) > 2695981489));

                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    var_32 = (((arr_16 [i_6] [i_14 + 1] [i_14] [i_14 - 3]) ? 3591788568 : 1));
                    arr_59 [i_14] [i_14 - 2] [i_14 - 1] [1] [i_14] [i_7] = (((arr_4 [i_6]) + (arr_4 [i_14 - 1])));
                }
                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {
                    var_33 &= var_0;
                    var_34 = var_8;
                }
                for (int i_17 = 2; i_17 < 14;i_17 += 1)
                {
                    arr_65 [i_17] [i_7] [i_7] [i_7] |= (((arr_13 [i_6] [i_6]) ^ ((~(arr_27 [i_6] [i_6] [i_6])))));

                    for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
                    {
                        var_35 = ((2721673741 ? 4294967295 : (arr_17 [i_7] [i_7] [i_14] [i_17 + 3] [i_18] [i_7])));
                        arr_68 [i_17] [i_7] [i_14] [i_14] [i_14] = (var_13 * var_1);
                        arr_69 [i_6] [i_6] [i_7] [1] [i_17] [i_14] = 1598985802;
                        var_36 = ((((((arr_46 [i_14] [i_17] [i_17]) ? 1151986435 : (arr_34 [i_18])))) ? 12 : (arr_54 [i_6] [i_7] [i_7] [i_17])));
                    }
                    for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
                    {
                        var_37 -= (~var_7);
                        var_38 = (((var_4 << var_6) ? var_0 : var_9));
                    }
                    for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
                    {
                        var_39 += (((((3033998115 ? (arr_44 [i_6] [i_6] [i_14] [i_14] [i_6]) : var_0))) ? 96 : var_0));
                        var_40 = ((((((arr_55 [i_7] [1] [i_7]) ? var_6 : var_7))) ? 1151986435 : (arr_26 [i_14 - 1])));
                        var_41 = (((arr_15 [i_7] [i_14] [i_14 + 2] [i_14]) || (((1 ? 1 : var_15)))));
                        arr_74 [i_6] [i_6] [i_14] [5] = (arr_67 [i_6] [i_7] [i_14] [i_6] [14]);
                        var_42 = var_4;
                    }
                }
                for (int i_21 = 0; i_21 < 17;i_21 += 1)
                {
                    var_43 = ((-(arr_16 [i_6] [i_14 - 2] [i_14] [1])));

                    for (int i_22 = 0; i_22 < 17;i_22 += 1)
                    {
                        arr_81 [i_14] [9] [i_14] [i_14] [i_7] = (var_15 > var_5);
                        arr_82 [i_14] [i_7] [i_14] [i_21] [i_22] [i_22] = var_0;
                    }
                }
            }
            var_44 *= (((arr_11 [i_6] [i_6] [i_7]) ? ((-(arr_46 [i_7] [i_7] [i_7]))) : ((((((arr_42 [i_6] [i_7] [i_6] [6]) ? var_7 : var_15))) ? (((arr_34 [i_7]) ? var_6 : (arr_29 [4] [i_6] [i_7] [4]))) : (((1598985815 ? 1 : (-127 - 1))))))));
        }
        for (int i_23 = 0; i_23 < 17;i_23 += 1) /* same iter space */
        {
            arr_85 [i_6] = ((!(((~1) >= -118))));
            arr_86 [i_6] [i_6] [i_23] = (((((arr_25 [i_6] [i_6] [i_23]) <= (arr_54 [i_6] [i_6] [i_6] [8]))) ? (min((1 ^ var_11), 4245609723)) : (max((min(var_13, (arr_26 [i_6]))), 1))));
            arr_87 [i_6] [i_6] [15] = var_14;
            arr_88 [i_23] &= (min((max((((arr_14 [i_6] [i_6] [i_6] [i_6]) ? -103 : -19904)), (642470042 && var_16))), var_0));
        }
    }
    for (int i_24 = 0; i_24 < 17;i_24 += 1) /* same iter space */
    {
        arr_91 [i_24] [i_24] |= -1;
        arr_92 [i_24] [i_24] = var_7;
        arr_93 [i_24] &= var_1;
        var_45 = (min(var_45, var_9));
    }
    #pragma endscop
}
