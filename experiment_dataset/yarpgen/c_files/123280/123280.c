/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    var_16 = var_2;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = (max(var_17, (305629797 && -750420096)));
        var_18 += (((((max(var_1, 305629797)))) - (((-4658198737566919630 ? -4700318902026197658 : 24289)))));
        var_19 = (max(-305629797, (arr_1 [i_0])));
    }
    var_20 = 1;
    #pragma endscop
}
