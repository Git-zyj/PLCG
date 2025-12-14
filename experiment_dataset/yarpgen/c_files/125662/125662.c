/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_6));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (~(((arr_1 [i_0]) ? (arr_1 [i_0]) : var_12)));
        arr_3 [i_0] [i_0] = (min(((min((arr_0 [i_0]), var_6))), 14));
    }
    var_15 = (~var_2);
    var_16 = ((var_2 ? ((((!(~var_1))))) : (min((~var_4), ((var_1 << (1984 - 1925)))))));
    #pragma endscop
}
