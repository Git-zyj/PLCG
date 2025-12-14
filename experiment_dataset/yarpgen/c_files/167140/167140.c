/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = max(((var_4 ^ (arr_1 [i_0]))), (((!((max((arr_0 [i_0]), -8)))))));
        var_15 = (max((((+(((arr_1 [i_0]) >> (58 - 49)))))), 4081126083));
        arr_3 [i_0] = ((~((((((arr_1 [i_0]) ? 5551109848713844034 : 15251))) + var_4))));
        var_16 *= ((!((min((arr_1 [i_0]), 5688)))));
    }
    var_17 = (min(var_17, (((!(((18446744073709551601 ^ 4589945339590809194) || var_10)))))));
    #pragma endscop
}
