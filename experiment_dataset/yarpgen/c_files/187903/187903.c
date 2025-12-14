/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_16;
    var_21 = var_17;
    var_22 ^= ((20140 - ((((var_7 || -11623) <= 11629)))));

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        arr_3 [3] [i_0 + 2] = var_10;
        var_23 = (~20140);
        var_24 = ((var_18 ? (((+(((arr_1 [i_0] [i_0]) / var_11))))) : ((0 ? (((min(var_6, var_18)))) : (min((arr_0 [i_0 - 3]), (-32767 - 1)))))));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_9 [i_1] [i_1 - 1] [i_2] = (-127 - 1);
            var_25 = 11622;
        }
        var_26 = -20140;
        arr_10 [i_1] [i_1] = ((((20140 ^ (arr_5 [i_1]))) ^ (((arr_8 [i_1] [i_1 + 1] [1]) & (arr_5 [i_1])))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_27 |= var_1;
        arr_13 [i_3] = (arr_11 [i_3]);
    }
    var_28 += ((((var_4 << (!39397))) & (var_8 + 14)));
    #pragma endscop
}
