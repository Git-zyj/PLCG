/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_0, (((!(233780435 + var_9))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_1;
        arr_3 [i_0] [i_0] = (22536 >= -6877643342767881913);
        var_14 = (max(1, (arr_0 [i_0])));
        var_15 = (min((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))), (12073899329774108803 >= var_1)));
    }
    #pragma endscop
}
