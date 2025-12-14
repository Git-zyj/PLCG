/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min((max(((-9223372036854775798 ? (arr_1 [15]) : 1)), var_0)), (max((arr_0 [i_0] [i_0]), var_8))));
        var_12 = ((((((arr_0 [i_0] [i_0]) + 2147483647)) << (var_8 - 1))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 22;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_13 -= 5530;
                    var_14 -= ((-21 ? 134217600 : 0));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    var_15 = (min(var_15, (((var_4 == (arr_13 [i_1] [3] [i_3] [i_5] [i_3 + 1]))))));
                    var_16 = ((~var_9) ^ (~4));
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_17 = ((-(!245)));
                    arr_18 [12] [i_6] [i_6] [i_1] = var_5;
                    var_18 = var_8;
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    var_19 = (((~5515) ^ (((max(1142907179, (arr_1 [i_1])))))));
                    var_20 = -933768881712836919;
                    var_21 = (~(min(((var_4 ? -1263142101 : (arr_9 [i_7] [i_7] [i_7] [i_7]))), (((var_1 && (arr_3 [i_2] [i_3])))))));
                    var_22 = (max((((arr_15 [12] [4] [21]) >> var_5)), 128));
                    var_23 = (((!2133985779) << (((min((arr_21 [i_3 - 1] [i_3 - 2] [i_3 - 2] [i_3 - 1] [i_3 + 1] [i_3 - 2]), (arr_21 [i_3 - 2] [i_3 - 1] [i_3 - 2] [i_3 - 3] [i_3 - 1] [i_3 + 1]))) - 14375307443303441979))));
                }
                var_24 = (max(-76, 933768881712836926));
                var_25 = (max(111, (arr_9 [i_1] [22] [i_1] [22])));
            }
            for (int i_8 = 3; i_8 < 22;i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            var_26 = ((28804 ^ (((-6429 & 909157797) & (((max(1, -15))))))));
                            var_27 = (((arr_3 [i_9] [i_8]) ? (125 >> 1) : ((((min(1, (arr_12 [i_1] [i_2] [i_8] [i_9] [i_10])))) & (var_3 < var_0)))));
                        }
                    }
                }
                arr_29 [22] [i_2] [17] = (((min(((min((arr_6 [i_1] [i_2] [i_2]), 26731))), var_4)) == ((var_9 ? (arr_12 [i_8 - 1] [i_8 + 1] [i_8 - 2] [i_8 - 3] [i_8 - 1]) : (((arr_19 [i_8] [i_8 - 3] [i_8] [i_2] [i_1]) ? var_7 : var_5))))));
            }
            var_28 = (max((((-((-(arr_6 [i_1] [8] [i_2])))))), (arr_21 [i_2] [i_2] [i_1] [i_1] [i_1] [i_1])));
        }
        var_29 = (min((((arr_15 [i_1] [i_1] [12]) & var_10)), ((-((67 ? 0 : (arr_23 [i_1] [i_1])))))));
    }
    var_30 = (min((~var_7), var_9));
    var_31 = var_1;
    var_32 = ((~(max((var_2 & var_8), var_1))));
    #pragma endscop
}
