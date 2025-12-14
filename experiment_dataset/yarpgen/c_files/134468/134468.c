/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = ((arr_2 [i_0]) <= (arr_2 [i_0]));
        var_17 = (arr_0 [i_0]);
        var_18 = (267386880 && -822038606036492873);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 = var_2;

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_20 |= var_15;
            var_21 = (min(var_21, (arr_2 [i_1])));
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_22 ^= var_10;
            var_23 = var_9;
        }
        arr_13 [i_1] = ((((-((4641602477569923888 + (arr_2 [i_1]))))) - (((var_11 ? (arr_10 [i_1]) : (((arr_0 [14]) ? (arr_1 [i_1]) : var_4)))))));
    }
    var_24 = var_13;
    #pragma endscop
}
