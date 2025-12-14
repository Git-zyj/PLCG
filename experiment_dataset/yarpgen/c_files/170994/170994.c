/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 14883344999410059293;
    var_18 = (((((-((min(0, var_15)))))) >= ((~((14883344999410059293 & (-127 - 1)))))));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = 65;
        arr_4 [i_0] = var_13;
        var_19 = (((max((min(4723450536199870423, (arr_2 [1]))), 177)) << (((arr_0 [i_0 + 4]) | (arr_0 [i_0 + 1])))));
    }
    var_20 = (!var_11);
    #pragma endscop
}
