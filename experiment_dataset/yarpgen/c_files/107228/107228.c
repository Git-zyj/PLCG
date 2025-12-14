/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_11 = (min(var_11, (min((min((min((arr_2 [10]), var_0)), (arr_0 [i_0]))), ((min(12, (arr_1 [18]))))))));
        var_12 = ((((min(8, 12418))) ? 12399 : (min(-1628281515, 128))));

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_1] = (arr_3 [i_0] [i_0] [i_0]);
            arr_6 [i_0] [i_1] = (min(((min((min(var_6, 22)), 24538))), ((-((8 ? 0 : 4942308697878779680))))));
            var_13 += ((((128 ? (arr_2 [20]) : (arr_1 [8]))) >> (min(16, 4018771232))));

            for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
            {
                arr_10 [i_0] [0] [18] [8] |= (arr_0 [i_1 + 1]);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_14 = var_9;
                            arr_15 [i_4] [i_4] [i_0] [i_2] [i_0] [i_1] [i_0] = 4294967274;
                        }
                    }
                }
                arr_16 [i_0] [i_1] [i_1] [i_0] = (min((min(-var_4, ((min(23507, var_0))))), (arr_3 [i_0] [i_1 + 1] [i_0])));
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_15 = (max(var_15, -29));
                            var_16 -= (((min((((arr_23 [i_5]) ? 48229 : (arr_4 [i_0]))), (arr_22 [i_1 - 1] [i_1 - 1] [i_1 - 1]))) >= ((min(var_0, var_1)))));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
            {
                var_17 = var_8;

                for (int i_8 = 2; i_8 < 20;i_8 += 1)
                {
                    var_18 -= 0;
                    var_19 = var_8;

                    for (int i_9 = 3; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        arr_31 [i_9 + 1] [i_7] [i_7] [i_0] [i_1] [i_1] [i_0] = ((~(arr_9 [i_9 - 3] [i_8 - 1] [i_7])));
                        arr_32 [i_0] [i_7] [i_8] [i_9] = (((0 >= (arr_3 [i_0] [i_1] [i_0]))));
                        arr_33 [i_0] [i_9 - 2] [i_8] [i_1 + 1] [i_1 + 1] [i_0] = ((65535 ? (arr_14 [i_0 + 4] [i_1 - 1] [i_0] [i_9 + 1]) : (arr_18 [i_0 + 2])));
                        var_20 += (1628281516 || -4942308697878779681);
                    }
                    for (int i_10 = 3; i_10 < 19;i_10 += 1) /* same iter space */
                    {
                        arr_37 [i_7] [7] [i_0] = (((arr_8 [17] [i_0] [i_0 - 2]) ? (arr_8 [i_0] [i_0] [i_0 + 4]) : 6427017527840668824));
                        arr_38 [i_10] [i_8] [i_0] [i_1 + 1] [i_0] = var_9;
                        arr_39 [i_0] [i_0] [i_1] [i_7] [3] [i_10] [i_10] = ((((var_0 ? var_4 : var_9))) ? 1256547481027628928 : (arr_7 [i_8 - 1] [i_7] [i_0]));
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            arr_42 [i_11] &= var_0;
            var_21 = (max(var_21, var_3));
        }
    }
    for (int i_12 = 2; i_12 < 17;i_12 += 1) /* same iter space */
    {

        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            var_22 = var_2;
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 20;i_15 += 1)
                {
                    {
                        var_23 = (max(var_23, (arr_29 [i_15] [i_14] [i_12] [i_12])));

                        for (int i_16 = 0; i_16 < 21;i_16 += 1)
                        {
                            var_24 = (arr_19 [i_13] [i_14] [i_15 - 1] [i_16]);
                            arr_55 [i_12] [i_12] = 867961144576748208;
                        }

                        for (int i_17 = 0; i_17 < 21;i_17 += 1) /* same iter space */
                        {
                            var_25 = (min((((arr_3 [i_12 - 1] [i_15 - 1] [i_12]) * (arr_3 [i_12 - 2] [i_15 - 1] [i_12]))), (((!(arr_3 [i_12 + 3] [i_15 - 1] [i_12]))))));
                            var_26 = (min(var_26, ((min(var_10, 4942308697878779699)))));
                            arr_58 [i_12] = ((min((min(2712626060, 221)), (arr_51 [i_12] [i_15]))));
                        }
                        for (int i_18 = 0; i_18 < 21;i_18 += 1) /* same iter space */
                        {
                            arr_62 [i_18] [i_12] [i_12] [i_12] = ((((min((arr_20 [i_14] [i_15 - 1] [i_12] [i_12]), 90571354615138048))) ? var_8 : (min((arr_24 [i_15] [i_15] [i_15 + 1] [i_15]), ((var_3 ? 24 : var_2))))));
                            arr_63 [i_12] [i_13] [i_14] [i_14] [i_18] = ((((min((arr_12 [i_12 + 1] [i_15 + 1]), (arr_12 [i_12 - 2] [i_15 - 1])))) ? var_2 : ((min((arr_46 [i_12 + 2] [i_12 - 2]), (arr_46 [i_12 + 1] [i_12 + 2]))))));
                            var_27 = ((((min((arr_2 [i_12]), (arr_2 [i_12])))) * (((((var_2 ? 21 : 2942615631)) == var_10)))));
                            var_28 = (max(var_28, ((min((min((((33 | (arr_29 [i_18] [i_15] [14] [i_12])))), ((~(arr_56 [i_12 + 4]))))), ((min((min(-1628281517, (arr_45 [i_15]))), (arr_46 [i_12 + 4] [i_15 - 1])))))))));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_19 = 2; i_19 < 19;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 21;i_20 += 1)
            {
                {
                    arr_68 [i_12] [i_12] [i_12] = (((min((min((arr_21 [i_19]), 1628281502)), ((min(var_3, var_10))))) / ((((arr_1 [i_12]) ? (arr_44 [i_19] [i_12]) : (arr_46 [i_19 - 2] [i_20]))))));
                    arr_69 [i_12] = (min(((min(var_1, (arr_50 [i_12] [i_19] [5] [i_20])))), -210306711380694265));
                }
            }
        }

        /* vectorizable */
        for (int i_21 = 0; i_21 < 21;i_21 += 1) /* same iter space */
        {
            arr_72 [i_12] = (((arr_70 [i_12 + 2] [i_12] [i_12 + 3]) >= var_2));
            arr_73 [i_12] = (((~1628281517) ? (-32767 - 1) : var_8));
        }
        /* vectorizable */
        for (int i_22 = 0; i_22 < 21;i_22 += 1) /* same iter space */
        {

            for (int i_23 = 0; i_23 < 21;i_23 += 1)
            {
                arr_80 [i_12] [20] [i_23] = arr_19 [i_23] [i_23] [i_12 - 2] [i_12 - 2];
                arr_81 [i_12 + 2] [i_12] [i_12] [i_23] = ((!(arr_7 [i_12 - 2] [i_12] [i_12])));
                arr_82 [i_12] [i_22] [i_12] = ((~(!-1)));
            }
            var_29 = (min(var_29, (arr_9 [i_22] [10] [10])));
            arr_83 [i_12] = (arr_52 [i_12] [i_12] [i_12 - 2]);
            var_30 = (var_2 | 1582341221);

            for (int i_24 = 0; i_24 < 21;i_24 += 1)
            {
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 21;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 21;i_26 += 1)
                    {
                        {
                            arr_91 [i_12] [4] [4] [i_22] [i_12] = (arr_27 [i_12 + 2]);
                            arr_92 [i_12] [i_25] [i_22] [i_22] [i_12] = (((arr_3 [i_12] [i_12 + 4] [i_12]) > (arr_88 [i_12 - 1] [i_12 - 2] [10] [i_12])));
                        }
                    }
                }
                arr_93 [i_12] [i_22] [i_22] = var_8;
                var_31 += ((var_5 ? ((~(arr_75 [i_24] [2] [2]))) : (arr_1 [i_24])));
                arr_94 [i_12] [i_12] [i_12] [i_24] = (arr_0 [i_12 + 1]);
            }
            for (int i_27 = 0; i_27 < 21;i_27 += 1)
            {
                arr_97 [i_12 + 2] [i_12] [i_12] = ((17 ? 2665087324 : 44313));
                var_32 = (arr_67 [7] [i_12] [i_12 + 3]);
                var_33 = (min(var_33, ((((arr_90 [i_12 + 4] [i_12 + 1] [8]) ? var_4 : (~var_0))))));
                arr_98 [i_27] [i_12] [i_12] [i_12] = (((~1544040621) && (arr_0 [i_12 + 4])));
            }
            for (int i_28 = 0; i_28 < 21;i_28 += 1)
            {
                var_34 = 28171;
                var_35 = var_7;
            }
        }
        for (int i_29 = 0; i_29 < 21;i_29 += 1) /* same iter space */
        {
            var_36 = (max(var_36, ((((((-(arr_9 [i_29] [i_29] [i_12 - 1])))) ? (min(((((arr_43 [2]) ? var_5 : (arr_22 [4] [15] [15])))), (var_4 / var_3))) : (min(var_10, (arr_87 [i_12 + 3] [i_12 + 4] [i_12 + 2] [20]))))))));
            var_37 = (max(var_37, var_9));
            var_38 = (min(((((min((arr_90 [13] [i_12] [i_12]), var_6))) ? var_0 : 3265215905)), ((min(2, var_6)))));
            arr_104 [i_12] [i_12] = ((min(10107003, var_2)));
        }
        arr_105 [16] |= var_0;
    }
    for (int i_30 = 2; i_30 < 17;i_30 += 1) /* same iter space */
    {
        arr_108 [i_30] = var_9;
        arr_109 [i_30] &= (((arr_24 [i_30 - 2] [i_30 - 2] [7] [i_30 - 2]) ? (arr_24 [i_30 + 1] [i_30] [i_30] [i_30 - 1]) : var_7));
        var_39 -= (arr_9 [i_30] [i_30] [i_30]);
        var_40 = ((-((((arr_40 [10] [i_30 + 2] [10]) <= (arr_40 [4] [i_30 + 2] [4]))))));
        var_41 = (max(var_41, ((min((((var_2 ? 0 : (arr_85 [i_30] [i_30 - 1] [i_30 + 1] [i_30])))), (arr_60 [i_30] [i_30] [16] [i_30] [i_30]))))));
    }
    var_42 = var_8;
    var_43 = (((-(~524287))));
    #pragma endscop
}
