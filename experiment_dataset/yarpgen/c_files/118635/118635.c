/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_5;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 *= -var_17;
        var_22 = (max((-31155 != -97), var_2));
    }

    for (int i_1 = 4; i_1 < 12;i_1 += 1)
    {
        var_23 = (((((((max((arr_0 [i_1]), var_8))) ? (arr_4 [i_1]) : (arr_2 [i_1 + 1] [i_1])))) ? (((((255 ? (arr_2 [i_1] [i_1]) : var_10))) ? (~var_7) : (max((arr_2 [i_1] [i_1]), var_4)))) : (16739 + -31137)));
        var_24 = ((-31137 ? -5 : 17169));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        var_25 ^= ((~(arr_2 [i_2 + 1] [i_2 + 1])));
        var_26 = (arr_6 [i_2 - 2]);
        var_27 &= (arr_5 [i_2 - 1]);
        var_28 = var_19;
    }
    #pragma endscop
}
