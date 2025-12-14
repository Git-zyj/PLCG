/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = 7055834057007192967;
        var_18 ^= ((var_6 != ((~(arr_3 [7])))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_19 -= (min(1, 0));
        var_20 = (max(1, var_2));
        var_21 *= ((~((1 ? (arr_5 [i_1]) : (arr_6 [i_1])))));
        var_22 = 0;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_23 -= (((arr_9 [4] [4]) && (!var_12)));
        var_24 ^= (((-8 ? 0 : 1071189880)));
        var_25 *= ((~(~1)));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_26 |= min((((arr_1 [i_3]) | 1)), ((((arr_1 [i_3]) && -147175548))));
        var_27 = ((((~(0 + -2147483646))) + (((((arr_3 [i_3]) != (max((arr_9 [i_3] [i_3]), (arr_7 [1])))))))));
    }
    var_28 = (min(var_3, ((~(2918768589 < var_5)))));
    #pragma endscop
}
