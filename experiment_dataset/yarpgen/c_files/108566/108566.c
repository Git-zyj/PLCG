/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = ((((((arr_2 [i_0]) ? (arr_2 [i_0]) : 21))) ? (!239668022) : (arr_1 [i_0] [i_0])));
        var_14 |= (((((((var_12 ? var_4 : -2145871215)) * (arr_0 [i_0])))) ? (arr_1 [i_0] [i_0]) : (((!(arr_2 [i_0]))))));
        arr_3 [i_0] = -var_11;
        var_15 += (((((var_3 ? var_11 : (arr_2 [i_0])))) ? (((~var_8) / (max(-32760, 399933948)))) : (!var_6)));
    }
    var_16 = (var_7 >= 1725638746);
    #pragma endscop
}
