/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (((((~(min(15434365155565580002, var_12))))) ? var_8 : 255));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] |= (0 ? 16383 : 4389796691425317944);
        var_21 += (((((~(arr_2 [i_0] [3])))) ? (arr_2 [i_0] [i_0]) : (~9)));
        var_22 |= ((var_13 ? var_9 : 48944));
        var_23 = (min(var_23, 12895116940959533542));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_6 [6] &= (!16385);
        var_24 ^= (max(4389796691425317944, (arr_2 [i_1 - 1] [i_1 - 1])));
        var_25 = (max(var_25, (max((((!(arr_2 [i_1 - 1] [i_1 - 1])))), (((~40) ? (min((arr_0 [i_1] [i_1]), (arr_1 [i_1]))) : 245))))));
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        var_26 = (min(var_26, (arr_9 [i_2])));
        var_27 = (min(var_27, ((((arr_10 [i_2 + 1]) * (~245))))));
        var_28 += 17803;
        var_29 = (min(var_29, (((max((arr_10 [i_2]), (~var_1))) & (((227 ? var_4 : 65535)))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_30 = (max(var_30, 120));
        var_31 = (min(var_31, (var_7 > 39)));
    }

    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        arr_17 [4] |= var_4;
        var_32 = (min(var_32, (arr_15 [i_4 - 1] [i_4 + 1])));
        arr_18 [1] |= ((-(65524 - 215)));
        var_33 ^= (((~140) < ((6604502488366941371 % (((arr_15 [i_4 - 1] [i_4]) >> (var_3 - 11270163328093351634)))))));
    }
    #pragma endscop
}
