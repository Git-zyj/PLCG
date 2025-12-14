/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 0;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((((0 ? (arr_0 [i_0]) : (arr_1 [i_0]))) * ((0 * (arr_0 [i_0])))));
        arr_3 [10] = (min(2204503183771048214, ((((-9223372036854775797 & 2204503183771048214) ? 1 : 1)))));
        var_11 = (!(+-255));
    }
    #pragma endscop
}
