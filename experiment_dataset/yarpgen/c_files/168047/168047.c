/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_1 * var_14);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_19 = ((((arr_0 [i_0] [i_0]) % (arr_1 [17]))) & (~15687));
        arr_4 [7] [i_0] = (((arr_3 [i_0] [i_0 + 3]) ? (!11958) : (((arr_3 [i_0] [i_0]) ? var_7 : -28108))));
        var_20 |= ((-(((arr_3 [17] [i_0]) ? (arr_3 [11] [11]) : (arr_2 [i_0])))));
    }
    var_21 = (((((var_13 ? var_10 : var_14)) * (((26104 ? 8221 : 11958))))));
    #pragma endscop
}
