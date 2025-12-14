/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = ((((max((min(1, 3325305490728319905)), ((min(1, 243)))))) ? ((1 ? 1 : (min(237, 18446744073709551599)))) : ((((((47360 ? -4288010472582925642 : 1338820398963777181))) ? 47356 : ((18180 ? 47360 : 1)))))));
        var_18 += 0;
        arr_2 [i_0] [i_0] = ((189 ? 2016074717 : 47356));
        var_19 |= ((((max((max(-230183343, 39289)), 1))) ? 219 : 18158));
        var_20 = (max(var_20, ((max(((165 ? ((max(1, 210))) : ((18446744073709551599 ? -123 : 129)))), ((-1357929286 ? 47374 : 1807692946)))))));
    }
    var_21 = max((((((16 ? 3 : 9581))) ? (min(-230183343, 23485)) : 65535)), (((((0 ? 32764 : -1873463529))) ? ((max(-32755, 0))) : ((min(13848, 47355))))));
    #pragma endscop
}
