/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_10 = ((var_0 | (min(-9223372036854775807, (~var_1)))));
        var_11 ^= (max((((((~(arr_0 [i_0])))) ? (min(130, var_8)) : ((((arr_3 [i_0] [i_0 + 2]) % var_6))))), (((((min((arr_3 [i_0] [i_0]), (arr_0 [i_0 - 1])))) ? (!var_5) : 1)))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 ^= ((-((((((arr_15 [0] [i_2] [i_2] [i_2] [i_2] [14]) ? (arr_7 [i_0] [i_2] [i_0]) : 5330))) ? var_0 : (((arr_13 [i_1] [i_1] [i_3] [0]) ? var_8 : (arr_2 [1])))))));
                                var_13 = 1;
                            }
                        }
                    }
                    var_14 = (max(((-((min(0, (arr_3 [i_0] [i_1 + 1])))))), ((min((arr_16 [i_1] [i_1] [i_2] [i_1] [i_1 - 2] [i_0] [i_2]), 1)))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_15 = ((~(arr_17 [i_0 - 1])));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_16 ^= -24;
                            arr_23 [i_0] [i_1 + 4] [i_0] [i_5] [i_6] [i_2] = ((0 < (arr_6 [i_0])));
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_17 ^= (((var_1 + var_0) + -4));
                            arr_27 [i_0] [i_0] [i_2] [i_2] [i_5] [7] = var_8;
                            arr_28 [i_7] [i_0] [i_0 - 1] [1] [15] [i_0] [i_0 - 1] = (3221225472 || -1760751822);
                            var_18 ^= ((!(arr_13 [14] [i_1 + 2] [i_0 - 1] [14])));
                        }
                        arr_29 [i_0] = ((606225182 ? var_8 : -var_6));
                        arr_30 [13] [13] [i_2] [i_0] = (!1);
                    }

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            arr_36 [i_0] [i_0] [i_2] [i_0] = (((arr_4 [i_0 + 2] [i_0 - 1] [i_0]) ^ (~255)));
                            arr_37 [i_9] [i_0] [i_2] [i_0] [i_0] = -5817685758868084490;
                        }
                        for (int i_10 = 1; i_10 < 13;i_10 += 1)
                        {
                            var_19 = ((!((((arr_34 [i_10] [i_8] [i_0 + 1] [i_1 + 2] [i_0 + 1]) / -23339)))));
                            var_20 = (!(arr_25 [i_8] [i_1 - 2] [i_8] [i_8] [i_8]));
                            arr_42 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = (((arr_17 [i_0 - 1]) ? -1246228000 : var_8));
                        }
                        var_21 = (var_8 < 26);
                    }
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                        {
                            var_22 = (min(var_22, (((((min((max(47237, 0)), 42))) + 65528)))));
                            var_23 = (min(var_23, ((((((((var_3 ? var_8 : var_2))))) <= -1061907282840834172)))));
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                        {
                            arr_51 [i_0] = (min(4800341323485001908, ((1481297422 ? 7872721710225310804 : (((~(arr_17 [i_13]))))))));
                            var_24 = (max(var_24, ((((!var_8) + ((max(var_1, (arr_21 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0] [i_1 - 2])))))))));
                            arr_52 [i_13] [i_0] [i_0 - 1] [i_0] [i_0 - 1] = ((1 ? 2147483632 : (--3331884634079295153)));
                        }
                        for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                        {
                            var_25 = ((((min((arr_43 [i_0] [i_1] [i_2]), (arr_45 [i_14] [i_0] [6] [i_0] [6])))) ? 2689463087923950610 : (arr_39 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0 + 2])));
                            arr_55 [i_0] [i_0] = (871270137 <= ((((arr_47 [i_2]) < (arr_47 [i_0 + 2])))));
                            var_26 = 0;
                        }
                        arr_56 [i_0] [i_0] [i_2] [i_0] [i_2] = (arr_11 [9]);
                        arr_57 [i_0] [i_0] [i_2] [i_0] = -var_6;
                    }

                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        var_27 ^= (arr_7 [i_0] [i_1] [i_1 + 2]);
                        var_28 = (min(var_28, (((var_0 ? (((0 >= (arr_14 [0])))) : -73)))));
                    }
                }
            }
        }
        arr_60 [i_0] [i_0] = 8649598612991457404;
        var_29 = (((~var_5) == (((min(var_2, ((max((arr_6 [i_0]), (arr_6 [i_0]))))))))));
    }
    for (int i_16 = 0; i_16 < 21;i_16 += 1)
    {
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 21;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 21;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 21;i_19 += 1)
                {
                    {
                        arr_72 [i_17] [12] [i_17] [i_17] [i_16] = (!var_0);
                        arr_73 [i_16] [i_16] [i_18] = (max((!7936), ((!(((0 ? (arr_63 [i_17]) : var_1)))))));
                        arr_74 [i_16] [i_17] [i_19] = (0 | 4294967295);
                    }
                }
            }
        }
        var_30 ^= (min((min((arr_62 [i_16] [i_16]), var_9)), (((arr_62 [i_16] [i_16]) - (arr_62 [i_16] [5])))));
        var_31 = var_9;
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 19;i_20 += 1)
    {
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 19;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 19;i_22 += 1)
            {
                {
                    var_32 = (((2633385955 > 66) ? 127 : ((1 ? var_1 : (arr_78 [i_22] [i_21] [i_20])))));

                    for (int i_23 = 0; i_23 < 19;i_23 += 1)
                    {
                        arr_84 [i_20] = (arr_66 [i_20]);
                        arr_85 [i_21] [i_20] = ((~(arr_64 [i_23] [i_20] [i_20])));
                    }
                    var_33 = -1;
                    var_34 ^= var_2;
                }
            }
        }

        for (int i_24 = 2; i_24 < 17;i_24 += 1) /* same iter space */
        {
            var_35 = (arr_70 [i_24]);
            arr_88 [i_20] [i_24] [i_20] = (arr_61 [i_24 - 1] [i_24 - 1]);
            var_36 = ((!(arr_78 [i_20] [i_20] [i_20])));
        }
        for (int i_25 = 2; i_25 < 17;i_25 += 1) /* same iter space */
        {
            var_37 = ((-(arr_81 [i_20])));
            arr_92 [i_20] = 1099511626752;
        }
        for (int i_26 = 0; i_26 < 19;i_26 += 1)
        {
            var_38 = (((((var_2 % (arr_66 [i_26])))) ? 24133 : (var_3 % 6380810738277794909)));
            /* LoopNest 2 */
            for (int i_27 = 1; i_27 < 16;i_27 += 1)
            {
                for (int i_28 = 0; i_28 < 19;i_28 += 1)
                {
                    {
                        var_39 = ((!((-17 >= (arr_71 [i_28])))));
                        var_40 = -14;
                    }
                }
            }
            var_41 = ((!(arr_64 [i_20] [i_20] [i_20])));
        }
    }
    var_42 = ((((min(((max(1, 112))), var_6))) ? (((((var_7 ? 1 : -20785)) <= ((-2105446399557934199 ? 0 : var_4))))) : var_4));
    var_43 = (max(var_43, var_2));
    #pragma endscop
}
