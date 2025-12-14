/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((var_2 ? (var_7 != var_3) : var_10)), ((var_3 | ((var_9 ? 18 : 23365))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0 - 1] [i_0 - 1]);
        arr_3 [i_0 - 1] [1] = (((((arr_0 [i_0] [i_0 - 1]) <= (arr_0 [i_0 - 1] [i_0 - 1]))) && ((((arr_0 [i_0 - 1] [i_0 - 1]) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (arr_0 [4] [i_0 - 1]))))));
        arr_4 [6] [i_0] = (arr_1 [i_0] [i_0]);
        arr_5 [i_0] = (((arr_1 [i_0 - 1] [i_0 - 1]) >= ((+(min((arr_1 [i_0] [i_0]), (arr_0 [i_0] [16])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    arr_14 [i_2] [i_2 - 1] = (((arr_6 [i_2]) - (arr_12 [i_3] [i_2] [i_1] [11])));
                    arr_15 [i_1] [i_1] [i_3] [i_3] = ((-(((arr_13 [i_1] [i_1] [i_3] [18]) ? (arr_7 [i_1] [i_3]) : (arr_12 [i_1] [i_2] [i_1] [i_3])))));
                }
            }
        }
        arr_16 [i_1] = ((!(arr_6 [i_1])));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        arr_19 [i_4] [i_4] = (((max(((13611 ? 0 : (arr_10 [i_4] [i_4]))), (((!(arr_8 [17] [17]))))))) ? (max(((((arr_10 [i_4] [i_4]) ? (arr_7 [5] [i_4]) : (arr_1 [i_4] [i_4])))), ((13 ? (arr_17 [i_4]) : (arr_12 [i_4] [i_4] [i_4] [i_4]))))) : ((min((((arr_6 [1]) % (arr_7 [i_4] [i_4]))), (arr_0 [i_4] [i_4])))));
        arr_20 [i_4] [i_4] = (max((((((max((arr_12 [i_4] [i_4] [i_4] [i_4]), 65528))) ? ((0 ? (arr_11 [i_4] [i_4] [i_4]) : (arr_17 [i_4]))) : (min(224, (arr_1 [0] [4])))))), ((((((236250195 | (arr_12 [i_4] [i_4] [i_4] [i_4]))) + 9223372036854775807)) << (arr_11 [i_4] [i_4] [i_4])))));
        arr_21 [i_4] = min(-53, (((!(arr_8 [i_4] [i_4])))));
        arr_22 [i_4] = min(((max((max(65507, 8128)), (min(81, 49369))))), (~1));
        arr_23 [i_4] [i_4] = ((((((((arr_10 [i_4] [i_4]) % (arr_6 [i_4]))) >> (((max(28321, (arr_1 [i_4] [i_4]))) - 28320))))) ? (16166 <= 17) : (min((arr_1 [i_4] [i_4]), (arr_10 [i_4] [i_4])))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_26 [i_5] [i_5] = (((((((arr_10 [i_5] [17]) ? 35791 : 1)) | (arr_11 [0] [12] [i_5])))) ? (min((((arr_7 [i_5] [i_5]) ? (arr_8 [i_5] [i_5]) : (arr_9 [16] [i_5] [i_5]))), (((-(arr_10 [1] [3])))))) : (((arr_12 [i_5] [i_5] [i_5] [i_5]) ? (((4058717101 ? 1 : 112))) : ((49389 ? 2465583318 : (arr_1 [i_5] [i_5]))))));
        arr_27 [i_5] = min((arr_0 [i_5] [i_5]), (arr_6 [i_5]));
        arr_28 [i_5] [i_5] = (max((((((!(arr_7 [20] [i_5])))) & ((-(arr_24 [i_5]))))), (min(((1 ? (arr_24 [i_5]) : (arr_24 [i_5]))), ((83 & (arr_7 [i_5] [i_5])))))));
        arr_29 [i_5] = (max((((arr_6 [i_5]) ? (arr_6 [i_5]) : (arr_6 [i_5]))), (arr_6 [i_5])));
        arr_30 [i_5] = (arr_6 [i_5]);
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            {
                arr_37 [i_7] [i_7] [i_6] = (max((arr_35 [i_7] [i_6] [i_6]), (((57408 || -24) % 2881666170))));
                arr_38 [i_7] [i_6] = (min((arr_9 [i_7] [i_7] [i_7]), 17848));
                arr_39 [i_7] = (arr_31 [i_6]);
            }
        }
    }
    #pragma endscop
}
