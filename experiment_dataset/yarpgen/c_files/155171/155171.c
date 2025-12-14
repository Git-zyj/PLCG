/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, 1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 = (((arr_1 [i_0]) ? 17 : var_8));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_13 = (!15);
            var_14 = (arr_3 [i_1]);
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            var_15 &= (arr_3 [i_0]);
            arr_6 [13] [i_0] = (arr_1 [16]);
            arr_7 [i_0] = ((~((var_10 ? (arr_5 [i_2]) : var_5))));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
        {
            arr_12 [4] [i_0] = ((~(arr_2 [i_0])));
            arr_13 [i_0] = (arr_4 [i_0]);
            var_16 = ((arr_1 [i_0]) ^ (arr_11 [i_0] [i_3] [i_3]));
        }
        var_17 = var_4;
    }
    var_18 = (max(((min((max(var_1, var_4)), ((var_4 << (1125497053 - 1125497053)))))), var_10));
    #pragma endscop
}
