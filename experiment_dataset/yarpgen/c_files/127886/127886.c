/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 48;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = 138;
        var_11 = (arr_0 [i_0]);
        arr_3 [i_0] = (min((arr_0 [i_0]), (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_12 *= arr_7 [i_1] [i_2];
            arr_9 [i_2] [i_1] = -99;
            arr_10 [i_2] [i_2] |= ((((((arr_7 [i_1] [i_2]) ^ 1583175225379243560))) ? (((arr_8 [i_2]) ? var_0 : (arr_8 [i_1]))) : (arr_7 [i_1] [i_2])));
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {
            var_13 = ((((~(arr_6 [i_1]))) * (arr_6 [i_1])));
            var_14 += (((!(((~(arr_14 [i_1] [i_3])))))));
        }
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            arr_18 [i_4] [i_4] = (((5543 && 3070852353117594459) > (((max(126, (arr_13 [15] [i_1] [i_1])))))));
            var_15 = -1583175225379243561;
            var_16 = (max(var_16, (((((var_7 * (max(18433368707839601605, (arr_7 [i_1] [i_4]))))) - ((((((arr_7 [i_1] [i_4]) ? 1939662180 : var_8))) ? (6317050439370040857 * 13) : ((((var_4 + 2147483647) << (((-1939662180 + 1939662182) - 2))))))))))));
            var_17 = (max(var_17, (((((((arr_8 [i_4 - 1]) << (((arr_8 [i_4 + 1]) - 45))))) ? (var_1 / var_2) : var_7)))));
            var_18 ^= ((max(-1939662184, var_0)));
        }

        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            var_19 ^= (arr_20 [i_1] [i_5 - 1]);
            arr_22 [i_1] [i_5] [i_1] = 89;
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        arr_28 [i_1] [i_5] [i_6] [i_7] = (199 % (~18433));
                        var_20 = (min(var_20, 0));
                        var_21 = (~(min(var_6, (arr_16 [i_5 + 3] [i_6 - 2] [i_6 - 1]))));
                        arr_29 [i_6] [i_6] [i_5 - 1] = ((((max((arr_24 [i_1] [i_5 + 1] [2] [i_7]), (arr_14 [i_5 - 1] [i_5])))) ? (!126119845) : (((max(17268670938237857342, 130))))));
                        var_22 *= (((arr_23 [i_1] [i_1] [i_1]) % 98));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 4; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 12;i_9 += 1)
                {
                    {
                        var_23 = (arr_20 [i_5] [i_9]);

                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_24 = (min(var_24, 0));
                            var_25 = ((-var_9 ? 11 : ((min((arr_36 [i_1] [i_1]), 119)))));
                        }
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            var_26 = arr_14 [i_9] [i_1];
                            arr_39 [i_1] [i_5 + 1] [i_8] [i_9] [i_11] = (min((((arr_33 [i_1] [i_5] [i_8] [i_8] [i_5] [i_9 - 2]) / ((var_9 ? var_2 : var_9)))), (arr_6 [i_5])));
                            var_27 = (min((arr_32 [i_5] [i_5] [i_5] [i_5]), (~5398148955629785429)));
                        }
                        arr_40 [i_8] [5] [i_5] [i_8] [i_8] = 73;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            /* LoopNest 3 */
            for (int i_13 = 2; i_13 < 15;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        {
                            var_28 = (max(var_28, ((((arr_34 [i_14]) || (arr_46 [i_14]))))));
                            arr_55 [i_1] [i_1] [i_13] [i_15] = (arr_54 [i_12] [i_12] [i_12]);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 16;i_16 += 1)
            {
                for (int i_17 = 4; i_17 < 13;i_17 += 1)
                {
                    {
                        arr_61 [i_12] &= arr_51 [i_17 - 1] [i_17] [i_16] [i_16] [i_16];
                        var_29 = var_0;

                        for (int i_18 = 0; i_18 < 16;i_18 += 1)
                        {
                            arr_66 [i_17] [i_16] [i_12] [i_17] = (!252);
                            var_30 = (~118);
                        }
                        for (int i_19 = 0; i_19 < 16;i_19 += 1)
                        {
                            var_31 = 78;
                            var_32 = (min(var_32, (((!(((273496265 << (-288230376151711744 + 288230376151711745)))))))));
                            var_33 = var_7;
                            var_34 = (((arr_14 [i_17 - 1] [i_17 - 2]) >> (((arr_14 [i_17 - 3] [i_17 + 1]) - 169))));
                            var_35 = (min(var_35, (((-(arr_19 [i_19] [i_12]))))));
                        }
                    }
                }
            }
            var_36 = 102;
            arr_69 [2] &= (((arr_37 [i_12] [i_12] [12] [i_12] [i_12] [i_12] [i_12]) ? -124 : 18446744073709551613));
        }
        var_37 += (max((((arr_43 [i_1] [i_1]) ^ -1583175225379243584)), ((min((arr_12 [i_1]), (arr_12 [i_1]))))));
        arr_70 [i_1] = ((157 && ((min((arr_65 [0]), ((min(-6228, (arr_47 [i_1] [i_1] [i_1])))))))));
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 24;i_20 += 1)
    {
        /* LoopNest 2 */
        for (int i_21 = 4; i_21 < 23;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 24;i_22 += 1)
            {
                {
                    var_38 = (((((-(arr_75 [i_20] [i_20] [i_22])))) ? (arr_76 [i_20] [i_21] [i_21] [i_22]) : ((var_8 ? var_8 : (arr_74 [i_22])))));
                    /* LoopNest 2 */
                    for (int i_23 = 1; i_23 < 21;i_23 += 1)
                    {
                        for (int i_24 = 2; i_24 < 21;i_24 += 1)
                        {
                            {
                                arr_84 [i_20] [i_20] [i_22] [i_23] [i_24] [i_23] = 207;
                                var_39 = ((!(arr_82 [i_20] [i_21 + 1] [i_22] [i_23 + 1] [i_24 + 1] [i_24] [i_24])));
                            }
                        }
                    }
                }
            }
        }
        var_40 += var_0;
        var_41 += (arr_78 [i_20] [i_20] [i_20] [i_20]);
    }
    #pragma endscop
}
