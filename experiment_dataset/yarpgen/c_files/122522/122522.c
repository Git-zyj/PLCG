/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 1;
        var_20 = (max(var_20, 1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_21 = (+-1);
                    var_22 = (arr_4 [1]);
                }
            }
        }
        arr_9 [i_0] = 1;
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_23 = (max(var_23, (((-((-(((arr_4 [i_3]) - var_17)))))))));
        arr_12 [i_3 - 1] [i_3] = ((((max((arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1]), (arr_1 [i_3])))) ? (var_17 - 9135977663990539176) : (max(((((arr_11 [i_3] [i_3 - 1]) ? 1 : var_16))), var_14))));
        arr_13 [i_3] = ((+((((arr_7 [i_3] [16] [i_3]) < 1)))));
    }
    var_24 = (var_19 ? var_9 : var_7);

    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_25 = ((((arr_2 [10]) ^ ((min(-53, 1))))));
        var_26 += 1;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_19 [i_5] = (var_4 <= -1);
        arr_20 [i_5] = arr_18 [i_5];
        var_27 = (arr_18 [i_5]);
        arr_21 [i_5] = ((781527623 ? -1231942453777964139 : (~var_18)));
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_28 = (arr_23 [i_6]);
        arr_25 [i_6] = ((((((arr_15 [i_6]) ? var_15 : (((min(var_3, var_11))))))) ? (((arr_6 [i_6]) / (((!(arr_7 [1] [i_6] [i_6])))))) : ((min(1, var_9)))));
        arr_26 [i_6] = (min((arr_23 [i_6]), var_11));
        arr_27 [i_6] [i_6] = var_15;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    var_29 = (arr_1 [i_7]);
                    var_30 = (((var_7 + 2147483647) >> (2171156459 - 2171156457)));
                    arr_37 [14] [i_8] [i_8] [14] |= var_9;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {

                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            arr_49 [i_13] [i_7] [i_7] [i_12] [19] = var_9;
                            arr_50 [i_13] [i_11] [i_11] [i_11] [i_7] [i_11] [i_7] |= var_16;
                        }
                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            arr_53 [i_7] [i_7] [0] [i_12] [i_14] [i_7] [i_12] = 1;
                            var_31 = (max(var_31, (var_17 - var_11)));
                            arr_54 [i_14] [i_10] [i_10] [i_10] [i_14] |= (((arr_51 [i_7] [i_10] [i_11] [i_14] [i_14]) + (arr_39 [i_7] [i_10] [i_7])));
                            arr_55 [i_7] [i_7] = (var_6 ? 50313 : var_8);
                            var_32 = ((1 ? ((65515 ? var_6 : (arr_45 [i_12] [i_12] [i_11] [i_12]))) : var_19));
                        }
                        for (int i_15 = 1; i_15 < 18;i_15 += 1)
                        {
                            arr_59 [i_7] [i_10] [i_10] [i_12] [i_7] = 0;
                            var_33 = ((-var_18 ? (arr_44 [i_7] [14] [i_11] [i_11] [1]) : -35));
                            var_34 ^= ((var_15 ^ ((((var_19 != (arr_38 [i_7] [i_7])))))));
                            arr_60 [i_7] [i_10] [i_11] [i_7] [i_15 + 1] = (((var_10 ? var_5 : 3435464901)));
                            var_35 = (max(var_35, ((((arr_46 [i_15 - 1]) ? (arr_28 [i_7] [i_7]) : 596419541)))));
                        }
                        var_36 = ((var_13 % 1) >> (-1537869715 + 1537869727));
                        var_37 = (arr_28 [i_10] [12]);
                        arr_61 [i_7] [i_7] [i_7] [i_7] = ((1 ? ((((arr_7 [i_7] [i_10] [i_11]) ? (arr_8 [16]) : 1))) : var_1));
                    }
                }
            }
        }
        arr_62 [i_7] = var_7;
        var_38 = (max(var_38, ((((arr_40 [i_7] [14]) ? var_2 : (((!(arr_7 [i_7] [i_7] [i_7])))))))));

        for (int i_16 = 0; i_16 < 20;i_16 += 1)
        {

            for (int i_17 = 0; i_17 < 20;i_17 += 1)
            {
                /* LoopNest 2 */
                for (int i_18 = 2; i_18 < 18;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 20;i_19 += 1)
                    {
                        {
                            arr_74 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = var_11;
                            arr_75 [i_19] [i_7] [1] [i_7] [1] = var_3;
                            arr_76 [5] [i_17] [i_7] [i_16] [8] = (arr_73 [i_7] [i_16] [i_7] [i_18] [1]);
                        }
                    }
                }
                arr_77 [18] [i_17] [i_17] [i_7] |= ((-16 ? 2171156459 : 1));

                for (int i_20 = 0; i_20 < 20;i_20 += 1)
                {
                    arr_80 [i_7] [i_7] [i_7] [i_17] |= (arr_17 [i_7]);
                    var_39 += 1;
                    var_40 = var_14;
                }
            }
            for (int i_21 = 0; i_21 < 20;i_21 += 1)
            {
                arr_85 [i_21] [i_21] [i_16] &= (arr_67 [i_7] [i_16] [1]);
                var_41 = 1;
                var_42 = var_0;
            }
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 20;i_22 += 1)
            {
                for (int i_23 = 1; i_23 < 1;i_23 += 1)
                {
                    {
                        arr_93 [i_7] = (arr_71 [i_22] [i_16] [i_7] [i_7] [i_23] [i_7] [i_16]);
                        var_43 = (min(var_43, var_17));
                        arr_94 [i_7] [i_16] = (1 - 9053986391348824510);
                        arr_95 [i_7] [i_16] [i_16] [i_16] [i_7] = var_17;
                        var_44 += (arr_64 [i_22]);
                    }
                }
            }
        }
        for (int i_24 = 0; i_24 < 1;i_24 += 1)
        {
            arr_98 [i_7] [i_24] = ((9 ? var_0 : (arr_40 [i_7] [i_7])));
            var_45 = (max(var_45, ((((arr_34 [i_7] [i_24] [i_7] [i_7]) ? var_7 : (arr_87 [18]))))));
            arr_99 [10] [i_7] [i_24] = ((var_4 ? (((1 ? (arr_84 [i_7] [i_24] [17]) : 18723))) : (arr_32 [i_7] [i_7] [i_7])));
        }
    }
    var_46 += ((((max(var_1, var_19))) / var_4));
    /* LoopNest 2 */
    for (int i_25 = 0; i_25 < 17;i_25 += 1)
    {
        for (int i_26 = 1; i_26 < 14;i_26 += 1)
        {
            {
                arr_105 [i_26] = ((+(((2627513241 / 11571) + 1))));

                for (int i_27 = 0; i_27 < 17;i_27 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_28 = 0; i_28 < 1;i_28 += 1)
                    {
                        for (int i_29 = 0; i_29 < 1;i_29 += 1)
                        {
                            {
                                var_47 = (((arr_78 [i_26 - 1]) ? ((((min(var_7, var_18))) ? (min((arr_112 [i_25] [i_27] [i_27] [1] [i_25]), -1862829610)) : (var_12 | var_2))) : (min(var_17, ((1 ? 0 : 1))))));
                                arr_114 [i_25] [i_26 + 1] [i_25] [i_28] [i_29] |= (arr_92 [i_26 - 1] [i_26 - 1] [i_26 + 1] [i_26 - 1] [i_26 - 1] [12]);
                                var_48 = (!(((1 * (min((arr_97 [i_26]), var_14))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_30 = 2; i_30 < 16;i_30 += 1)
                    {
                        for (int i_31 = 0; i_31 < 1;i_31 += 1)
                        {
                            {
                                var_49 ^= (max(((max(1, (arr_79 [i_30 - 1] [i_30 - 1] [i_30 + 1] [i_30])))), ((((max(114, var_18))) ? var_1 : -var_13))));
                                var_50 = min((max(var_0, ((var_17 << (((-28 + 39) - 10)))))), 47130);
                                var_51 = arr_71 [i_31] [i_31] [i_31] [i_31] [1] [i_31] [i_31];
                            }
                        }
                    }
                    var_52 = ((1795525809006144401 / var_13) <= -10);
                }
                arr_121 [i_25] = (arr_52 [i_25] [i_25] [i_25] [1] [17] [i_25] [1]);
            }
        }
    }
    #pragma endscop
}
