/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_16 &= (((6007 >= 4798842413905564440) * (arr_2 [i_0 + 2] [i_0 + 3])));
        var_17 = -26;
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        arr_6 [0] &= (((var_2 ^ -5856962846871274444) ? (((var_10 > var_14) / ((var_10 ? (arr_4 [2]) : (arr_5 [i_1]))))) : (((((((arr_5 [i_1]) * var_7)) >= (var_1 == -5162797936697837034)))))));
        var_18 = ((((var_4 >> (((((-5856962846871274417 + 9223372036854775807) << (var_0 - 494043401))) - 3366409189983501369)))) >= ((~(-5856962846871274443 >= 5856962846871274417)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_9 [i_2] = (((var_5 || var_10) != ((var_3 << (((arr_5 [i_2]) - 372344684006395253))))));
        var_19 = (1 ^ var_4);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_12 [i_3] = ((((((var_1 && -5162797936697837040) >= ((50974 >> (-65 + 80)))))) + (((~14563) | (((arr_10 [i_3] [i_3]) - (arr_11 [i_3])))))));
        var_20 = ((-var_15 > ((var_9 ? 5856962846871274417 : 9))));
        arr_13 [i_3] = (((((var_13 ? var_13 : -5162797936697837034)) % var_15)) + ((((!(((arr_11 [i_3]) > (arr_11 [0]))))))));
    }
    var_21 = (max(var_21, ((((((((var_11 ? 5856962846871274437 : var_11))) ? ((var_6 >> (var_2 - 63094))) : (var_7 < var_1)))) ? var_12 : (((-5856962846871274417 | var_12) ? (5856962846871274450 ^ 0) : var_12))))));
    #pragma endscop
}
