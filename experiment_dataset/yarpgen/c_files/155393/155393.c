/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (7 < 16741201066659274695);

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_14 += ((((var_11 / (arr_0 [i_0 - 1]))) < (((-1 ? (max(1048575, 127)) : 1)))));
        var_15 += (max((arr_2 [i_0 - 2] [i_0 - 1]), 0));
    }
    #pragma endscop
}
