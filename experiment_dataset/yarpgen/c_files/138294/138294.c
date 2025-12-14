/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_12 -= (((min(var_10, (~2200861072883812845)))) ? var_0 : (min(2200861072883812845, (min((arr_1 [i_0]), 2200861072883812858)))));
        var_13 = ((~(((max(18446744073709551615, var_7)) % var_4))));
        var_14 = (max(var_14, 31605));

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_15 = var_3;
            arr_5 [i_0] [8] [6] = ((((((-196790392 ? 7147088390042404246 : 0)))) ? (((arr_0 [i_0]) ? (max(18446744073709551615, var_0)) : (!2200861072883812842))) : ((((var_5 | var_1) ? (arr_1 [i_0 + 1]) : (arr_1 [i_1]))))));
            var_16 = (((((var_4 ^ -2200861072883812839) ? (arr_3 [i_0 + 1] [10] [i_1 - 1]) : (arr_2 [3] [i_1] [4]))) >= var_2));
            arr_6 [i_1] [i_1] |= var_9;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_17 = (min(var_17, (((-10907 ? ((~((max(2, var_3))))) : -100)))));
            var_18 -= ((0 >> (100 - 78)));
            arr_9 [i_2] = ((min(var_3, (arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
        }
    }
    var_19 = var_10;
    #pragma endscop
}
