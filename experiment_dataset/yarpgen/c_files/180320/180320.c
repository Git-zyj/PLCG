/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((min(18, 251))))) ? (max(var_10, ((var_7 ? var_2 : 4013410018761757515)))) : var_14));
    var_16 = (((max((!var_0), (8796076244992 & 36728)))) ? (min(((min(var_12, 1708552498504510540))), var_0)) : (((~((max(1, 1)))))));
    var_17 |= (((min(var_9, var_2)) == 8192));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = var_3;
        arr_5 [i_0] [i_0] = ((~(max(1, ((min(120, var_4)))))));
    }
    #pragma endscop
}
