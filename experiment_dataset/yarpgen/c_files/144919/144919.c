/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!(var_4 >> var_10)));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_13 -= ((!(44 ^ 1)));
        var_14 &= (((((!((min(33554431, 192)))))) | 29991));
        arr_3 [i_0] = ((~(((-6415 <= 1152921367167893504) | ((min(1, (arr_1 [i_0 - 3] [1]))))))));
        var_15 = ((((-1152921367167893529 <= (min(var_5, (arr_1 [3] [i_0])))))));
    }
    var_16 = var_1;
    #pragma endscop
}
