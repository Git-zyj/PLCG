/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 &= (((var_1 && 234014813810890154) - (35 >= var_3)));
        arr_2 [i_0] = (min(var_14, (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = (max(var_18, var_6));
        var_19 = ((((arr_3 [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : var_2)) << (1305 - 1305));
        var_20 += (max(((((1 == var_9) <= ((var_1 ? 84 : (arr_3 [i_1] [i_1])))))), -35));
        var_21 = ((((((var_7 % (arr_3 [12] [12])))) ? ((var_9 ? 79 : var_7)) : var_3)) < (arr_4 [i_1]));
    }

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_7 [i_2] = 18446744073709551615;
        var_22 = ((var_2 ? (min(((127 ? var_12 : 0)), var_9)) : ((((((arr_4 [i_2]) <= 29853)) ? (arr_5 [i_2]) : (((arr_0 [3] [1]) ? 178 : 35)))))));
        var_23 &= 38;
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_24 += (((max((((2147483647 ? 56 : var_13))), (min(9960, 18446744073709551615)))) == (84 | 65532)));
        var_25 = (((!var_3) & (((4294967290 ? (arr_9 [i_3] [i_3]) : var_1)))));
        var_26 = ((43 ? ((-2114812233 ? -12 : 32767)) : 65535));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_27 = ((-(-1265026305 - var_6)));

        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_28 = ((var_6 ? (((var_7 ? (arr_1 [i_4] [i_5]) : var_6))) : (arr_0 [i_4] [i_4])));
            var_29 ^= (((arr_8 [i_4]) ? var_10 : (arr_8 [i_4])));
        }
    }
    var_30 = ((((((((var_6 ? var_10 : var_1))) ? (((var_2 ? var_3 : 1))) : (max(-4354872513281473799, var_8))))) ? (((var_11 + 239) ? var_0 : -1088261541)) : 95));
    var_31 = (max(var_31, (((((1 ? ((234014813810890154 >> (24206 - 24143))) : (((1 ? 32767 : 1))))) / 10)))));
    #pragma endscop
}
