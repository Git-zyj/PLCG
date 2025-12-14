/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    var_16 = (!65535);
    var_17 |= ((min(((156 ? 4636244544142646692 : 13725613660986740903)), var_2)) >= var_6);

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_18 = ((((min((((arr_1 [i_0]) % var_14)), ((((arr_0 [10] [10]) && (arr_0 [i_0 - 1] [i_0]))))))) ? (arr_1 [i_0]) : ((((arr_2 [i_0 + 1]) >= (arr_1 [i_0 - 1]))))));
        arr_4 [i_0] [8] &= ((((min(1, var_5)))));
        arr_5 [i_0] = 1743416234;
        var_19 = (min(var_19, (((~((min(var_1, (arr_1 [i_0 - 1])))))))));
    }
    for (int i_1 = 4; i_1 < 20;i_1 += 1)
    {
        var_20 = ((~((min((arr_6 [i_1 + 1] [i_1 + 1]), (arr_6 [i_1 + 1] [i_1 + 1]))))));
        arr_8 [i_1] [13] |= var_7;
    }
    #pragma endscop
}
