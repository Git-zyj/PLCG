/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_7);
    var_21 ^= (max(((((var_12 | var_18) || ((min(-70, 71)))))), ((min(var_10, var_7)))));
    var_22 = (max(var_22, ((min((((((var_6 ? var_5 : var_15)) == var_4))), var_13)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (max(((~(arr_1 [i_0] [i_0]))), (arr_2 [i_0])));
        var_23 ^= ((~((var_2 | (arr_1 [10] [i_0])))));
        var_24 -= ((~var_4) != ((((min((arr_1 [0] [0]), var_18))) ? ((((arr_0 [i_0]) != 4294967284))) : (~var_15))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] [11] = 1;
        var_25 -= ((-((-(arr_5 [i_1])))));
    }
    #pragma endscop
}
