/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~16);
    var_19 = ((-51 ? 23025 : 1));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 = (min(var_20, (arr_0 [i_0])));
        arr_2 [i_0] = (max(217, (((max(var_15, (arr_1 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_21 = (max(32341, 10334704822696720610));

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_22 = (min(var_22, 7));
            arr_9 [6] = ((10334704822696720614 ? (arr_7 [i_1] [i_1] [i_1]) : ((((((-25 + 2147483647) << (61 - 61)))) - 2403033612442666711))));
            var_23 = (((44 << (((arr_8 [i_2]) - 225)))) / (((arr_8 [i_1]) ? -23026 : (arr_8 [i_2]))));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            arr_12 [i_3] = ((((min((arr_5 [i_1] [20]), (1 != var_2)))) ? ((max((!175), (!8221934599882400658)))) : -32371));
            var_24 = ((((((max(96, 36698))) ? 21 : (max(2403033612442666716, 1)))) ^ (((((((28837 ? (arr_5 [i_1] [i_3]) : -16))) && (arr_8 [i_1])))))));
        }
        var_25 = ((((((((var_6 & (arr_8 [i_1])))) ? (arr_5 [i_1] [i_1]) : ((156 >> (((arr_7 [18] [i_1] [18]) - 41249))))))) ? var_10 : ((-(max((arr_10 [i_1] [i_1] [i_1]), -7845))))));
    }
    for (int i_4 = 3; i_4 < 11;i_4 += 1)
    {
        arr_17 [i_4] = (36695 ^ 61986);
        arr_18 [i_4] = ((((max(21511, var_10))) ? (arr_0 [i_4 + 2]) : ((var_3 ? (arr_13 [i_4] [i_4 + 2]) : var_9))));
        arr_19 [i_4] [12] = var_9;
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    var_26 = (--1);
                    var_27 = arr_3 [i_5];
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                {
                    arr_34 [i_5] = arr_29 [i_9];
                    var_28 = (((((9139765294687069401 ? 3530 : 14))) ? (((((max((arr_26 [i_5] [i_5] [i_5] [i_5]), (arr_4 [0]))))) + (32768 & var_11))) : (((~((var_14 ? (arr_7 [i_5] [i_8] [13]) : var_12)))))));
                }
            }
        }
    }
    #pragma endscop
}
