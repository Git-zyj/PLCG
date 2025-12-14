/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_15 = (((arr_0 [i_0 - 2] [i_0]) ? (0 && 1) : (max((arr_1 [i_0]), (var_10 ^ -4140784709693221472)))));
        var_16 = (min(var_2, (min((arr_0 [i_0] [i_0]), (((!(arr_0 [i_0] [13]))))))));
        var_17 = ((-((max((min((arr_1 [i_0 + 1]), 0)), 219)))));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_18 -= 1665;
        arr_6 [i_1] = (min((arr_2 [i_1 + 1]), (((arr_0 [i_1 - 1] [i_1 + 1]) ? (arr_0 [i_1 - 2] [i_1 + 1]) : var_7))));
    }
    var_19 = var_2;
    #pragma endscop
}
