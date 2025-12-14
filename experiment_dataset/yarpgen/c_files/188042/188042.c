/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= 4;
    var_13 &= (var_7 + -0);
    var_14 += var_1;

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_15 = (255 - 192);
        var_16 = ((((((min(var_5, 281474976710655))) ? ((var_0 % (arr_1 [i_0 - 1]))) : ((min(3, var_1))))) & ((-(arr_1 [i_0])))));
        var_17 = ((max(var_1, (max(281474976710655, 36020000925941760)))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_18 = ((var_0 ^ ((~(arr_2 [i_1] [i_1])))));
        var_19 &= (arr_0 [i_1] [i_1 - 1]);
    }
    #pragma endscop
}
