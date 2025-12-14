/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (max(var_18, var_13));
        var_19 = 1876277737683228113;
        var_20 = 1876277737683228112;
        var_21 = -1876277737683228113;
    }
    var_22 = (((min(((var_6 ? 1876277737683228097 : var_9)), ((var_9 ? var_2 : var_5)))) - var_11));
    #pragma endscop
}
