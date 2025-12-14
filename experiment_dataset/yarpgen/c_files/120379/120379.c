/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (var_10 / var_16);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 ^= 1;
        arr_2 [i_0] = ((+(((arr_0 [i_0] [i_0]) & ((4221199908 ? 1 : var_10))))));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        arr_5 [i_1] = (min((max(((var_9 ? var_4 : var_9)), ((max((arr_4 [i_1]), (arr_1 [i_1] [i_1])))))), var_10));
        var_20 = (~1);
        var_21 = (((min((arr_0 [i_1 - 1] [i_1 - 2]), (arr_0 [i_1 - 2] [i_1 + 2]))) ? (!var_9) : ((var_6 ? (arr_0 [i_1 + 2] [i_1 - 3]) : (arr_0 [i_1 + 2] [i_1 - 3])))));
        var_22 = (max((((((var_6 ? var_2 : 1075))) ? (arr_3 [i_1]) : (((1 != (arr_4 [i_1])))))), var_0));
    }
    var_23 ^= var_14;
    var_24 = (max(var_24, ((max((min(1, 73767394)), var_6)))));
    var_25 = (min((min(var_2, 1088)), ((((-1075 + 2147483647) >> (1077 - 1052))))));
    #pragma endscop
}
