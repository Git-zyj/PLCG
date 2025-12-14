/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_12 [i_2] [i_2] = (((65530 / 65527) ? (((max(-26922, -29387)))) : (max(13611087457194094104, 1))));
                        var_11 ^= (((-(max((arr_2 [i_1]), (arr_11 [1] [1] [i_2] [i_2] [1]))))) | (max((~var_7), (~var_9))));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_12 = var_7;
                        var_13 += arr_4 [i_0] [i_0];
                    }
                    var_14 += 1;
                    arr_15 [i_2] [i_0] = -94;

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_15 &= (max((((-((var_8 ? (arr_7 [i_0] [1] [i_0] [6]) : var_8))))), (max((max(var_0, var_2)), ((var_2 ? 4835656616515457506 : var_6))))));

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_16 ^= ((((arr_13 [i_1 + 1] [i_2 + 1] [i_5] [i_6]) ? (arr_13 [i_0] [1] [6] [i_5]) : 1)));
                            arr_21 [i_0] [i_0] [i_2 - 1] [i_5] [i_2 - 1] = ((var_9 ? ((((max(-102, var_2))) ? (arr_13 [i_0] [i_1 - 1] [i_2 + 1] [i_6]) : var_6)) : (((max(var_8, 1))))));
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_24 [i_7] [i_1 + 1] [i_7] [i_5] [i_7] = (max((arr_11 [i_1 - 1] [i_2 + 1] [i_1] [i_1 - 1] [i_1 - 1]), (111 == 1)));
                            arr_25 [i_0] [i_0] [i_0] [8] [8] [8] [i_7] = (max((max(var_0, var_9)), (17787 || var_2)));
                            arr_26 [i_7] [i_1 - 1] [i_2] [i_1 - 1] [i_7] = (max((arr_20 [17] [i_1 - 2] [16] [7] [i_7]), ((11471115102126493629 ? 1 : (arr_16 [i_1 + 2] [i_1 + 1] [i_2 - 1] [i_2 - 1])))));
                            arr_27 [i_0] [i_7] [i_2] [1] [6] [i_7] = (!var_6);
                        }
                        arr_28 [i_0] [i_1] [i_0] [i_5] = ((max(1, (~1))));
                    }
                    var_17 = 6;
                }
            }
        }
    }
    #pragma endscop
}
