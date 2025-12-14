/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = 2147483637;
        var_19 &= ((~(arr_1 [i_0] [i_0])));
        arr_2 [i_0] &= -var_3;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_20 = (max(var_20, var_3));
        var_21 *= ((var_0 && (((859417436170109560 ? (arr_4 [i_1]) : (min(var_12, var_1)))))));
        var_22 = ((var_6 ? (arr_0 [i_1] [i_1]) : 644248740));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            var_23 = (((arr_8 [i_3]) ^ (arr_5 [i_3 - 2] [i_3])));
            var_24 ^= ((var_7 > (arr_5 [6] [i_3])));
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 17;i_4 += 1)
        {
            arr_13 [6] [i_2] = ((var_14 ? (arr_7 [i_4 - 2] [i_4]) : var_2));
            arr_14 [i_4] [i_2] = (~(((arr_8 [i_4 + 1]) << (((((arr_9 [0]) + 50)) - 14)))));
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_25 *= (min(var_16, ((((arr_16 [i_5] [i_2]) ^ (arr_16 [i_5] [i_2]))))));
            arr_17 [i_2] = (arr_1 [i_5] [i_2]);
            var_26 += ((var_1 ? (~var_6) : (var_17 % 479500740)));
        }
        arr_18 [i_2] = ((min(var_11, ((max(var_9, 0))))));
        arr_19 [i_2] [i_2] = (((max((arr_5 [i_2] [i_2]), (arr_5 [i_2] [i_2]))) ? (min(111, 17587326637539442055)) : (((var_9 ? var_14 : var_2)))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        arr_23 [i_6] = ((-(arr_21 [i_6] [i_6])));
        arr_24 [i_6] [i_6] = ((var_6 ^ (arr_21 [i_6] [i_6])));
        arr_25 [i_6] [i_6] = var_9;
    }
    var_27 *= (((((var_16 - (!var_12)))) ? (min(var_16, ((var_10 ? var_5 : 1597703794)))) : (((5135633949789571829 == var_10) ? var_5 : (((var_9 ? var_9 : var_17)))))));
    #pragma endscop
}
