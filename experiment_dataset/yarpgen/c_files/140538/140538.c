/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 -= (min((max(-22381, 1)), (arr_2 [i_0])));
        var_20 = (min(var_9, (((((max((arr_2 [i_0]), var_13))) >= var_13)))));
        var_21 = ((!((!(arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (((((1981902450 ? 1 : -97))) ^ (arr_4 [i_1])));
        var_22 = -65;
        var_23 = (min(var_23, var_7));
    }
    var_24 -= var_15;
    #pragma endscop
}
