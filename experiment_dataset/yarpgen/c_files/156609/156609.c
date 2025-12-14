/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 -= var_3;
        var_20 = (min(var_20, 32753));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 = (((var_0 && 0) ? (!var_18) : (-1648093468 | 2522762393)));
        var_22 = (((arr_0 [i_1] [i_1]) % 9430176246343578961));
    }
    var_23 = 32753;
    var_24 -= ((((((max(-32759, var_15))) ? var_13 : ((32753 ? 18446744073709551593 : 6144)))) & (((~(max(45958, 3112422036)))))));
    #pragma endscop
}
