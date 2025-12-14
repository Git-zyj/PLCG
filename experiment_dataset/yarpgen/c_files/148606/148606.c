/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = (((arr_1 [i_0]) != var_9));
        var_16 = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        var_17 = 1613346900533062796;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_18 = 3940239155;
        var_19 = 247;
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        var_20 = (min(var_20, ((min(((1613346900533062806 ? (arr_8 [i_2]) : -12082)), (((10245 == (((arr_9 [i_2] [i_2 + 1]) ? (arr_7 [i_2]) : -872922662))))))))));
        var_21 = ((((((arr_7 [i_2 - 1]) + 2147483647)) << (((((arr_6 [i_2 + 1]) + 29067)) - 8)))));
        var_22 = (min(393, 251));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_23 = (((arr_9 [i_3] [i_3]) != (arr_10 [i_3] [i_3])));
        var_24 = ((1337600223 ? 724849791 : 232));
    }
    var_25 = (max(2967477908485319556, 2717434685));
    var_26 = 3897259504;
    #pragma endscop
}
