/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((!63578) ? (((((min(255, var_7))) && (((150 ? 3759264302391200684 : 0)))))) : (min(((549755813887 ? var_3 : var_3)), (var_9 || 2235518217)))));
    var_14 = ((-var_7 == ((min(-37, (var_5 || var_10))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((2032862124 >> (3184860466 - 3184860438)));
        var_15 = ((18293786898236195838 <= 2097151) > (36706 - 244));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_16 = ((~(arr_3 [i_1 + 1])));
        var_17 = ((-1 ? 1140844609 : ((1 ? 5799 : -14))));
    }
    #pragma endscop
}
