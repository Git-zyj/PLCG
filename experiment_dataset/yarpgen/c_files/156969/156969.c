/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (max((((((751610026 ? 35 : -8863))) ? -829370036 : (max(688472985, 10)))), (min(18446744073709551615, 688472985))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 = ((((9 >> (18446744073709551615 - 18446744073709551613))) != (18446744073709551615 > 3606494312)));
        var_15 = (max(var_15, (((-42998145 > (((1236016396 ? 1 : 205))))))));
    }
    #pragma endscop
}
