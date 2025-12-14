/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = (arr_2 [i_0]);
        var_16 = (248522713 / 7795792673041529885);
        var_17 ^= ((((~var_1) + 9223372036854775807)) << ((((var_12 ? 3857933483 : (arr_2 [i_0]))) - 3857933483)));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_18 = (max(var_18, ((((max(((var_3 - (arr_2 [i_1]))), ((var_11 ? 1 : var_14)))) >> (((1 != var_9) & (1 * 287122329))))))));
        var_19 += 0;
        var_20 = (arr_3 [i_1]);
        arr_8 [1] [9] = ((((((((max((arr_0 [18] [18]), (arr_5 [i_1])))) || ((max(240079774, 1))))))) % var_2));
    }
    var_21 += (-9223372036854775807 - 1);
    var_22 = 1138364661;
    var_23 = (max(var_14, var_5));
    var_24 += var_13;
    #pragma endscop
}
