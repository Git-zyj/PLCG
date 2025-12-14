/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_10 -= (((arr_2 [i_0] [i_0]) % (arr_2 [i_0] [i_0])));
        var_11 -= (arr_2 [i_0] [i_0]);
        var_12 -= ((30645 ? (8528628826166033290 / 30633) : -8528628826166033274));
        var_13 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_14 ^= ((!((((arr_4 [16] [i_1]) ? (arr_4 [18] [i_1]) : (arr_4 [14] [i_1]))))));
        var_15 = (arr_1 [i_1]);
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_16 = (((((~(((arr_1 [i_2]) ? (arr_4 [14] [i_2]) : (arr_2 [i_2] [i_2])))))) && ((((arr_2 [21] [8]) + (arr_2 [i_2] [i_2]))))));
        var_17 |= (arr_2 [i_2] [i_2]);
        var_18 = (((((arr_5 [i_2] [i_2]) ? (arr_5 [i_2] [i_2]) : (arr_5 [i_2] [i_2]))) != ((-(arr_5 [i_2] [i_2])))));

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_19 = (((arr_0 [i_2]) == (((arr_10 [i_2]) ? (((arr_4 [0] [i_3]) / (arr_3 [i_2]))) : (arr_0 [i_2])))));
            var_20 = (((((arr_10 [i_2]) | (arr_1 [i_2]))) + (+-57)));
            var_21 = ((((((arr_10 [10]) >= (((arr_6 [i_3]) | (arr_8 [4] [i_2])))))) + ((((arr_1 [i_3]) != (arr_6 [i_2]))))));
            var_22 = (30631 ? -8528628826166033291 : -8528628826166033290);
        }
    }
    var_23 = (var_1 * var_1);
    var_24 = var_9;
    #pragma endscop
}
