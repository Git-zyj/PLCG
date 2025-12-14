/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1688787302;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = (max(var_20, (((min(var_2, -1688787278))))));
        arr_3 [i_0] [i_0] = 59;
        var_21 = (arr_1 [i_0]);
        var_22 -= 4736;
        arr_4 [i_0] = (((max((1688787310 > var_7), (arr_0 [i_0]))) - (((min((arr_1 [i_0]), 1688787315))))));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_23 = (min(var_23, (arr_6 [1] [i_1])));
        arr_7 [i_1] = var_2;
        var_24 = (min(-4473, ((max(11, (arr_5 [i_1]))))));
    }
    #pragma endscop
}
