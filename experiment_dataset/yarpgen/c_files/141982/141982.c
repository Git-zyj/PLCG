/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    var_21 = (max(67108860, (min((max(var_19, var_8)), var_7))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] |= ((~((((((((arr_0 [14]) + 2147483647)) << (var_9 - 55100)))) ^ ((var_16 >> (((arr_1 [i_0]) - 119))))))));
        arr_3 [i_0] [i_0 + 2] = (((67108860 / 4227858435) * (arr_0 [i_0 + 2])));
        var_22 += ((~(((((arr_1 [i_0]) && (arr_1 [12]))) ? (((!(arr_0 [i_0])))) : (!var_4)))));
    }
    #pragma endscop
}
