/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_10 = (max(var_10, ((((((arr_1 [i_1 - 2]) ? 0 : (arr_3 [i_0] [i_1 - 2])))) ? 3300613404 : ((0 ? 3300613395 : (arr_3 [i_0] [i_0])))))));
                    arr_6 [i_2] [i_0] [i_0] = ((((((max((arr_0 [i_0] [i_0]), var_2))) ? (((arr_2 [i_0]) / 1116143271162244568)) : (((max(16590, var_4)))))) / (var_1 + 1116143271162244568)));
                }
            }
        }
    }
    var_11 = var_0;

    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_12 = (max(var_12, (((~(arr_7 [i_3]))))));
        arr_9 [i_3] [i_3] = 1;
        var_13 = ((((((arr_7 [i_3]) << (3483552712619036722 - 3483552712619036714)))) ? (arr_7 [i_3]) : (((arr_7 [i_3]) | (arr_7 [i_3])))));
    }
    for (int i_4 = 3; i_4 < 9;i_4 += 1)
    {
        var_14 = (((max(1, var_8))) + ((max(994353892, 4025392828873296722))));
        var_15 = (((((7168 || -8175) * (max((arr_1 [i_4 - 2]), 0)))) >= (((arr_0 [i_4 - 2] [4]) | 237))));
    }
    #pragma endscop
}
