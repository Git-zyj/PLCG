/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_17 = (max(var_17, (((~(arr_2 [i_0 + 3] [i_0 + 2]))))));
        var_18 = (min(var_18, (((~(827864813681645445 | 9223372036854775792))))));
        var_19 -= ((((arr_2 [i_0 + 3] [i_0]) >> (((-9223372036854775795 - -9223372036854775791) + 32)))));
        arr_3 [i_0 - 2] [i_0 - 2] = (var_3 & 2147483640);
        arr_4 [i_0] = ((((((arr_2 [3] [i_0 + 3]) >> (((arr_0 [i_0]) - 201))))) || (1 < var_10)));
    }
    #pragma endscop
}
