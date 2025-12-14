/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_11 = ((max(var_6, (((26 ? 1 : 255))))));
        var_12 = -var_10;
    }
    for (int i_1 = 4; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_13 = -0;
        var_14 = 4080571982;
        var_15 = ((((((max(var_5, var_9)) <= ((1 ? var_5 : var_1))))) != ((~(!var_10)))));
    }
    var_16 = var_9;
    var_17 = 14;
    var_18 = var_8;
    #pragma endscop
}
