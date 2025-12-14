/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_16 += ((104 ? (((17948414584161005604 ? 498329489548546011 : 17948414584161005604))) : 58355));
        var_17 ^= (arr_0 [i_0] [i_0]);
    }
    var_18 = var_9;
    var_19 = (max(var_5, ((var_3 ? (~3) : 124))));
    var_20 = var_4;
    #pragma endscop
}
