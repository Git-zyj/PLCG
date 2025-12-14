/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(!var_3)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (min(8259929011490947545, (arr_2 [i_0] [i_0])));
        arr_3 [i_0] = ((((max(62, 65508))) >> ((((arr_1 [i_0] [i_0]) && (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_14 = (arr_4 [i_1]);
        var_15 = (min(-0, (max((min((arr_0 [i_1] [i_1]), 65535)), 65535))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_16 = ((+(min((arr_1 [i_2] [i_2]), (max(var_2, -2039848844))))));
        var_17 = (min(var_17, ((((((arr_4 [i_2]) ^ (arr_4 [i_2]))) > (((arr_2 [14] [14]) ? (~var_8) : (14010 && 147))))))));
    }
    #pragma endscop
}
