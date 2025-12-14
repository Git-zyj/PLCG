/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        var_16 = (max(var_16, (((-((+(((arr_0 [i_0]) << (((arr_0 [i_0]) - 2869937990)))))))))));
        var_17 = (min(((((var_8 ? var_0 : 1358169357)))), (((arr_1 [11] [12]) ? (arr_0 [i_0]) : (arr_1 [2] [0])))));
        arr_4 [8] |= (((5909 & -1544249121) ? ((((arr_2 [i_0] [i_0]) <= (arr_1 [i_0] [i_0])))) : ((14 >> (35 - 28)))));
        var_18 *= (!-9);
    }

    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_19 *= var_13;
        var_20 -= ((((((-((59617 ? (arr_7 [1]) : var_15)))) + 2147483647)) >> (var_3 - 3691252603)));
    }
    var_21 = (min((((~1691082855) & ((var_9 ? var_10 : 37)))), (((~var_13) & (var_5 ^ var_7)))));
    #pragma endscop
}
