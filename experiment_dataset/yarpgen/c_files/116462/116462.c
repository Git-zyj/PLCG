/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((((((min(44898, 177)))) <= (min(var_8, (~var_9))))))));
    var_21 = var_8;
    var_22 = (max(var_0, var_8));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_23 -= (((arr_0 [i_0]) + (((arr_0 [i_0]) + (arr_1 [i_0])))));
        arr_2 [i_0] = 0;

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            var_24 = (max(var_24, (((~((~(525026601 > 189))))))));
            var_25 = ((!(((((var_1 ? var_8 : (arr_1 [i_0]))) << (((max(103, var_9)) - 2258714867)))))));
            var_26 ^= (((min(-2873914849940703721, (arr_1 [i_0])))) ? ((-(arr_1 [i_0]))) : ((((((arr_5 [i_1]) < (arr_1 [i_0])))))));
        }
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_27 = (max(var_27, ((min(((min((arr_9 [i_2] [5]), -102))), (((arr_8 [i_2] [i_2]) ? var_17 : (arr_8 [i_2] [i_2]))))))));
        arr_10 [i_2] = (arr_6 [i_2]);
        var_28 += (min(((min(((12435726110327072344 ? (arr_7 [i_2]) : (arr_8 [i_2] [i_2]))), (arr_7 [i_2])))), (arr_9 [6] [12])));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        var_29 += (((arr_12 [12] [0]) / (arr_6 [i_3 - 2])));
        var_30 = (arr_12 [i_3] [i_3]);
        var_31 = (min(var_31, (!-121)));
    }
    var_32 = (464709606 >> -18446744073709551615);
    #pragma endscop
}
