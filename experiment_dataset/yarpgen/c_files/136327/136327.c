/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((-((((18446744073709551595 ? var_19 : var_4)) >> ((min(var_18, 1)))))));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_2 [2] &= ((((!(arr_0 [i_0 - 1] [6])))));
        arr_3 [i_0] [i_0] = 26;
    }
    var_21 = ((var_18 == (~var_6)));
    #pragma endscop
}
