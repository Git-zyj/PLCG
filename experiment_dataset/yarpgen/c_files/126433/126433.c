/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_4));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_21 = ((((max((((arr_1 [i_0]) ^ -15)), (((!(arr_1 [2]))))))) ? (((-(arr_0 [i_0])))) : (arr_1 [i_0])));
        var_22 = ((((((!283726776524341248) ? (arr_1 [i_0]) : (arr_1 [8])))) ? var_15 : ((~(arr_1 [i_0])))));

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_0] = -55;
            arr_6 [i_0] [i_1] = (((((15 ^ 3) & (min((arr_3 [i_0] [i_0] [i_0]), (arr_4 [16] [i_1] [i_1]))))) <= ((min(var_9, (arr_3 [i_0] [i_0] [i_1]))))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                var_23 = ((-111 ^ (arr_3 [i_1 - 1] [i_1 - 1] [i_1 + 2])));
                var_24 = (!5042322881813504935);
            }
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_25 = 54;

            /* vectorizable */
            for (int i_4 = 3; i_4 < 21;i_4 += 1) /* same iter space */
            {
                var_26 = (111 & var_18);
                arr_14 [i_0] [i_3] [i_4] = 1108307720798208;
                arr_15 [i_4] [i_0] = (((arr_4 [i_3] [i_3] [i_3]) <= (arr_4 [i_3] [i_0] [20])));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            var_27 ^= (var_3 & -111);
                            arr_21 [i_0] [i_5] = (!63);
                            var_28 = arr_10 [i_6];
                            var_29 = ((!(208 <= var_7)));
                        }
                    }
                }
            }
            for (int i_7 = 3; i_7 < 21;i_7 += 1) /* same iter space */
            {
                var_30 = ((((var_17 ? (arr_23 [i_0] [i_3] [i_7 - 2] [i_7 - 2]) : (arr_4 [i_3] [i_3] [i_3]))) ^ ((max((arr_17 [i_0] [i_3] [i_3] [i_3] [6] [i_7]), -208)))));
                arr_25 [i_0] [i_0] [1] [i_3] = 78;
            }
            var_31 = (((((+((((arr_23 [i_0] [i_0] [i_0] [i_3]) <= var_18)))))) ? (arr_1 [i_0]) : (arr_3 [i_0] [i_3] [i_3])));
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            var_32 = ((~(arr_4 [i_8] [i_0] [i_0])));
            var_33 = (((arr_23 [i_0] [i_0] [i_8] [i_8]) <= (~40162)));

            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                var_34 = (max(var_34, 6735121575856012011));
                var_35 = 21466;

                for (int i_10 = 2; i_10 < 20;i_10 += 1)
                {
                    arr_32 [i_8] [i_10] [i_9] [i_10] = (arr_22 [i_0] [0] [i_9] [23]);
                    var_36 = (max(var_36, ((((-32767 - 1) <= -200)))));
                    var_37 = ((((((((arr_12 [i_8]) & (arr_9 [i_9]))) & (arr_18 [i_8] [i_10 + 3] [i_10] [i_10] [i_10] [i_10 + 4])))) ? 0 : 32589));
                    var_38 = ((8710222515556204802 ? -31 : 8191));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                {

                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        arr_37 [i_0] [i_8] [i_9] [10] [i_0] = ((var_6 ? (arr_2 [i_12]) : -73));
                        arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [13] = ((~(((arr_24 [i_8] [i_9]) ? (arr_9 [i_11]) : (arr_35 [i_9] [i_11])))));
                    }
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        var_39 -= (((arr_24 [i_9] [i_13]) ? (((2213 ? 190 : (arr_7 [i_9] [i_9] [i_11] [i_13])))) : (arr_16 [i_0])));
                        var_40 = 223;
                    }
                    for (int i_14 = 2; i_14 < 22;i_14 += 1)
                    {
                        arr_44 [i_0] = (((var_10 ? 979671036 : -1948383018)));
                        arr_45 [6] [i_8] [6] [i_9] [6] [i_8] = (((arr_7 [i_14] [i_14] [i_9] [i_11]) <= ((((arr_33 [i_0] [i_8] [i_9] [i_8] [i_11] [i_14]) & (arr_41 [i_0] [i_0] [i_9] [i_14 - 1]))))));
                        var_41 = (arr_31 [14] [i_0]);
                    }
                    var_42 = (((var_1 ^ var_18) ? (105 ^ -6095040661230717466) : (arr_23 [i_0] [i_8] [i_9] [i_11])));
                    arr_46 [i_0] [i_0] [i_0] = (((arr_31 [i_0] [i_8]) & var_11));
                }
                for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
                {
                    arr_50 [i_0] [i_8] [i_0] [i_15] = ((((-(((arr_31 [i_0] [i_0]) ? (arr_26 [i_0] [i_0] [i_0]) : -32751))))) ? ((-(arr_27 [16] [i_8] [i_8]))) : var_2);
                    arr_51 [i_15] [i_15] [i_9] [i_8] [3] [i_0] = ((((arr_49 [i_0] [i_8] [6] [i_9] [i_15] [i_15]) <= (arr_49 [i_0] [i_0] [i_8] [i_9] [i_9] [i_15]))));
                    arr_52 [i_0] [21] [i_9] [21] = (arr_7 [i_15] [i_8] [i_9] [20]);
                    var_43 = (max(var_43, ((((arr_12 [i_0]) ? (arr_0 [21]) : ((((!(arr_7 [i_15] [i_8] [i_9] [i_15]))))))))));
                }
                var_44 = (((arr_23 [i_0] [i_0] [i_0] [i_9]) ? 0 : ((((((var_10 ? (arr_1 [i_0]) : 7))) || (((4043575811 ? -11 : (arr_24 [i_9] [i_8])))))))));
                arr_53 [i_9] [i_8] [i_0] = (var_6 & var_14);
            }
        }
    }
    var_45 = ((var_6 ? (var_0 <= 1857541270689361054) : var_11));
    #pragma endscop
}
