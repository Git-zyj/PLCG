/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 -= (var_9 >= var_5);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 += ((!(var_7 + -10454)));
        arr_2 [i_0] = ((!((max((arr_1 [4]), 30161)))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = (arr_5 [i_0]);
            arr_7 [i_1] [2] [i_0] |= var_1;
            arr_8 [i_0] [i_1] = ((((((max((arr_4 [16] [i_1] [i_1]), 14441))) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_1 [i_1]))) + ((min(var_6, 30158)))));
            arr_9 [i_0] [i_0] = (max(10299, (((arr_0 [21] [21]) ? (arr_0 [i_0] [i_0]) : -909595124))));

            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                arr_14 [i_0] [i_0] [i_0] = ((((!var_6) & 10538)));
                arr_15 [i_0] [i_0] [i_1] [i_2] = ((30142 | ((2525 ? (arr_13 [i_2 + 1]) : (arr_13 [i_2 + 3])))));
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_15 -= (arr_16 [i_4]);
            var_16 -= (arr_18 [5] [i_4] [i_4]);

            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                var_17 -= (((12901 % 17066080760370779605) == var_10));
                arr_23 [i_3] [14] [i_5] [i_5 + 3] = (arr_20 [i_3]);
            }
        }
        var_18 = (arr_12 [i_3] [i_3]);
        arr_24 [i_3] = 12729;
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 15;i_6 += 1)
    {
        var_19 |= ((~(arr_3 [i_6])));
        var_20 = (max(var_20, (~var_7)));
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        arr_29 [i_7] = ((115 | (~var_4)));
        var_21 = (((((!((max(var_11, 52214)))))) | ((-((var_5 ? (arr_12 [i_7] [i_7]) : (arr_3 [i_7])))))));
        var_22 -= -var_4;
    }
    var_23 -= var_3;
    #pragma endscop
}
