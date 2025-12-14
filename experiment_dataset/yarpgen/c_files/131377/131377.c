/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((min(((4095 >> (var_11 - 3535267537))), -4095))) ? (~var_7) : var_4);
    var_13 = (((((var_7 ? var_10 : 3481725917))) * ((min((min(4096, -47)), var_1)))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_14 = ((((((!(((1117460934 ? 1 : 3481725917))))))) <= ((16553 ? 9053015686833847929 : 48))));
        var_15 = var_3;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_16 = min((max(var_0, ((var_0 ? (arr_2 [i_1]) : 2147483645)))), ((max((-2147483645 + 1), -1))));
        var_17 = (((3783834429 ? 0 : 2189767161)));
    }
    var_18 = 1;
    #pragma endscop
}
