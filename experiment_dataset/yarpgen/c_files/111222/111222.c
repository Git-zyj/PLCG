/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_18 = (((arr_4 [4] [i_0 + 1] [i_0]) | (arr_3 [1] [i_0 - 1] [1])));

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_19 ^= (var_10 ? (((arr_5 [i_2] [i_0 - 2]) ? (arr_3 [i_0] [12] [i_2]) : var_17)) : (((arr_5 [6] [0]) ? (arr_2 [13] [i_1]) : var_8)));
                var_20 = ((var_5 + (arr_6 [i_0 - 2])));
            }
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    arr_14 [i_0] = ((((((arr_0 [i_0]) ? (arr_11 [i_0] [i_0] [i_1] [i_1] [1] [1]) : (arr_2 [1] [i_1])))) ? (((var_17 == (arr_1 [i_1])))) : (((arr_2 [i_0] [0]) ? (arr_13 [11] [1] [11] [11]) : (arr_11 [i_0] [i_1] [i_0] [i_3 + 1] [i_4] [i_0])))));
                    arr_15 [i_0] [i_1] [i_0] [i_4] = (i_0 % 2 == 0) ? (((((arr_2 [i_0 - 1] [i_0 - 1]) + 2147483647)) << (((arr_8 [i_0] [i_0] [i_0 + 1]) - 4378167280436241244)))) : (((((arr_2 [i_0 - 1] [i_0 - 1]) + 2147483647)) << (((((arr_8 [i_0] [i_0] [i_0 + 1]) - 4378167280436241244)) - 3047164556044387184))));
                    arr_16 [i_0] [4] [3] [i_4] = var_0;
                    arr_17 [i_0] [i_1] [15] [i_0] = (arr_8 [i_1] [i_0] [2]);
                }
                for (int i_5 = 2; i_5 < 18;i_5 += 1)
                {
                    var_21 = (((arr_18 [i_5 + 1]) / (arr_18 [i_5 - 2])));
                    var_22 = (arr_18 [i_0 - 2]);
                    arr_20 [i_1] [18] &= (((arr_5 [i_5 - 1] [i_5 - 1]) != (arr_5 [i_5 - 1] [i_5 - 1])));
                }
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        {
                            arr_27 [i_0] [i_0] = ((!(~var_3)));
                            var_23 = (-(arr_0 [i_0]));
                        }
                    }
                }
                arr_28 [i_0] = (((((364825325 && (arr_12 [5] [7])))) < 1));
                var_24 = (arr_12 [i_0] [i_0]);
            }
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                arr_31 [i_0 - 1] [6] [i_8] &= (((arr_8 [i_0 - 2] [i_8] [i_1]) >> (var_17 + 725167929)));
                arr_32 [12] [i_0] [i_0] [i_0] = (((var_16 == var_3) < (arr_5 [i_0] [7])));
            }
        }
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            var_25 *= (((arr_22 [i_0 + 1] [14] [14] [i_0]) ? (arr_36 [i_0]) : ((((arr_18 [i_0]) <= var_14)))));
            var_26 = (arr_36 [i_0 - 1]);
            var_27 = ((-(arr_21 [i_0 + 1] [i_0] [3] [i_0 + 1] [i_0])));
        }
        var_28 ^= (arr_5 [9] [1]);
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 22;i_10 += 1)
    {
        var_29 ^= (((arr_39 [22]) ? (arr_37 [14]) : ((13289 ? var_2 : -162629141))));
        var_30 ^= ((arr_37 [20]) ? var_2 : -390391398);
        var_31 ^= (((arr_39 [18]) < (arr_40 [i_10 - 1])));

        for (int i_11 = 1; i_11 < 1;i_11 += 1)
        {
            var_32 *= (((arr_41 [14] [i_11 - 1]) ? (arr_43 [12] [i_11]) : (~1)));
            var_33 ^= var_17;
        }
    }
    var_34 = var_1;
    var_35 = (((63131 != var_10) ? (((!(((28923 ? 13835058055282163712 : 16792504527356827250)))))) : var_8));
    var_36 = (~266);
    #pragma endscop
}
