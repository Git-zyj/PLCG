/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 ^= (var_4 ? -1 : ((-(29198 * var_9))));
    var_13 = ((((var_0 / (var_7 + 5454500020528449810))) / 1));
    var_14 ^= var_8;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 7;i_0 += 1) /* same iter space */
    {
        var_15 -= (!var_4);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 ^= (arr_2 [i_0 + 3] [i_1]);
            arr_4 [i_0] [i_1] = (var_8 | var_5);
            var_17 -= (var_9 / 12235);
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_18 = 2523534721;
            arr_8 [i_0] [i_0] [i_2] = var_4;
        }
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            var_19 ^= ((var_1 - (arr_1 [i_0 + 3] [i_3 - 1])));
            arr_11 [i_3] = var_4;
            arr_12 [i_3] [i_0] [1] = (((arr_6 [i_0 + 2]) ? var_2 : (arr_6 [i_0 - 1])));
        }
        var_20 = (max(var_20, (((-((var_4 ? (arr_10 [3] [i_0] [i_0]) : var_3)))))));
        arr_13 [i_0] [i_0] = (!1);
    }
    for (int i_4 = 1; i_4 < 7;i_4 += 1) /* same iter space */
    {
        var_21 -= (((((((min(1, (arr_14 [i_4])))) != (arr_0 [i_4 + 3])))) * (511 > var_0)));
        var_22 *= ((max((min(5454500020528449810, 8530254402933753228)), (arr_7 [i_4 + 3]))));
    }
    #pragma endscop
}
