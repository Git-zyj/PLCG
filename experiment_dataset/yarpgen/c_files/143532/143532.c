/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((~(min(162836558, 123)))), (((~(var_6 | 1))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 = (max(var_20, (((((-(arr_2 [10] [i_0])))) ? (arr_2 [10] [i_0]) : ((1 << (((arr_2 [16] [4]) - 879974378))))))));
        var_21 = (((arr_2 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        var_22 = (min(var_22, (arr_1 [i_0])));
        var_23 = (arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_5 [3] &= (((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1])));
        var_24 = (arr_4 [7]);
        var_25 = -124;
        arr_6 [i_1] = (~var_7);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_26 |= 1062;
        var_27 = 480;
        var_28 -= (~((var_10 ? 1366394140 : (arr_8 [i_2] [i_2]))));
    }
    var_29 = (((((((max(var_17, var_10))) ? var_1 : ((min(var_14, var_17)))))) ? (((((max(-620433046518282457, 18953))) ? var_17 : var_5))) : 2928573156));
    var_30 -= (min(((min(35811, var_15))), ((~(0 << var_3)))));
    var_31 = (((((1907619614 ? 32767 : 3995687291))) ? ((((!((max(1366394140, 55242))))))) : ((1 ? 65535 : 2928573155))));
    #pragma endscop
}
