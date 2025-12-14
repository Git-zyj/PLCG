/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = (max((((((max((arr_0 [i_0] [1]), (arr_0 [i_0] [9])))) - ((min(17049, var_3)))))), (max((arr_1 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
        var_19 = (~127);
        arr_2 [i_0] = ((((((arr_1 [i_0] [i_0]) * (arr_1 [i_0] [i_0])))) ? ((-1503076414 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
    }
    /* LoopNest 2 */
    for (int i_1 = 4; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            {
                arr_7 [i_2] [i_2] [i_2] = ((+(min((max((arr_1 [i_2 + 1] [i_1 - 2]), (arr_0 [i_1] [i_2]))), (arr_6 [1] [i_2 + 1])))));
                var_20 = ((+((((min((arr_6 [i_1 - 1] [i_1]), 65532))) * 3))));
                var_21 |= ((arr_0 [i_1 + 1] [i_2 + 1]) ? (min((arr_0 [i_1] [i_2 + 1]), (((arr_5 [i_1] [10] [i_2]) ? var_15 : (arr_5 [i_1 + 2] [i_2] [7]))))) : 8);
            }
        }
    }
    #pragma endscop
}
