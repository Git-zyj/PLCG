/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((((!(!var_8)))), var_11));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            var_17 = (~var_8);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_18 = (max(var_18, ((((var_11 / (arr_10 [i_0] [i_1] [i_2] [i_3] [20]))) % ((var_10 ? var_4 : var_9))))));
                            var_19 = (((arr_0 [i_1 - 2]) + -6654));
                            arr_14 [i_0 - 1] [i_1 - 1] [i_0] [i_3] [i_0] [i_0 - 1] = var_14;
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
        {
            arr_19 [i_5] |= ((!(!var_1)));

            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                arr_22 [i_5] [i_0] [i_5] = (((var_1 * var_7) / var_5));
                var_20 ^= (arr_9 [i_0] [i_5] [i_0] [i_0]);
                arr_23 [i_0] = (((((var_5 ? var_10 : var_5))) && var_11));
            }
            for (int i_7 = 1; i_7 < 21;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        {
                            arr_30 [i_8] [i_5] [i_0] [i_8] [i_9] = (arr_13 [i_0] [6] [i_0] [i_8] [i_9]);
                            var_21 = (max(var_21, (((var_15 || (arr_25 [i_0] [i_5] [2]))))));
                            arr_31 [i_0] [i_5] [i_5] [i_5] [i_5] [i_5] = var_15;
                        }
                    }
                }
                var_22 = (min(var_22, (((var_4 != (arr_24 [i_7] [i_0 - 3] [i_7 - 1] [i_7 + 1]))))));
            }
            for (int i_10 = 3; i_10 < 21;i_10 += 1)
            {
                var_23 -= (arr_27 [i_0] [i_0] [20] [i_5]);
                var_24 = ((arr_2 [i_0] [i_10 - 3] [i_10 - 2]) ^ (arr_2 [i_0] [i_10 - 2] [i_10 + 1]));
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 20;i_12 += 1)
                {
                    {

                        for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
                        {
                            var_25 = (max(var_25, var_15));
                            arr_43 [i_0] [i_5] [i_5] [i_5] [i_5] [i_5] = ((-(!var_2)));
                        }
                        for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
                        {
                            var_26 = ((var_3 > (arr_27 [i_0 - 1] [i_5] [i_11] [i_0])));
                            var_27 = var_3;
                            var_28 -= ((-(arr_17 [i_12 - 1] [i_11])));
                            var_29 = (((var_13 ? var_6 : var_10)));
                            var_30 = (min(var_30, ((((var_15 < var_7) ? (!var_6) : (var_0 || var_9))))));
                        }
                        for (int i_15 = 0; i_15 < 22;i_15 += 1)
                        {
                            arr_51 [i_15] [i_0] = ((!(var_3 != var_4)));
                            arr_52 [i_0] [i_5] [i_11] [i_12] [i_0] [16] = ((!(arr_42 [i_11] [6] [i_11] [i_12 - 3] [i_11])));
                        }
                        for (int i_16 = 0; i_16 < 22;i_16 += 1)
                        {
                            arr_55 [i_0] [i_5] = ((var_5 ? var_3 : var_8));
                            var_31 ^= var_14;
                        }
                        arr_56 [i_12] [i_5] [i_0] [i_12] [i_0 - 3] = ((((var_11 ? 12454815745952952684 : var_3)) ^ var_13));

                        for (int i_17 = 2; i_17 < 20;i_17 += 1)
                        {
                            var_32 = (max(var_32, var_3));
                            arr_59 [i_0] [i_0] [0] [i_17] = (((arr_5 [i_0 - 3]) >> (var_7 - 2243814730)));
                        }
                    }
                }
            }
        }
        for (int i_18 = 0; i_18 < 22;i_18 += 1) /* same iter space */
        {
            var_33 &= ((var_8 * (((!(arr_40 [i_0]))))));
            arr_62 [i_0] = (((arr_54 [i_0] [i_0] [i_0] [12] [12]) ? (arr_54 [i_0 - 1] [19] [i_0] [14] [i_0 - 1]) : (arr_54 [i_0 + 2] [i_0 - 2] [i_0] [i_0 - 2] [i_18])));
            arr_63 [i_0] [i_0 - 2] [i_0] = 5991928327756598945;
            arr_64 [i_0 + 1] [i_18] |= (((((var_9 ? var_9 : var_2))) != (((arr_8 [i_0]) ? var_12 : var_2))));
        }
        for (int i_19 = 0; i_19 < 22;i_19 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 22;i_20 += 1)
            {
                for (int i_21 = 3; i_21 < 20;i_21 += 1)
                {
                    for (int i_22 = 2; i_22 < 21;i_22 += 1)
                    {
                        {
                            var_34 = var_11;
                            arr_74 [i_0] [i_19] [i_20] [i_22 - 2] [i_22] [12] [i_22] = (((arr_9 [i_21 - 3] [6] [i_0 + 1] [i_22 - 2]) < var_1));
                            arr_75 [i_0] = ((((var_14 + (arr_61 [i_0] [i_0 + 2]))) % var_7));
                            var_35 = (var_13 | var_3);
                        }
                    }
                }
            }
            arr_76 [i_0] = var_1;
        }
        var_36 += ((var_4 == (arr_37 [i_0] [i_0] [i_0 - 2] [i_0 + 1])));
        var_37 = ((var_11 ^ (var_1 | var_11)));
        var_38 = (((((((arr_27 [i_0] [i_0 + 1] [i_0] [i_0]) >= (arr_20 [i_0]))))) + var_14));
    }
    #pragma endscop
}
