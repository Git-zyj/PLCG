/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_15 = ((-52 ? 503105524 : -503105524));
        arr_3 [i_0] [i_0] = (max(2816641762, 1236681647));
        var_16 = ((((-503105506 ? -800737904194101611 : var_5))) ? (((min((arr_1 [22]), var_5)) ^ (~var_1))) : (((((~(arr_0 [i_0])))) ? var_0 : (~749858285))));
    }
    for (int i_1 = 1; i_1 < 6;i_1 += 1)
    {
        arr_8 [i_1] |= var_6;
        var_17 *= (min(((((800737904194101610 ? -7192964986234475491 : 4089820095800946547)) / 3258930785313093581)), (arr_0 [i_1])));
        var_18 = ((max(503105514, (arr_5 [i_1 + 2]))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_19 = (-(((arr_1 [i_2]) ? var_9 : 3280153093458075685)));
        arr_11 [i_2] [13] = (max(51480, 2462933522));
    }
    for (int i_3 = 2; i_3 < 10;i_3 += 1)
    {
        var_20 = -537161188;
        var_21 = ((((((arr_10 [i_3 - 1]) ^ ((var_8 ? var_8 : var_3))))) ? (((7 ? 2020275366 : 20979))) : (max(1872525420, -34))));
        var_22 = (((min((arr_0 [i_3]), ((var_6 ? (arr_12 [i_3]) : var_8)))) ^ (((-7192964986234475479 ? -2020275379 : 44952)))));
    }
    var_23 = ((-(((((var_7 ? var_0 : var_3))) ? ((var_12 ? var_11 : 177)) : var_5))));
    #pragma endscop
}
