/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= 1;
    var_11 ^= (min((((~1) / ((var_6 ? 4 : var_8)))), var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_12 = -65534;
        var_13 = (((arr_1 [i_0]) != (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = ((((max(0, var_0))) / (~var_9)));
        arr_5 [i_1] [i_1] = (!65526);
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_14 = (max(var_14, ((((((min(var_0, (arr_6 [i_2] [i_2]))))) == (((min(var_2, -9223372036854775787)) | (arr_7 [i_2]))))))));
        arr_8 [i_2] [i_2] = arr_6 [i_2] [i_2];
    }
    #pragma endscop
}
