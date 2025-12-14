/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_13 ^= max((((-((994771917045294480 ? var_11 : (arr_1 [i_0 + 2])))))), (((arr_0 [i_0 + 1] [i_0 - 1]) ? var_7 : 4653124964844031956)));
        var_14 = ((-4653698554351692259 ? -28766 : -37550580158884232));
    }
    var_15 &= (var_5 ^ var_11);
    #pragma endscop
}
