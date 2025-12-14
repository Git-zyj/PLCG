/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_12 = var_2;
        var_13 = min((min((arr_2 [i_0 - 1]), (arr_2 [i_0 + 2]))), (((min((arr_2 [i_0]), var_0)))));
        arr_4 [i_0] [11] = (arr_3 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        arr_7 [i_1 + 2] = (((arr_5 [2]) ? (arr_1 [i_1 + 1] [i_1 + 2]) : var_0));
        arr_8 [8] = (((arr_0 [i_1 + 3]) % 1));
        arr_9 [i_1] = (((((-6649434769864436273 ? 2015634690 : (arr_3 [i_1 + 3] [i_1])))) ? (arr_5 [i_1 + 1]) : 10912));
        var_14 = ((10912 ? (arr_6 [i_1] [i_1]) : ((var_1 ? (arr_1 [1] [1]) : (arr_5 [i_1])))));
        var_15 ^= ((var_7 % ((-1539905463 ? 32767 : 4019436409))));
    }
    var_16 = (max((min(var_4, ((3908086250 ? var_9 : -123)))), var_7));
    #pragma endscop
}
