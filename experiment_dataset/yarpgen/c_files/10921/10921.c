/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] = ((arr_3 [i_0 + 1] [i_0]) / ((17830442458915734698 ? (arr_6 [i_1] [i_0]) : (max(274877775872, var_8)))));
                        var_14 = (((98304 ? 98304 : 3304084398796102951)));
                        var_15 = (!var_10);
                        var_16 = (((!var_12) <= var_10));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        var_17 = (max(var_17, ((-(arr_1 [i_1 + 1])))));
                        var_18 = arr_0 [i_0 - 1] [i_1 + 1];
                        var_19 = (max(var_19, (1515619638089906116 ^ 15324993981688398414)));
                    }
                    for (int i_5 = 4; i_5 < 19;i_5 += 1)
                    {
                        var_20 -= var_3;
                        var_21 = ((((var_0 | (((((arr_8 [i_0 + 1] [i_1 + 3] [4] [i_5 - 2]) <= (arr_15 [i_0] [i_2] [1] [i_0]))))))) != ((-(arr_9 [i_0 - 1] [i_1 + 3] [i_2] [i_5 + 1] [i_0] [i_1 - 2])))));
                        arr_19 [i_0 - 1] [i_0] [i_2] [i_5 - 4] = arr_17 [i_0] [3] [i_2] [i_2];
                        var_22 = (2911216717868635551 ? (min(15324993981688398420, 16106127360)) : 6248887826064588934);
                    }
                    var_23 = (min(var_23, (((arr_15 [0] [i_1 + 3] [i_2] [i_1]) | ((((!(arr_2 [i_1])))))))));
                    var_24 = (min(var_24, (((max((arr_1 [i_0 - 1]), 5293481163876266230)) ^ var_7))));
                }
            }
        }
    }
    #pragma endscop
}
