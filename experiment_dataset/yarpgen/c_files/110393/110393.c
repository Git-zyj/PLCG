/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= 127;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 |= (arr_3 [i_0] [i_0]);
        var_18 = ((var_12 + (arr_0 [i_0])));
        var_19 = (max(var_19, 1));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] [7] = (((arr_4 [i_1] [i_1]) ? -127 : ((~(arr_5 [i_1])))));
        arr_8 [i_1] = (max((max((arr_4 [i_1] [i_1]), (arr_5 [i_1]))), -16160));
        var_20 ^= (arr_4 [i_1] [i_1]);
        arr_9 [i_1] &= ((((min((min(-106, var_8)), (arr_6 [i_1])))) / (~-126)));
    }
    #pragma endscop
}
