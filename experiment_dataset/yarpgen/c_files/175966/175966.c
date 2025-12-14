/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (~0);
        var_17 = ((-(arr_1 [i_0 + 1] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] = ((-(arr_6 [i_1])));
        var_18 = ((~(arr_3 [i_1])));
        var_19 = (max(var_19, (((((var_12 ? (arr_6 [i_1]) : 234)) > (arr_4 [i_1]))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            {
                var_20 = (min(65408, (arr_10 [i_2])));
                var_21 = (min(var_21, ((min(((var_5 ? (arr_11 [i_3 - 1] [i_2 - 1]) : (arr_11 [i_3 - 1] [i_2 - 1]))), 6124)))));
            }
        }
    }
    var_22 = -237;
    #pragma endscop
}
