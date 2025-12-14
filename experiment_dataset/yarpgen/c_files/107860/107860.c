/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_8;
    var_11 -= 64;
    var_12 &= (((!var_7) ? var_6 : (~var_4)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 *= (max((!18446744073709551615), (max(108086391056891904, (max(13, (arr_2 [i_0] [0])))))));
        var_14 = (arr_0 [i_0]);
        arr_3 [9] [9] = 203510573109273659;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = 13;
        var_15 = (min(var_15, (arr_5 [8])));
    }
    #pragma endscop
}
