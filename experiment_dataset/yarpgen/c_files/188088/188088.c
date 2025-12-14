/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (min(3043263222547092530, 3));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_21 = 15403480851162459074;
        var_22 = ((1 << (70 - 68)));
        var_23 = 2;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_4 [5] = 15403480851162459074;
        arr_5 [i_1] = -8928047396367954177;
        arr_6 [i_1] [i_1] = ((((-(arr_1 [i_1] [i_1]))) - (((min(1, 175))))));
    }
    #pragma endscop
}
