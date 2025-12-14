/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_8);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (max((max((((arr_0 [6] [i_0]) / (arr_1 [i_0]))), ((min(var_1, 1))))), (-580694206848336218 || 12)));
        var_11 = (arr_0 [i_0] [4]);
    }
    var_12 = (((max(20, 54131432591786821)) <= var_7));
    #pragma endscop
}
