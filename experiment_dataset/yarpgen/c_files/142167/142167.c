/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_13 ^= ((~(((0 == (arr_3 [i_1] [i_1] [i_1]))))));
            arr_6 [i_0] = (arr_2 [i_1] [i_1]);
            var_14 &= (((arr_1 [i_1]) ? (((arr_1 [i_1]) ^ (arr_2 [i_1] [i_0 + 1]))) : 24));
            var_15 *= ((721000668 ? -22 : 64536));
            arr_7 [i_0] [i_0] = 0;
        }
        arr_8 [i_0] [i_0] = ((-(arr_2 [i_0 - 1] [8])));
        arr_9 [i_0] = ((!(arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_16 *= (arr_10 [i_2] [14]);
        arr_13 [i_2] = 3573966646;
    }
    var_17 = var_6;
    var_18 = ((~(min((!-6), ((var_10 ? var_3 : var_12))))));
    var_19 = (min(var_19, (((((((max(var_12, var_12))))) ? (max((min(var_2, var_0)), (var_11 <= var_9))) : (var_2 / var_0))))));
    var_20 = -127;
    #pragma endscop
}
