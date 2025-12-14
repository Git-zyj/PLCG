/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = ((var_11 >= ((-(((arr_1 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))))));
        arr_3 [i_0] [i_0] = ((((((arr_1 [i_0]) <= (arr_0 [i_0] [i_0])))) << (((!(-1501587823 / -21129))))));
        var_15 = var_9;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_16 ^= (var_0 * (arr_4 [i_1] [0]));

        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            arr_9 [i_2] = 21128;
            var_17 -= ((min(((arr_8 [i_2] [i_2 + 2] [i_1]), (((-(arr_2 [i_1]))))))));
        }
        arr_10 [i_1] [i_1] = ((-(255 + 21122)));
        var_18 ^= (((((arr_8 [i_1] [4] [i_1]) / var_8)) % (arr_7 [i_1] [i_1] [i_1])));
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_15 [i_3] = ((var_8 || (arr_0 [i_3] [i_3])));
        var_19 = 1;
    }
    #pragma endscop
}
