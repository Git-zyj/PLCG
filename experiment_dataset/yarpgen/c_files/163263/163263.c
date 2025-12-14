/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = (!(((0 ? var_9 : 0))));
        arr_3 [i_0] = (((arr_2 [i_0]) ? -var_3 : (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] = 3058608773;
        var_17 ^= ((~(min(var_5, ((-381238967 ? var_0 : (arr_5 [11])))))));
        arr_7 [i_1] [i_1] = ((!(((((((arr_5 [19]) ? 0 : (arr_5 [14])))) ? ((((23 > (arr_5 [i_1]))))) : (arr_5 [i_1]))))));
    }
    var_18 -= (((((-5 ? (!12696142276231879) : (var_14 ^ var_9)))) && (var_10 + 0)));
    #pragma endscop
}
