/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_11 = min(0, (max(var_1, ((max(-18754, 34983))))));
        var_12 &= (min((((3827644628818824415 / 64322) ? 5236950627924192280 : var_7)), ((min(((5488 ? 40137 : var_3)), ((max((arr_0 [i_0]), var_8))))))));
    }
    var_13 &= (!(((11098 ? 7499886848503311276 : ((1 ? 2559181147474303462 : 1))))));
    var_14 = max(var_9, 2670980420);
    #pragma endscop
}
