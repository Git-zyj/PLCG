/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 ^= ((!(((-2771483969449097842 & 43) >= 1))));
        arr_4 [i_0] [i_0] = ((((-1789629785 + (arr_2 [i_0]))) & (((-1100743456 - (arr_3 [i_0]))))));
        arr_5 [i_0] = ((((min((~3334717936), 8784))) <= (570983216606997152 & -1100743456)));
    }
    var_19 &= ((min((min(8094857925435462479, var_3), (var_4 + var_9)))));
    var_20 = var_10;
    var_21 = var_2;
    var_22 = (~var_14);
    #pragma endscop
}
