/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    var_16 |= (((var_0 ? ((max(var_14, var_2)) : (max(var_9, var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((!(((arr_5 [0] [2] [i_1 + 1]) == ((1 - (arr_4 [i_0]))))))))));
                arr_6 [i_0] = (min((min(((min((arr_5 [i_0] [i_1 - 1] [i_0]), (arr_1 [i_0] [10])))), (min((arr_4 [i_0]), (arr_1 [i_0] [i_1]))))), (arr_2 [i_0] [i_0])));
            }
        }
    }

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_9 [1] [i_2] = (arr_7 [i_2]);
        arr_10 [13] [13] = (arr_3 [i_2]);
    }
    for (int i_3 = 3; i_3 < 7;i_3 += 1)
    {
        var_18 ^= ((+(min((arr_12 [i_3]), (arr_11 [i_3])))));
        var_19 |= ((-1016073316 * ((min((!1), (arr_7 [i_3]))))));
        var_20 |= (max((arr_0 [12]), (max((arr_0 [6]), (arr_0 [1])))));
    }
    #pragma endscop
}
