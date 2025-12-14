/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!68719476735);
    var_12 = (min(var_0, (min(var_10, (126 <= 126)))));
    var_13 -= ((17061678329444465098 >> (((~var_8) + 31))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_14 = (((arr_0 [i_0 - 1] [i_0 - 1]) - (arr_2 [i_0 - 1])));
        arr_3 [4] &= 126;
    }
    #pragma endscop
}
