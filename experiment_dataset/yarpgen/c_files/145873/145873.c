/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((!(1 > var_1)));
    var_21 *= var_17;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 = ((var_4 & (~var_9)));
        var_23 *= var_14;
        arr_3 [i_0] = ((var_11 << ((((((!(arr_0 [i_0])))) != ((40537 ? var_2 : 1)))))));
    }
    #pragma endscop
}
