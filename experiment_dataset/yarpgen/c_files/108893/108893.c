/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1524477085;
    var_13 = ((var_11 ? (!-20978) : (((!var_5) ? var_11 : (~var_5)))));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_14 = (max(var_14, (((!(((((min(1100880106, (arr_0 [i_0])))) ? (((arr_1 [i_0 + 1]) ? (arr_1 [i_0 - 1]) : 18446744073709551615)) : ((((arr_0 [i_0]) ? 345071323 : -20978)))))))))));
        arr_2 [i_0 - 1] = ((((arr_1 [i_0]) == (((-(arr_0 [i_0])))))));
        var_15 *= 2770490210;
    }
    var_16 = 20960;
    #pragma endscop
}
