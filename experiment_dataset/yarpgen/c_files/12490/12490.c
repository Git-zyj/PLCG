/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((((max(var_3, var_8)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = (arr_1 [i_0]);
        var_13 |= var_1;
        arr_2 [i_0] = (((((arr_1 [i_0]) == var_6)) ? (arr_0 [i_0]) : (arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = arr_3 [i_1];
        arr_6 [i_1] &= ((((((arr_3 [i_1]) + (arr_3 [i_1 - 1])))) ? ((((arr_4 [i_1 + 3] [i_1 + 2]) >= (arr_3 [i_1 + 4])))) : (((arr_4 [5] [i_1 + 1]) ? (arr_4 [i_1] [i_1 + 2]) : (arr_4 [15] [i_1 + 3])))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 12;i_3 += 1)
        {
            {
                var_14 = (max((var_7 * var_8), ((-(arr_10 [i_2])))));
                arr_14 [i_3] = (((((max((arr_3 [i_2]), (arr_13 [i_2] [i_3])))) && (max(var_1, var_1)))) ? (arr_9 [i_2]) : (((((-(arr_0 [i_3])))) ? (arr_11 [i_2] [i_3 - 2] [i_2]) : (arr_9 [3]))));
            }
        }
    }
    #pragma endscop
}
