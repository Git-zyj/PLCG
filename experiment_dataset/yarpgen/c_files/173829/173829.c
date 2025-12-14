/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_7));
    var_11 = (max(var_11, ((~((1133337773 ? 30141 : -var_0))))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (((((arr_2 [i_0] [i_0]) + 2147483647)) << (((arr_0 [i_0]) - 7618))));
        var_12 -= ((!((((arr_0 [i_0 - 1]) ^ 23108)))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_13 -= (((arr_2 [i_1] [i_1 - 1]) & (max((arr_4 [i_1 - 1]), 285251982))));
        var_14 *= (max((arr_4 [11]), ((-(arr_4 [i_1])))));
    }
    var_15 = 42427;
    #pragma endscop
}
