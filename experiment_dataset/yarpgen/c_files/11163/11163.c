/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (((29093 || 255) ? var_3 : 29112));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (((1640129925154354424 ? -4070649046188886880 : -7678)) <= (((((arr_1 [0] [i_0]) == (arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] [i_0] = ((((((arr_0 [i_0] [i_0]) ? (-9223372036854775807 - 1) : (arr_0 [i_0] [i_0])))) ? ((((arr_0 [i_0] [i_0]) ^ (arr_0 [i_0] [i_0])))) : (arr_1 [i_0] [i_0])));
    }
    #pragma endscop
}
