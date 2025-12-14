/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_15 = (min(var_15, ((var_12 ? var_6 : (((min((-127 - 1), 1))))))));
        var_16 *= (!9111899408521009552);
        var_17 ^= (((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))) * (((arr_0 [i_0 - 1]) ^ (arr_0 [i_0 - 1])))));
        var_18 = ((((((((min((arr_1 [i_0 - 1] [i_0 - 1]), var_14))) || var_8)))) > ((1791767689 ? -5572983381808662046 : ((((arr_2 [i_0 - 1] [i_0]) ? var_7 : var_11)))))));
    }
    var_19 = var_8;
    #pragma endscop
}
