/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(((min((arr_0 [i_0]), (arr_0 [i_0])))), (((arr_0 [i_0]) ? 10 : 39))));
        var_18 = (min(var_18, ((max((((6 ? 73 : -40))), (min((arr_0 [8]), (min(var_3, 169)))))))));
        var_19 = (max(var_19, ((min(((-45 ? 16 : -3)), 95)))));
        arr_3 [i_0] [i_0] = ((((min(((max(var_15, (arr_1 [i_0])))), 6054909981041837089))) ? (((((arr_0 [i_0]) ? 9 : 0)))) : 1));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_20 = ((~(arr_5 [i_1] [i_1])));
        arr_6 [i_1] |= ((3686317751 ? 1 : -120));
        var_21 = (arr_5 [i_1] [i_1]);
        arr_7 [i_1] [14] = ((((223 ? 1 : var_7)) * (arr_5 [i_1] [i_1])));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_22 = ((((max(153, (arr_4 [i_2] [i_2])))) ? (((max(64, (min(117, 10)))))) : 3465824084441524784));
        var_23 = (max(var_23, ((min(((((((arr_8 [14]) ? var_16 : var_3))) ? var_8 : (var_2 - var_17))), ((((((arr_4 [i_2] [i_2]) ? var_4 : (arr_4 [i_2] [i_2])))) ? 85 : (arr_8 [i_2]))))))));
    }
    var_24 ^= (((var_2 ? 85 : -40)));
    var_25 = (!var_3);
    #pragma endscop
}
