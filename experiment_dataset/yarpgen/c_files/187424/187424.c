/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((+(((((arr_0 [i_0 - 1] [11]) ? 7024438165731632355 : 32767)) - (((min((arr_1 [i_0]), (arr_0 [i_0] [i_0])))))))));
        arr_3 [i_0] = ((2073509734 >> ((((max((arr_0 [i_0 + 1] [i_0 + 1]), var_14))) - 44886))));
        arr_4 [2] [i_0] = (+-118);
    }
    var_16 = 17534;
    var_17 = var_9;
    #pragma endscop
}
