/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((((~((var_0 ? var_12 : var_6))))) ? var_18 : 1152886320234758144);
    var_20 = (((min(var_5, ((var_0 ? var_6 : var_7)))) == var_1));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_21 = (((((1 ? -1178274627565932983 : 1))) ? (max((min((arr_1 [i_0 + 1]), 121)), 30996)) : (((arr_0 [i_0 + 1] [i_0 + 2]) ? -122 : var_6))));
        arr_4 [i_0] = 2298778298779885405;
        arr_5 [i_0] |= (((arr_0 [i_0] [i_0 - 1]) ^ ((~(arr_0 [i_0] [i_0])))));
    }
    #pragma endscop
}
