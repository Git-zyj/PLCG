/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_18 << (((~53770) + 53771))));
    var_21 = var_4;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_22 = (max(var_22, (((-32 ? -32 : 0)))));
        arr_2 [i_0] [i_0] = (max(32, (max(var_2, (arr_0 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] [i_0] = ((466316052 < (((!(arr_0 [i_0 + 1] [i_0 + 1]))))));
    }
    var_23 = var_1;
    var_24 = -var_16;
    #pragma endscop
}
