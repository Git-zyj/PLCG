/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(-5079122910914267846, (((!(((var_5 ? var_0 : 98))))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = 32457;
        var_18 = ((0 ? 98 : ((((-99801630 == 127) >= 8380416)))));
        var_19 = ((118 * (((0 / -17751) ? 2130706432 : 2))));
    }
    #pragma endscop
}
