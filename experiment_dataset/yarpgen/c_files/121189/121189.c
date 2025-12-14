/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = (((!((min(-19645867, 12333))))));
        var_20 = (max((((arr_0 [i_0]) ? 1145372662 : 4294967295)), (~-1)));
        arr_4 [i_0] [i_0] = 610226622;
        arr_5 [7] [i_0] |= ((min((((610226622 ? -1 : 127))), (arr_3 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_21 = 5643;
        arr_8 [i_1] |= ((((610226622 ? (arr_6 [i_1]) : (max(203176349701807624, 59892)))) >= 3475690089));
    }
    var_22 &= (min(var_1, ((((max(-1566192021, 1093818204))) ? (var_16 && var_0) : var_2))));
    var_23 &= (min((max(((var_18 ? 5916 : var_14)), (min(1, var_16)))), (~1593619295)));
    #pragma endscop
}
