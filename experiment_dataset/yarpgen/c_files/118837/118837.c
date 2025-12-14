/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 576460752301326336;
    var_14 = var_6;
    var_15 = (1781805390 >= -0);
    var_16 = -var_4;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = (((3523328384 ^ 1) > 1357498064));
        arr_2 [i_0] = (((((10 * (0 & 65535)))) || ((((1 || 29065) % 2)))));
        var_18 = (((65519 + 24) / 1378064435875509410));
    }
    #pragma endscop
}
