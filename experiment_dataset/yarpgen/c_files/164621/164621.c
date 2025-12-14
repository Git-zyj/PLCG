/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = ((~(arr_2 [i_0 - 3])));
        arr_4 [i_0] = (arr_2 [16]);
        arr_5 [i_0] = ((~((-1 | (((~(arr_2 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_17 = (((5318450571649667623 % 5318450571649667639) ^ -3979281014811417331));
        arr_8 [i_1] = (((var_3 ? (~var_14) : var_11)));
        var_18 *= (((((arr_1 [16]) ? (arr_1 [6]) : (arr_1 [16]))) * (((var_14 == (arr_1 [8]))))));
    }
    var_19 = (min(var_19, (((((min(var_0, (((var_11 ? var_3 : var_3)))))) ? -783363767 : (((((var_10 ? 7624011399202358407 : var_3)) >= 13128293502059883993))))))));
    var_20 ^= var_13;
    var_21 -= var_7;
    #pragma endscop
}
