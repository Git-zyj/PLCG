/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (max((((((max(var_7, var_2))) / ((-6270579219742388183 ? var_4 : 10380))))), ((~(min(1852148904, var_6))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 *= (min((min((var_13 * var_8), (var_5 * 2442818423))), (arr_1 [1])));
        arr_3 [14] = (max(((26660 ? (((96 ? var_0 : var_8))) : (((arr_0 [8]) ? -9223372036854775788 : 135)))), ((min((!-10380), var_5)))));
        arr_4 [i_0] = (min(1852148904, 2));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        var_16 ^= (max(((((arr_5 [20]) ? (((arr_6 [0]) ^ (arr_5 [20]))) : (((arr_5 [6]) ? 52 : (arr_6 [1])))))), (min((max(-38, 1825969403)), ((((arr_6 [14]) & 135)))))));
        var_17 &= 1;
        arr_7 [i_1] = ((0 ? (arr_5 [i_1]) : (!var_8)));
        arr_8 [i_1] [i_1] = (min((((4650294268164567747 == -67) ? 0 : ((max(-30346, (arr_6 [i_1])))))), -1));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_18 = (max(var_18, ((((arr_11 [i_2] [i_2]) ? (min(((((arr_5 [0]) / (arr_6 [1])))), 329333580140103262)) : var_2)))));

        /* vectorizable */
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            arr_16 [i_3 - 1] [i_2] [13] = (((((2147483647 ? (arr_13 [i_3] [i_2] [4]) : (arr_9 [i_2] [i_2])))) || (arr_9 [i_3 - 1] [i_3 + 1])));
            var_19 = -10393;
        }
    }
    #pragma endscop
}
