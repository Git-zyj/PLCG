/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_16;
    var_20 = (((((var_15 ? (var_16 && 188) : (max(var_18, var_9))))) ? ((var_13 ? var_2 : (((var_6 ? var_15 : var_12))))) : (((((1705995820 ? var_2 : var_16))) ? var_6 : ((var_10 ? 2588971476 : 63))))));
    var_21 = (min((((((63 ? var_13 : var_1))) ? (var_10 + var_9) : ((var_15 ? 2588971476 : 49)))), (((var_10 > ((2588971467 ? var_2 : 18001834064164409497)))))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_22 = (min(1, -2102));
        arr_2 [i_0] = ((((((arr_1 [i_0]) ? var_18 : ((-29890 ? 1705995819 : 0))))) ? ((min(1705995819, ((1 ? var_16 : var_18))))) : (min(var_7, (min(0, var_18))))));
        var_23 = var_18;
        arr_3 [i_0] = ((((2588971476 ? -2102 : var_5)) == (max((1 > -64), var_9))));
        var_24 |= ((8 ? var_3 : ((var_16 ? 444910009545142119 : (17728629968233668867 * 38)))));
    }
    var_25 *= var_14;
    #pragma endscop
}
