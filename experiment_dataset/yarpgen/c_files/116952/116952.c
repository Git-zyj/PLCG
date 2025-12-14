/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= 72057593769492480;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = (((min((arr_1 [i_0]), 1))));
        var_16 = (arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_17 = (((arr_2 [i_1]) < 840147637169558710));
        var_18 = ((((arr_1 [i_1]) * (arr_4 [i_1]))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_19 = (((((var_11 ? 1 : 9223372036854775807))) ? 13 : -536870912));
        var_20 = 17;
        var_21 -= (14 && 1455072201);
        var_22 = (arr_6 [i_2] [i_2]);
    }
    var_23 = (min(17401598907619648266, var_13));
    var_24 = ((684965179 ? 1980265067277565739 : 8117881416744358962));
    #pragma endscop
}
