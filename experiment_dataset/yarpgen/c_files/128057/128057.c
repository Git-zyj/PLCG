/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (min(var_0, ((((-32767 - 1) == var_2)))));
    var_17 = var_13;
    var_18 = (((~var_5) ? var_13 : var_6));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((arr_0 [i_0] [i_0]) % ((+(((arr_0 [i_0] [i_0]) - (arr_1 [i_0]))))));
        arr_3 [i_0 + 3] = ((((!(arr_1 [i_0 - 1])))) <= ((min(1, -9494))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] = (((((var_8 << (((arr_5 [i_1] [i_1 + 1]) - 30996))))) ? var_12 : (arr_5 [i_1 - 1] [i_1 + 1])));
        var_19 &= ((+(((arr_5 [i_1] [i_1]) | (arr_5 [1] [i_1 - 1])))));
    }
    var_20 = (((min(var_8, (0 < 1)))) ? ((((((max(31, 7585)))) > var_7))) : var_15);
    #pragma endscop
}
