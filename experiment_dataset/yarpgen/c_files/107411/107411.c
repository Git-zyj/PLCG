/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((~(~var_9))) == (((-10912 + (18446744073709551606 == -2117136731))))));
        var_16 &= (((11 ? -1433292947 : 0)));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 8;i_1 += 1)
    {
        var_17 = 0;
        arr_6 [i_1] [i_1] = (((11 & 7) - ((((arr_1 [i_1]) & (arr_0 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_9 [4] &= ((~(((!(arr_1 [i_2]))))));
        var_18 = (max(var_18, ((((((!-836503971) && 6)) ? (arr_1 [i_2]) : 13)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_19 = (2147483647 & 3485735135);
        var_20 = (arr_10 [i_3]);
        arr_12 [7] [i_3] = ((((1023 ? -2147483633 : 18442240474082181120)) >= 65));
    }
    var_21 = -2117136731;
    var_22 = (min(((((2328102208139341026 - var_11) == var_9))), var_6));
    #pragma endscop
}
