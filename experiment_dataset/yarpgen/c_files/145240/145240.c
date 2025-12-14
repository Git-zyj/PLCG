/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!95);
    var_18 = (((~12837) ? ((571957152676052992 ? 0 : 1)) : (max(((var_8 ? 124 : var_1)), (~-913468321)))));
    var_19 = ((var_10 * ((((max(15108175967491631631, 8795958804480))) ? 23888 : var_4))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_20 = ((max(16739244614655313676, -10963)));
        arr_2 [i_0] = -5409106994624249036;
    }
    #pragma endscop
}
