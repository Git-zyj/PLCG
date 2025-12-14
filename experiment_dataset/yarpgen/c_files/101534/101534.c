/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = (min(var_17, ((((arr_0 [i_0]) % (arr_0 [i_0]))))));
        var_18 = (((arr_1 [i_0] [i_0]) != ((-(arr_1 [i_0] [i_0])))));
        var_19 = var_9;
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        arr_4 [i_1] = ((-(((var_10 > var_13) - var_8))));
        var_20 = var_5;
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_7 [0] = ((((((arr_5 [i_2]) & (arr_2 [i_2] [i_2])))) || var_9));
        arr_8 [i_2] = var_7;
        arr_9 [i_2] [i_2] = (arr_3 [i_2]);
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 20;i_4 += 1)
        {
            {
                var_21 = (max(var_21, (((-(((arr_15 [i_3]) | (arr_11 [i_3]))))))));
                var_22 = ((!(var_13 * 11816)));
            }
        }
    }

    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        arr_19 [i_5 - 2] = (!var_10);

        for (int i_6 = 3; i_6 < 21;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    {
                        var_23 = ((((-(((!(arr_2 [8] [4])))))) & ((((!(arr_27 [i_5] [14] [i_7] [i_7])))))));
                        var_24 = ((!((((arr_20 [10] [i_6]) >> (-var_0 + 228))))));
                        var_25 = (arr_25 [i_5 + 1] [i_5 + 1] [i_7] [i_5] [i_7]);
                        var_26 = var_4;
                        var_27 = (arr_20 [i_6 - 1] [i_7 - 1]);
                    }
                }
            }
            arr_29 [i_6] [i_6 - 1] [i_6] = (arr_28 [18]);
        }
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            arr_32 [i_5 - 2] [i_9] [22] = (((arr_3 [i_5 + 2]) * ((((arr_3 [i_5 + 1]) && var_8)))));
            var_28 = (+-2949);
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    {
                        var_29 *= ((~(arr_21 [i_11 + 1] [i_11])));

                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            arr_41 [i_12] [13] [i_12] [i_12] [i_12] [23] = 54453;
                            arr_42 [i_13] [i_10] [i_12] [i_12] [i_11] [i_10] [i_5] = (arr_2 [16] [i_10]);
                            arr_43 [i_5] [i_5] [i_12] [i_10] [i_13] = (!-var_13);
                            var_30 = var_11;
                        }
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            var_31 = var_8;
                            var_32 = ((~(((!(arr_27 [i_10] [i_10] [i_12] [i_12]))))));
                            var_33 = ((((-(arr_25 [i_11 + 1] [i_11] [i_12] [i_11 - 1] [i_11 - 1]))) > (arr_28 [i_12])));
                        }
                        arr_46 [i_12] [i_12] = (((((!((((arr_28 [i_12]) ^ var_5)))))) & var_9));
                        arr_47 [i_12] [i_10] [i_11] = var_9;
                        var_34 -= ((!(((var_4 << (var_0 - 165))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 16;i_15 += 1)
    {
        var_35 = ((((((var_1 > (arr_25 [10] [10] [i_15] [i_15] [10]))))) ^ ((-(arr_20 [i_15] [i_15])))));
        arr_50 [i_15] [i_15] = ((!(arr_45 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])));
        var_36 = (max(var_36, (((!(arr_37 [i_15] [i_15]))))));
    }
    var_37 = (!var_0);
    #pragma endscop
}
