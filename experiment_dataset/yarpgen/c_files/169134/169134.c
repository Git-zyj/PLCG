/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_3;

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_11 = var_7;
        var_12 = var_7;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1 - 1] &= ((~(((!(~var_2))))));
        arr_6 [i_1] = ((~(min((arr_4 [i_1]), var_3))));
    }
    var_13 = var_2;
    #pragma endscop
}
