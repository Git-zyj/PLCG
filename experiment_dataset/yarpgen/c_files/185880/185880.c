/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = ((((((~3129510391951325843) ? 0 : (arr_1 [i_0])))) * var_15));
        var_19 -= (arr_1 [i_0]);
        var_20 = ((~(min(var_7, 77))));
    }
    var_21 = (min(var_9, (max(var_17, 6599949296193814544))));
    #pragma endscop
}
