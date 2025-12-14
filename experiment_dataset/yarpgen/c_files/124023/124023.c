/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_9, var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [12] [i_1] = (((((((var_2 ? (arr_1 [i_1] [i_2]) : (arr_5 [i_2]))) == var_8))) - var_5));
                            var_17 += (~2969573131618258333);
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_1] = (min(var_0, (arr_9 [i_1] [i_1 + 1])));
                var_18 = (max((max((arr_10 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]), (arr_10 [i_1 + 3] [i_1 - 1] [i_1 + 1] [i_1 + 3]))), (((!(arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
                arr_14 [i_0] [i_0] [i_0] = (((arr_9 [i_1] [i_0]) ? (max((~var_5), var_7)) : (((!(arr_4 [i_1] [i_1 + 2] [i_1 + 2]))))));
                arr_15 [i_0] [i_0] [i_1 - 1] = -1652205949;
            }
        }
    }
    #pragma endscop
}
