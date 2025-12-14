/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= ((var_12 << (((max(((33554431 ? 8192 : 33554437)), 255)) - 8168))));
    var_18 = ((33554437 ? (((((max(var_3, var_9))) >= (min(-787417840, 33554440))))) : var_6));
    var_19 = (((min(var_4, 255))));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_20 = (max(var_20, ((min((arr_0 [i_0] [i_0]), (787417840 < 5784971912026953648))))));
        var_21 = (max(((max(var_6, var_11))), (arr_0 [i_0] [i_0])));
        arr_3 [i_0] = ((~((-(arr_1 [i_0 - 2])))));
        var_22 += ((-787417840 * (arr_0 [i_0 + 1] [i_0 + 1])));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_23 = min((max((((arr_4 [i_1]) ? 787417840 : 6310275425236171088)), ((max(33554431, var_10))))), (((~(arr_5 [i_1 + 1])))));
        var_24 *= max(-113, -9390);
    }
    for (int i_2 = 2; i_2 < 8;i_2 += 1)
    {
        arr_10 [i_2] = ((+(min((((var_16 ? (arr_1 [i_2 - 1]) : -9390))), (arr_7 [i_2] [3])))));
        var_25 = ((~(max((((!(arr_0 [i_2] [i_2])))), ((var_4 ? var_16 : (arr_7 [8] [i_2])))))));
        var_26 += (((arr_4 [i_2]) ? (!var_7) : (((arr_7 [i_2 - 1] [i_2 + 1]) ? (33554411 || -32) : (min(63488, (arr_7 [i_2] [i_2])))))));
    }
    #pragma endscop
}
