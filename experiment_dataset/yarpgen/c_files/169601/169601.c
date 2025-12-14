/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;
    var_17 = var_3;
    var_18 = (max(-56, -32114));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_19 = min((min((arr_1 [i_0 + 2]), 48)), (((!(arr_0 [1] [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = (i_1 % 2 == 0) ? (((((((arr_4 [i_1] [i_0 + 2] [i_1 + 1]) << (((arr_4 [i_1] [i_0 + 2] [i_1 + 2]) - 15166))))) ? (max(var_8, (arr_4 [i_1] [i_0 + 1] [i_1 + 3]))) : ((min((arr_4 [i_1] [i_0 - 1] [i_1 - 1]), -32114)))))) : (((((((((arr_4 [i_1] [i_0 + 2] [i_1 + 1]) + 2147483647)) << (((((((arr_4 [i_1] [i_0 + 2] [i_1 + 2]) - 15166)) + 33914)) - 18))))) ? (max(var_8, (arr_4 [i_1] [i_0 + 1] [i_1 + 3]))) : ((min((arr_4 [i_1] [i_0 - 1] [i_1 - 1]), -32114))))));
                    var_21 ^= (((((arr_4 [1] [i_2] [i_2]) ^ ((30729 ? var_4 : -30729))))) ? (((var_10 ? var_12 : -6542))) : ((max(((max(70, 1))), (arr_4 [12] [i_2] [12])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_22 = 32113;
                                var_23 = ((((((min(2118938884, var_1))) ? (arr_2 [i_2]) : (((1 ? 1 : (arr_4 [i_1] [i_2] [i_3])))))) - ((((((2183762740772844730 ? -70 : 16062269783077997067))) ? (arr_8 [i_0] [i_1] [i_1]) : ((1 ? 13355 : 0)))))));
                                var_24 = 1;
                                var_25 = (arr_5 [i_2]);
                                var_26 = ((((var_3 ? 23225 : (arr_9 [i_0 + 2] [i_0 + 1] [i_1 + 1] [i_1] [i_1 - 1]))) % -30722));
                            }
                        }
                    }
                    var_27 = ((((((!((min(-32106, (arr_8 [i_0] [i_1] [i_2])))))))) >= 16262981332936706907));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_28 = ((((min((var_10 & 23084), (arr_4 [i_5] [i_5] [i_5])))) & (min((((arr_2 [i_5]) << (((arr_3 [i_5] [i_5]) + 16426)))), ((min(var_13, (arr_5 [i_5]))))))));
        var_29 = (((((arr_10 [i_5]) < (arr_10 [i_5]))) ? (min((arr_6 [i_5] [i_5] [i_5] [1] [i_5]), ((1 >> (((arr_3 [i_5] [i_5]) + 16435)))))) : (!var_2)));
    }
    #pragma endscop
}
