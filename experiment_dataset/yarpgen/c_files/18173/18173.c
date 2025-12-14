/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 ^= (((-(arr_0 [i_0] [i_0]))));
        var_21 = ((-7118548261177494091 ? (min(((24576 ? (arr_0 [i_0] [i_0]) : var_8)), var_4)) : ((var_19 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_22 = (arr_6 [i_1]);
            var_23 = ((var_17 ? (arr_5 [i_1]) : var_15));
            var_24 = -115;
            var_25 += (((arr_5 [i_1]) ? (arr_4 [i_2]) : var_9));
        }
        var_26 = ((-var_7 ? (arr_4 [i_1]) : (((arr_2 [i_1] [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1])))));
    }
    var_27 *= ((var_12 ? ((var_4 ? var_9 : ((max(var_8, var_9))))) : (((((min(var_18, var_14))) || var_9)))));
    var_28 = 87;
    #pragma endscop
}
