/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= max(var_8, var_1);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = ((+(((arr_1 [i_0]) | -1294147408))));
        var_16 = ((+(((arr_0 [i_0]) / (max(276465536, (arr_1 [i_0])))))));
        arr_2 [i_0] = ((((((var_7 + 6115414272010887388) - 116))) ? (arr_1 [i_0]) : (min((max(6115414272010887406, var_2)), (((12331329801698664228 ? var_8 : (arr_1 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_17 = ((((min(531926492, -97))) ? 2011926984 : 30982));
        arr_6 [i_1] [i_1] = 11376;
        var_18 = 6115414272010887388;
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_9 [i_2] = (min(4890, 54162));
        var_19 ^= (max(-531926492, -184222208876227228));
    }
    #pragma endscop
}
