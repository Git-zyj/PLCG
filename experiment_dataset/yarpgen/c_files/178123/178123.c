/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (min((((arr_3 [i_0]) ? (arr_0 [i_0]) : (arr_4 [i_0] [i_1] [i_1]))), var_7));
            arr_6 [i_1] = ((-(((arr_0 [i_1]) + (arr_0 [i_1])))));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_11 [i_0] [i_2] = (arr_10 [i_0]);
            arr_12 [i_0] [i_0] = (min(((var_18 | (11254322501175588707 - 5285))), (arr_8 [i_0] [i_2] [i_0])));
        }

        /* vectorizable */
        for (int i_3 = 3; i_3 < 23;i_3 += 1)
        {
            arr_15 [i_3] [8] [i_3] = var_11;
            arr_16 [i_3] [i_0] [i_3] = -438319599;
            arr_17 [i_0] [i_0] [i_3] = ((0 ? (arr_9 [i_0] [i_3 + 1] [i_3]) : (arr_9 [i_0] [i_3 - 1] [i_3])));
        }
        arr_18 [i_0] = var_3;
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        arr_22 [i_4] = (max(4036554267, ((((min(0, 4879))) ? (arr_10 [i_4]) : (arr_3 [i_4])))));
        arr_23 [i_4] = (min(29125, (min(50933, var_9))));
        arr_24 [i_4] [i_4] = (arr_8 [i_4] [i_4] [i_4]);
        arr_25 [i_4] [i_4] = ((((max((4889 ^ var_9), (((var_17 ? (arr_13 [i_4] [i_4]) : var_18)))))) ? ((max(-117, (min((arr_9 [i_4] [i_4] [i_4]), 4879))))) : 5832));
        arr_26 [i_4] [i_4] = ((+(max((arr_4 [i_4] [i_4] [i_4]), (arr_10 [i_4])))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_29 [i_5] = ((arr_14 [i_5] [22] [i_5]) ? ((min((arr_14 [i_5] [2] [i_5]), (arr_14 [i_5] [16] [i_5])))) : (arr_14 [i_5] [8] [i_5]));
        arr_30 [2] [2] = max((((arr_7 [15]) ? -117 : (arr_1 [14]))), var_18);
        arr_31 [i_5] = -4880;
    }
    var_20 = ((((max((var_17 && var_15), 4294967295))) && (((min(9337923333356615501, 4294967289))))));
    var_21 = (((((((min(1, var_11)) < var_19)))) == (min((min(3885623656, var_10)), -122))));
    #pragma endscop
}
