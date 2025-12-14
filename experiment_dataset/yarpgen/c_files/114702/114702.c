/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((var_2 ? (((~(!var_15)))) : ((8816480990323947634 ? -var_2 : var_6)))))));
    var_18 = (((((-451530532 > var_14) | (!var_9))) >> ((((-(82705702 * var_12))) - 2433092695))));
    var_19 = ((((((var_14 != var_11) ? var_5 : (var_16 / 82705702)))) ? var_8 : ((var_7 ? (!1000156049357426628) : 1))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = (min(var_20, (~var_13)));
        arr_2 [i_0] = ((23237 ? 8276 : -27426));
        var_21 ^= ((-((var_13 ? var_7 : var_10))));
    }
    var_22 = var_13;
    #pragma endscop
}
