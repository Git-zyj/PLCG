/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((!(((var_7 ? 410566035058300285 : var_14)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = var_12;
        var_18 = max(((-(((arr_0 [i_0]) ? (arr_0 [i_0]) : 11604600306701157708)))), (((((-(arr_0 [17])))) ? 1 : (min((arr_1 [i_0] [i_0]), var_0)))));
        arr_3 [1] = ((~var_3) ? (((arr_1 [i_0] [i_0]) << (((arr_1 [i_0] [i_0]) - 10863527113936463420)))) : (min((~6842143767008393917), ((min((arr_0 [i_0]), var_5))))));
        var_19 = (max(var_19, ((((!(arr_0 [i_0]))) ? ((-3451791288506794965 * (arr_0 [i_0]))) : 11604600306701157708))));
        var_20 += ((((arr_0 [i_0]) ? 3451791288506794946 : var_7)) & (((arr_0 [i_0]) * var_15)));
    }
    var_21 = (min(var_21, (((~3451791288506794955) - (max((10408021044351393281 - 6842143767008393900), (((3451791288506794955 ? 1 : var_1)))))))));
    #pragma endscop
}
