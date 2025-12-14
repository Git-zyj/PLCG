/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_14;
    var_16 += ((((91 >> (var_3 - 91))) << (((((min(var_8, var_11)))) - 8935))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = var_8;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_18 = (var_10 || var_5);
                        var_19 = (min(-var_13, ((((arr_4 [i_2] [i_2] [i_0]) && -99)))));
                        var_20 += -245;
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        arr_13 [i_4] [i_4] = var_5;
        arr_14 [i_4] = ((((arr_1 [i_4 - 1]) ? var_6 : var_14)));
    }
    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_21 = ((~((~(arr_17 [i_5 + 1] [i_6])))));
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            var_22 = (min(var_22, var_7));
                            var_23 = ((max(1, 1)));
                        }
                    }
                }
            }

            /* vectorizable */
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                arr_31 [i_6] [i_6] [i_5] [i_5] = (arr_25 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5 + 1]);
                var_24 = 1;
                var_25 += (var_4 & 149);
                var_26 = var_10;
            }
            var_27 += var_0;
        }
        var_28 = (min(var_28, 1));
        var_29 = 1912719412;
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        arr_34 [i_11] [i_11] = ((-(!var_1)));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 0;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 1;i_13 += 1)
            {
                {
                    arr_39 [i_11] = ((-var_1 & (153 & 1)));
                    arr_40 [i_11] [i_12] = 74;
                    var_30 += ((((-(arr_36 [1] [i_11])))));
                }
            }
        }

        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            var_31 = (arr_41 [i_14] [i_11] [14]);
            var_32 += (min(1, (arr_36 [i_11] [i_14])));
        }
        for (int i_15 = 1; i_15 < 16;i_15 += 1)
        {
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 18;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 18;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 17;i_18 += 1)
                    {
                        {
                            var_33 = ((((~(arr_35 [i_15 + 2]))) == (((!(arr_35 [i_15 - 1]))))));
                            arr_56 [i_15] [i_11] [i_11] [i_15] [9] = (var_5 * 0);
                            var_34 = var_2;
                        }
                    }
                }
            }
            var_35 = (arr_52 [i_15 + 1] [i_15] [i_15 + 1] [i_15 - 1]);

            for (int i_19 = 0; i_19 < 18;i_19 += 1)
            {
                var_36 += ((-(min((arr_42 [i_11]), (arr_46 [i_15 + 1] [i_15 + 2] [i_15 + 1])))));
                var_37 += (var_14 || var_5);

                for (int i_20 = 1; i_20 < 14;i_20 += 1)
                {
                    var_38 ^= ((var_9 ? (239 % var_10) : (arr_54 [i_11] [1] [i_20] [i_20] [i_11])));
                    var_39 += (arr_61 [i_11] [i_11]);
                }
                var_40 ^= (~((~(arr_46 [i_11] [i_15 - 1] [1]))));
                var_41 = (arr_61 [i_15] [i_15]);
            }
            var_42 ^= (arr_53 [i_11] [i_11] [i_11]);
            arr_62 [i_11] [i_11] [i_11] = var_14;
        }
        for (int i_21 = 0; i_21 < 18;i_21 += 1)
        {
            var_43 += (((((1 ? (arr_49 [6] [6] [6]) : var_9))) || ((!(arr_60 [i_11] [i_21] [6] [i_21])))));
            var_44 = (((arr_52 [i_11] [i_21] [i_21] [14]) ? var_7 : (!86)));
        }
    }
    #pragma endscop
}
