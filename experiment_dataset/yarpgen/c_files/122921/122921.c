/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        var_11 -= (-32767 - 1);

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_0] = (((arr_5 [i_1] [i_1] [i_1 - 1]) ? (arr_4 [i_0] [i_1 + 1] [12]) : (((!(arr_1 [i_0]))))));
            var_12 = (((((arr_1 [i_0]) | 1)) | 1));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_13 = arr_0 [i_0];
            var_14 ^= (arr_7 [7] [i_0] [10]);
        }
        var_15 = (arr_0 [1]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_11 [i_3] = (288195191779622912 | 92);
        var_16 -= var_3;
    }
    var_17 -= var_7;
    var_18 -= (max((-var_9 | var_10), var_5));
    var_19 = (min(var_19, (((var_2 | (288195191779622912 | 288195191779622907))))));
    #pragma endscop
}
