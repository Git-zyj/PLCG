/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_16 |= (((((-11741 * (arr_1 [10])))) ? ((1538105009 >> (-197424225 + 197424229))) : var_4));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = ((-(((arr_2 [i_0 + 1]) ? ((1 ? (arr_9 [i_0] [i_0 + 1] [2]) : (arr_7 [i_0] [i_0 - 1] [1]))) : ((((arr_4 [i_0]) ? var_8 : 48389)))))));
                    arr_11 [i_0] [i_1] [i_0] = 37717;

                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            arr_17 [i_3] [i_3] [i_2] [i_3] [i_3] &= ((((((2147483624 && 1544555008) ? (min((arr_5 [i_0 + 1] [i_2]), var_10)) : var_4))) ? (((arr_5 [i_0 + 1] [i_1]) ? ((184 ? 445188803 : var_2)) : (arr_10 [i_3] [i_3] [14] [i_3]))) : (((var_5 && var_7) ? var_13 : (max(var_15, 64136))))));
                            arr_18 [i_0] [11] [i_2 - 1] [i_0] [i_2 + 1] = (4294967273 || 1);
                            var_18 = (((((15944786994215655369 ? 13077525680209257158 : 0))) ? 1283830968 : 23352));
                            arr_19 [18] [i_0] [i_2] [i_3] [4] = (0 < 232);
                        }
                        var_19 = (arr_5 [i_1] [i_0]);
                        arr_20 [i_0] [i_0] [i_1] [9] [17] [i_3 - 1] = (((arr_6 [i_2 + 2] [i_0 + 1] [i_3 + 2]) == ((((arr_0 [3]) || var_11)))));
                    }
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        arr_23 [i_0] = (((max((206 && 1), 90))) && var_5);
                        var_20 = (min((((arr_10 [i_0] [i_0 - 1] [i_2 + 1] [i_5 + 1]) % (arr_10 [i_0] [i_0 - 1] [i_2 - 1] [i_5 - 1]))), ((((var_2 / var_1) / (((min(var_4, 10)))))))));
                    }
                }
            }
        }
        arr_24 [1] |= (((((arr_14 [i_0 + 1]) ^ 1439723598))) & (((arr_10 [20] [16] [i_0 + 1] [i_0]) ? (arr_1 [18]) : (arr_10 [16] [i_0] [i_0] [i_0 - 1]))));
        var_21 = (max(var_21, ((((((var_1 ? (arr_3 [i_0 + 1]) : (arr_3 [i_0])))) ? (((((arr_3 [i_0 + 1]) || (arr_3 [i_0 + 1]))))) : (((-2147483647 - 1) ? 23352 : 4141731183)))))));
    }
    var_22 = (((((var_6 | 2223777095) ? (var_2 ^ 1) : (8355840 ^ var_8))) & (~-1374782047)));
    #pragma endscop
}
