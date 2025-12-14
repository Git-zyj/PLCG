/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (~var_0);
        var_17 = (max(var_17, ((((((4294967287 ? var_3 : 3865011463))) ? (~var_13) : (~62287))))));
        arr_3 [i_0] = ((((((max(0, 3250))) ? ((62285 ? 255 : var_2)) : (1 | var_0))) <= var_3));
        var_18 = (min(var_18, var_10));
        var_19 = (((((((((0 ? 0 : 3252))) ? -var_16 : 1)) + 2147483647)) >> (((!(((429955819 ? 10 : 192))))))));
    }
    var_20 = ((((max(var_12, var_4))) ? (~4208804071340130125) : ((-78 ? -4218922204177557786 : 1))));
    var_21 = (min(var_21, var_10));
    var_22 = min(170, (((!21281) ? var_14 : 0)));
    var_23 ^= (3865011434 / var_11);
    #pragma endscop
}
