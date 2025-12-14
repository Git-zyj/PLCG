/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((((var_5 ? var_1 : var_9))))));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1] = min(-1988452725, 23);
                    arr_11 [i_2] = (max(((max(var_9, (arr_5 [i_1] [i_0])))), (((((-(arr_6 [i_2])))) ? (((arr_5 [i_0] [i_1]) / (arr_0 [1]))) : var_11))));
                }
            }
        }
        var_13 = ((((((arr_5 [i_0 + 2] [i_0 + 1]) ? (arr_8 [i_0 + 1]) : var_1))) || ((!(arr_8 [i_0 - 3])))));
        arr_12 [i_0] &= (((arr_1 [i_0]) ? (((!(!var_0)))) : ((1525230744 ? ((var_11 ? (arr_8 [i_0]) : var_7)) : var_0))));
    }
    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {
        arr_16 [i_3] &= (~var_4);
        var_14 = (max(var_14, (((var_10 > (((((arr_7 [i_3 - 2] [i_3]) <= (((arr_5 [i_3] [i_3]) | -61)))))))))));
    }

    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
        {
            arr_24 [i_4] = ((-61 ? 1 : 65535));
            arr_25 [i_4] [i_5] = ((((((var_1 == (max(var_6, (arr_6 [i_4]))))))) >= (arr_3 [i_4])));
            var_15 |= ((((max(var_8, (arr_4 [i_5] [i_5] [i_4])))) ? (!-58) : ((((arr_4 [i_5] [9] [i_4]) != var_4)))));

            for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
            {
                var_16 += (((((((((arr_8 [i_4]) * var_4))) ? (var_2 <= var_7) : var_0))) ? (!1) : ((var_1 - ((1 ? 245 : 1))))));
                arr_30 [i_6] [i_5] [i_5] [i_6] = ((arr_5 [i_4] [i_4]) && ((!((max(1, 247))))));
                arr_31 [i_6] [i_6] [i_6] = (((max(var_5, (arr_7 [i_4] [i_4])))));
                var_17 |= (arr_28 [i_4] [6] [i_6]);
                arr_32 [i_6] [i_5] = (((!var_8) || ((min((arr_28 [i_6] [i_5] [i_6]), (arr_9 [i_6] [i_6] [i_6]))))));
            }
            for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
            {
                var_18 -= ((!((max((((arr_29 [i_7] [i_7]) | (arr_9 [i_4] [i_4] [13]))), (~2147483647))))));
                arr_35 [i_4] [i_4] [i_4] = ((var_3 ? (((min(var_7, var_9)))) : (((arr_33 [i_4] [1] [5] [i_7]) ? ((max(var_6, var_5))) : ((min(var_11, (arr_13 [i_7]))))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 13;i_9 += 1)
                    {
                        {
                            var_19 ^= (((((var_5 ? var_6 : var_9))) ? ((((((var_3 ? var_8 : var_1))) ? var_11 : var_6))) : ((((23 ? 1791300482 : 62059)) | (arr_20 [i_9] [i_5] [i_9 - 1])))));
                            arr_40 [i_9] [i_9] [i_7] [i_9] [i_4] = var_7;
                        }
                    }
                }
            }
            for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
            {
                var_20 -= ((((min((arr_13 [i_10]), ((((arr_27 [i_4] [i_4] [i_4] [i_4]) > var_10)))))) ? (max((arr_13 [i_4]), ((-(arr_37 [i_4]))))) : var_1));
                arr_45 [2] [i_5] [i_10] [i_10] &= (((max((var_11 + var_5), var_5))) ? (((((min(var_0, var_1))) ? (max((arr_3 [i_10]), var_2)) : (~62059)))) : (((-17 == 25811) ? (max(11, 15)) : (arr_34 [10] [i_5] [i_10]))));

                /* vectorizable */
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    var_21 = (max(var_21, ((((arr_17 [i_5] [i_11]) == (arr_18 [i_4]))))));
                    var_22 *= (arr_41 [i_4]);
                    arr_48 [i_11] [i_10] [i_10] [5] [9] = (arr_26 [i_10] [i_5] [i_5] [i_11]);
                }
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    arr_51 [i_4] [i_4] [i_4] [i_10] [i_4] = ((max((arr_18 [i_10]), (arr_18 [i_12]))));
                    var_23 = (min(var_23, ((min((((~(arr_14 [i_4] [i_4])))), (arr_19 [i_5]))))));
                }
            }
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
        {
            arr_54 [i_4] = ((var_1 ? (arr_52 [i_13] [i_13] [i_4]) : (arr_4 [i_4] [0] [i_13])));
            arr_55 [i_4] [i_13] [i_4] = (4 ^ 4294967283);
        }
        for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_15 = 2; i_15 < 10;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 13;i_16 += 1)
                {
                    {
                        arr_63 [i_16] = (((min(var_1, var_3)) & (!var_10)));
                        var_24 &= var_4;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_17 = 3; i_17 < 12;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 14;i_18 += 1)
                {
                    {
                        arr_69 [i_4] [7] [i_4] [0] [i_4] = (max((max((arr_62 [i_4] [10] [i_17] [i_17] [i_18]), (max(var_4, var_10)))), var_10));
                        var_25 += ((var_7 ^ (((var_7 && (((var_6 << (var_10 - 658967403)))))))));
                        var_26 = (max(var_26, -3017938747));
                    }
                }
            }

            /* vectorizable */
            for (int i_19 = 1; i_19 < 12;i_19 += 1)
            {
                arr_72 [13] = ((~(arr_9 [i_4] [i_14] [i_4])));
                var_27 = ((var_10 ? (~var_4) : var_8));
                var_28 |= var_11;
            }
        }
        /* LoopNest 3 */
        for (int i_20 = 0; i_20 < 1;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 14;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 12;i_22 += 1)
                {
                    {

                        for (int i_23 = 0; i_23 < 14;i_23 += 1) /* same iter space */
                        {
                            var_29 = ((((max((((var_10 ? (arr_14 [i_22] [i_23]) : var_9))), (arr_26 [i_21] [i_21] [i_21] [i_21])))) ? (arr_67 [i_22 + 2] [i_20] [i_22] [i_22]) : (arr_5 [i_20] [i_20])));
                            var_30 *= ((((!((max(var_11, (arr_64 [i_4])))))) ? var_1 : (min(var_9, (arr_43 [i_4] [i_4] [i_4])))));
                        }
                        for (int i_24 = 0; i_24 < 14;i_24 += 1) /* same iter space */
                        {
                            var_31 = (min(var_31, (((-(746001536 && 4899317572515590723))))));
                            var_32 = ((var_7 & ((((var_0 ? var_6 : var_7))))));
                            var_33 = (min(var_33, (((((!(arr_77 [i_4] [i_20] [i_4]))) ? (arr_2 [i_21] [i_20]) : ((((((var_4 ? (arr_65 [1] [6] [i_21] [i_24]) : var_9)) > (arr_44 [i_4] [i_21] [8] [i_24]))))))))));
                            var_34 = (min(var_34, (~var_11)));
                        }
                        /* vectorizable */
                        for (int i_25 = 3; i_25 < 13;i_25 += 1)
                        {
                            var_35 = var_4;
                            var_36 -= (!var_8);
                            arr_87 [i_4] [i_4] [i_21] [i_22] = (((~(arr_27 [i_4] [i_21] [i_22] [i_25]))));
                        }
                        arr_88 [i_4] [i_21] [i_21] [13] [i_22] = (~var_2);
                    }
                }
            }
        }
        arr_89 [i_4] |= ((((((((var_4 ? var_5 : var_5))) ? var_3 : (max(var_7, var_8))))) ? (((((arr_21 [i_4] [i_4]) < -65527)))) : (min((arr_33 [i_4] [i_4] [i_4] [6]), var_8))));
        arr_90 [2] [i_4] = min((max((arr_18 [i_4]), (arr_73 [2]))), var_10);
    }
    /* LoopNest 3 */
    for (int i_26 = 4; i_26 < 11;i_26 += 1)
    {
        for (int i_27 = 0; i_27 < 12;i_27 += 1)
        {
            for (int i_28 = 0; i_28 < 12;i_28 += 1)
            {
                {
                    var_37 = (min(var_37, ((((arr_76 [i_27] [i_27] [i_27]) ? (((arr_76 [i_26] [i_26 - 3] [12]) ? var_1 : (arr_20 [i_26] [i_27] [i_28]))) : (~var_0))))));
                    arr_99 [i_27] [i_27] [i_27] = (max(((max((arr_83 [i_26] [i_27] [1] [i_27] [0] [i_26 - 4]), var_7))), (arr_14 [i_27] [i_26 - 1])));
                }
            }
        }
    }
    #pragma endscop
}
