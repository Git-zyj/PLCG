/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (!var_5);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = ((((1 ^ (arr_1 [i_0]))) % (arr_0 [i_0] [i_0])));
        arr_4 [i_0] = (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_17 = 354861924804874923;

        /* vectorizable */
        for (int i_2 = 3; i_2 < 7;i_2 += 1)
        {
            var_18 = ((3 ? (arr_8 [i_2 + 2] [i_2 - 1] [4]) : (arr_8 [1] [i_2 + 3] [i_1])));
            var_19 = 0;
        }
        /* vectorizable */
        for (int i_3 = 4; i_3 < 9;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_20 = ((-70 ? var_2 : (var_1 % 31)));
                        var_21 = (((arr_18 [i_1] [6] [i_4 - 1] [4] [i_4] [i_3 - 1]) ? (arr_18 [i_1] [i_3 - 1] [i_4 - 1] [i_5] [i_5] [i_3 - 1]) : (arr_20 [i_4 + 1] [i_3] [i_4 - 1] [i_4 - 1] [i_3])));
                        var_22 = (max(var_22, (((-988628260 ? (arr_20 [i_4 - 1] [i_5] [8] [i_5] [2]) : (((arr_10 [i_1]) ? 988628267 : 988628267)))))));
                    }
                }
            }
            var_23 |= ((var_14 ? -var_10 : var_0));

            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                arr_25 [i_1] [i_3] [i_6] = (((arr_7 [i_3 + 1] [i_6]) ? 4294967288 : (arr_7 [i_3 - 2] [i_3 - 2])));
                arr_26 [i_1] [4] [i_3] = (((arr_13 [i_3 - 4] [i_3]) ? 127 : 178));

                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    arr_30 [7] [i_3] [0] [i_3] [i_7] [4] = (((arr_9 [i_3 - 1] [i_3 - 2] [i_3 + 1]) ? (arr_9 [i_3 - 2] [i_3 - 4] [i_3 - 4]) : (arr_12 [i_7] [i_3 - 2])));
                    arr_31 [i_3] [9] [i_6] [i_6] = ((~(arr_17 [i_3 - 1] [i_3] [i_3])));

                    for (int i_8 = 4; i_8 < 9;i_8 += 1)
                    {
                        var_24 = ((((2127132101 >= (arr_21 [i_1] [2] [2] [i_8]))) ? (arr_18 [i_3 - 2] [i_3] [i_6] [i_8 - 4] [i_3 - 2] [i_8 + 1]) : (((189 ? 37 : var_4)))));
                        arr_36 [i_8 + 1] [i_7] [i_3] [i_3] [i_3] [i_3 + 1] [i_1] = ((-2313 ? (~var_12) : (((arr_14 [i_8] [i_1]) ? var_7 : 2167835180))));
                        var_25 &= (((((arr_13 [0] [8]) || var_8)) ? (var_0 || -8415118338783766467) : ((1 ? -19546 : 43507))));
                        arr_37 [i_3] [6] [i_6] [i_3] [i_8 - 4] [6] [i_8 - 1] = ((var_2 ? -19546 : ((var_11 ? 2297 : 255))));
                        var_26 = (arr_34 [i_1] [i_1] [1] [i_7] [i_8 - 4] [i_6]);
                    }
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        var_27 *= (((((-2331 ? -1337542732 : (arr_10 [i_1])))) ? (((var_5 ? 0 : (arr_1 [i_1])))) : 7125692339295576875));
                        var_28 |= ((2324 << (45286 - 45278)));
                        arr_42 [i_3] [i_3] [i_3] [i_7] [i_9] = (-24467 * 109);
                    }
                    for (int i_10 = 2; i_10 < 8;i_10 += 1)
                    {
                        var_29 = (((arr_19 [i_3] [i_3] [i_10 - 2]) != (arr_28 [i_3] [i_3] [i_10 - 1] [i_10 + 2] [7])));
                        arr_47 [i_1] [i_3] [i_6] [i_7] [i_3] = (((((171 | (arr_16 [i_1] [i_6] [i_7])))) ? ((171 ? var_5 : (arr_28 [8] [i_3] [9] [i_7] [3]))) : 42164));
                    }
                }
            }
            var_30 = -235;
        }
    }
    #pragma endscop
}
