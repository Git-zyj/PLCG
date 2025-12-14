/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    var_17 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_18 = (min(var_18, (((~(((~-5256200897730510918) / (((8894502662644154135 ? (arr_5 [i_0] [i_0 + 1] [i_0]) : -1148981237))))))))));
                        arr_9 [i_2] [i_2] [i_1] [i_2] = (min(var_15, (var_7 + 2233785415175766016)));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_19 = (min(var_19, ((!((((arr_11 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1]) ? (arr_13 [i_4] [i_4 - 1] [i_0] [i_4 - 1]) : (arr_10 [i_4 - 1] [i_4 - 1] [i_0] [i_4 - 1] [i_4 - 1] [i_4]))))))));
                        arr_14 [i_4] [i_2] [i_0] = 1932490142;
                    }
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        var_20 ^= ((min((arr_3 [i_0 - 2] [i_0 + 2]), (arr_3 [i_0 + 1] [i_0 + 2]))));
                        var_21 = ((((min(-1110472951504761387, (arr_16 [i_5 - 2] [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_1 + 1] [i_0 - 1])))) ? (((((min((arr_17 [i_2] [i_2] [i_5]), var_3))) ? ((-101 ? -1085341123 : -30)) : ((~(arr_11 [i_0 - 2] [i_1] [i_2] [i_5])))))) : (min((min((arr_11 [i_0] [15] [i_2] [i_5]), (arr_0 [i_5] [20]))), 1))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_22 [i_6] [i_2] [i_2] [i_0] = (!((max((arr_6 [i_0] [i_1] [i_2]), (((arr_5 [i_6] [5] [i_0 + 2]) << (1 - 1)))))));
                        var_22 += ((1096395695952486685 - ((max(((max(-102, var_4))), (arr_18 [i_0]))))));
                        var_23 ^= ((arr_10 [i_0 - 2] [6] [i_0] [i_0] [i_0 - 2] [i_0 + 2]) * (((arr_4 [i_1 + 2] [i_2] [i_6]) ? 1069547520 : (arr_4 [i_6] [18] [i_0]))));
                    }
                    arr_23 [i_0] [i_0] [i_2] [i_0] = (min(((~((-(arr_5 [i_2] [22] [i_0 - 2]))))), var_11));
                    arr_24 [i_0] [i_0] &= min(((6 ? (max(var_12, var_4)) : ((((arr_18 [i_0]) ? var_4 : (arr_6 [i_0] [i_0] [i_0])))))), var_2);
                }
            }
        }
    }
    var_24 = var_14;
    #pragma endscop
}
