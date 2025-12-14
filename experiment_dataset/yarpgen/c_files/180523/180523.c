/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((-(min(7, 3138766429171936804)))) ^ var_6);
    var_12 = var_4;
    var_13 = (((((-23396 ? 4294967287 : var_5))) ? ((((var_10 ? 11351 : var_10)))) : (min((((var_8 + 2147483647) << (16955648272217339399 - 16955648272217339399))), var_1))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = (3045043133169784904 ? (((16170549790424003590 == -1) ? -8442103511940167591 : (min(5530768304485410971, 6972862592383222065)))) : (((min(var_10, (arr_1 [i_0] [i_0]))))));
        var_15 = (min((((arr_1 [i_0] [i_0]) | var_8)), (var_1 < 0)));
    }
    #pragma endscop
}
