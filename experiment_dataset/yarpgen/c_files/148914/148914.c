/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_18 % var_12);

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((((((arr_1 [1]) & 24722)) <= (max(var_4, 1)))))) < (min((arr_0 [i_0] [i_0]), var_1))));
        var_20 = ((((((arr_0 [i_0] [i_0]) >> (((arr_0 [i_0 - 1] [i_0 - 1]) - 1371493382))))) ? (~var_15) : -28798));
        var_21 = ((((min(4294967295, (arr_0 [i_0 - 3] [11])))) ? ((((!(arr_0 [i_0 - 3] [i_0 - 3]))))) : ((((((28800 < (arr_1 [i_0]))))) & ((var_9 % (arr_1 [i_0])))))));
    }
    var_22 = -28798;
    var_23 = var_5;
    var_24 |= ((((var_14 < (max(var_8, var_11))))) & (((3 < (min(var_5, -1))))));
    #pragma endscop
}
