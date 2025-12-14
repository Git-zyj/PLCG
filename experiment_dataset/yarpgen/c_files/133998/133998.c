/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((-((min(127, var_3)))))) ? var_2 : -127));
    var_14 = ((-(((17 || (-35 / var_3))))));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((((!((((arr_1 [i_0]) & (arr_1 [5])))))) ? (min((arr_1 [i_0]), (((arr_0 [i_0]) ? 64 : var_5)))) : ((~(~var_6)))));
        arr_3 [13] = ((~(arr_0 [i_0 + 2])));
        arr_4 [i_0] = ((((36 / (-127 - 1))) + (arr_1 [i_0 + 1])));
    }
    #pragma endscop
}
