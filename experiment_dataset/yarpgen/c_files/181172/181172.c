/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 14133164444477143192;

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0 - 3] = (arr_1 [i_0] [i_0]);
        arr_3 [i_0] = (((195 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0 - 4] [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1 + 1] = ((926646500 ? -2268 : ((18490 ? -6974 : 1))));
        arr_7 [7] = (28781 ? 74 : -21496);
    }
    #pragma endscop
}
