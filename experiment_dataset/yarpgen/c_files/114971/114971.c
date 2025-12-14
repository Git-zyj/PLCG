/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = ((((-(-7669597656068878314 + 7669597656068878341))) + -128));
                    var_16 = (min(var_16, 562945658454016));
                }
            }
        }
    }

    for (int i_3 = 3; i_3 < 12;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_17 += (((arr_6 [i_3 - 1]) ? (arr_0 [i_3 - 3]) : (arr_6 [i_3 + 2])));
            var_18 ^= (((arr_15 [i_3 + 2] [i_3 - 3]) ? var_14 : 1));
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            arr_18 [i_3] = ((18834 ? (((arr_9 [i_3 - 3]) ? var_9 : (max(var_6, var_14)))) : (!46)));
            arr_19 [i_3] [i_3] [i_3] = (((((-46 / ((1 ? 1 : -18835))))) ? var_10 : ((min(var_3, var_1)))));
            arr_20 [i_3 - 1] [i_5] [i_3] = (min(((((((var_5 ? 562945658454006 : var_0))) ? -var_13 : ((8176 ? 1563406581 : -8176))))), ((-(max(562945658454006, (arr_6 [i_5])))))));
        }
        for (int i_6 = 3; i_6 < 12;i_6 += 1)
        {
            var_19 = (!var_7);
            var_20 = (35175782154240 ? (min((max(var_4, 1751387091)), var_4)) : 2348575524091325758);
        }

        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 13;i_9 += 1)
                {
                    {
                        arr_30 [i_3 + 1] [i_7] [i_7] [i_9 + 1] [i_3] = var_6;
                        arr_31 [i_7] [i_7] [i_8] [2] |= var_4;
                    }
                }
            }
            var_21 = (max(var_21, var_1));
        }
        for (int i_10 = 1; i_10 < 13;i_10 += 1)
        {
            var_22 = (((arr_27 [i_3] [i_3] [i_3]) ? (-var_11 >= 7669597656068878341) : var_4));
            var_23 = (((arr_28 [i_3] [i_10 - 1] [i_3] [i_3 - 1]) ^ (((arr_28 [i_3 - 3] [11] [i_3] [i_3 + 2]) ? (arr_28 [i_3] [i_10] [i_3] [i_3 + 2]) : var_12))));
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 10;i_13 += 1)
                    {
                        {
                            var_24 = max((max(105, (arr_32 [i_10 - 1] [i_10 + 1] [i_3]))), (arr_32 [i_10 - 1] [i_10] [i_3]));
                            var_25 = (((((2348575524091325774 ? 113 : 2731560715))) | (arr_13 [i_3 - 1] [i_10 - 1] [i_11])));
                            var_26 = (min((arr_33 [i_3] [i_13 + 1] [i_3]), ((max(56, ((max(var_3, (arr_39 [i_3] [i_3])))))))));
                            var_27 = (max(var_27, (((var_11 ? (arr_34 [i_11]) : (arr_34 [i_13]))))));
                        }
                    }
                }
            }
        }
        var_28 = (min(var_28, var_9));

        for (int i_14 = 1; i_14 < 13;i_14 += 1)
        {
            var_29 = max(var_13, 8177);
            var_30 = (max(var_30, var_3));
        }
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            arr_47 [10] [i_3] [10] = var_7;
            var_31 = (min(var_31, -262144));
        }
        for (int i_16 = 2; i_16 < 13;i_16 += 1) /* same iter space */
        {
            arr_50 [i_3] [i_3] [i_3] = (((min((((!(arr_29 [7] [i_16] [i_16] [i_3] [1] [8]))), (min(14, var_2)))))));
            arr_51 [i_3] [5] = 0;
            var_32 = (max(var_32, (((var_13 ? (((var_13 && (((var_9 ? var_10 : var_6)))))) : (min((~var_0), (arr_1 [i_16]))))))));
            var_33 |= var_4;
        }
        for (int i_17 = 2; i_17 < 13;i_17 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_18 = 0; i_18 < 14;i_18 += 1)
            {
                arr_56 [i_3] = ((~(-2135167188696980842 >= 1563406588)));

                for (int i_19 = 0; i_19 < 14;i_19 += 1)
                {
                    var_34 = ((!(~var_6)));
                    var_35 = (min(var_35, (((var_8 ? (((arr_12 [i_3] [i_3] [13]) ? var_6 : 1563406602)) : (~-16600))))));
                    var_36 = (((arr_12 [i_17] [i_18] [i_19]) * var_5));
                    var_37 = (max(var_37, 3539540941));
                }
                arr_59 [i_3] [i_17] [i_3] = ((-var_0 ? var_13 : (arr_34 [i_3])));
            }
            for (int i_20 = 4; i_20 < 12;i_20 += 1)
            {
                var_38 = ((var_2 ? (min(-197, ((var_6 ? var_11 : var_1)))) : (((min(1, 1))))));
                arr_62 [i_20] |= ((!(((arr_61 [i_20]) && var_14))));
            }
            arr_63 [i_3] [i_3] = var_9;
        }
    }
    /* vectorizable */
    for (int i_21 = 0; i_21 < 14;i_21 += 1) /* same iter space */
    {
        arr_66 [i_21] = (((~235) ? (~-7669597656068878341) : var_12));
        arr_67 [2] [2] = (+-9223372036854775807);
        var_39 = (min(var_39, (((((var_14 ? 908420747142855732 : (arr_61 [i_21]))) & var_2)))));
    }
    /* vectorizable */
    for (int i_22 = 0; i_22 < 14;i_22 += 1) /* same iter space */
    {
        var_40 = (((((1 ? var_14 : var_6))) ? ((var_3 ? (arr_22 [i_22] [0] [i_22]) : var_5)) : ((-8177 ? var_4 : (arr_54 [i_22] [i_22] [i_22] [11])))));
        arr_70 [i_22] = var_1;
    }
    var_41 = ((var_11 ? ((var_10 ? 9178654796090576088 : var_3) : ((max(184, var_14))))));
    #pragma endscop
}
