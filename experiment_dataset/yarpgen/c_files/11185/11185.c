/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (max(-1, ((min(6, 19)))));
    var_11 |= var_9;
    var_12 = (max((min(-20, (max(9402, 5073990332623952765)))), 23928));
    var_13 = (max(((32 ? 5 : ((3 ? -83 : 19)))), 2302802100757541103));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_14 = (max(var_14, 65529));
        var_15 += 29;
        var_16 = (max(var_16, 106));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_17 += min(-104, (max(1, 16143941972952010512)));
        var_18 = 2302802100757541118;
        var_19 = (max((min(7342175795483015421, (max(10054294336105708925, -19)))), ((min(661246815, ((max(18, -3))))))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_20 = (max((max(192, 18303217259260077269)), (!19)));
        var_21 ^= max((-127 - 1), 204);
    }
    #pragma endscop
}
