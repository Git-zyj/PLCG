/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_19 ^= ((var_15 ? (arr_0 [i_0]) : (arr_2 [i_0] [2])));
        arr_3 [i_0] = ((((((var_4 | (arr_1 [i_0]))) >= (min((arr_1 [i_0]), (arr_1 [i_0]))))) ? (((65523 ? 21 : 22250))) : ((max((arr_2 [i_0] [i_0]), var_14)))));
        var_20 = (max(var_20, (arr_2 [10] [10])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = var_14;
        var_21 *= ((((min(var_2, -65515))) - (arr_5 [i_1] [i_1])));
        var_22 = (max((arr_2 [4] [4]), (((arr_5 [i_1] [i_1]) - var_16))));
        arr_9 [i_1] [i_1] = min((((!(arr_0 [i_1])))), (max((arr_0 [i_1]), (arr_2 [i_1] [4]))));
        var_23 = ((~((((min((arr_7 [i_1]), (-2147483647 - 1))) != var_1)))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] = (max(((~((22250 ? var_9 : var_14)))), 127));
        var_24 = (min(var_24, ((max((((200447984 ? 0 : 1))), var_12)))));
    }
    var_25 = (min(var_25, var_6));
    #pragma endscop
}
