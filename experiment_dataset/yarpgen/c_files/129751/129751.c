/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_2 ? 9223372036854775807 : var_7));
    var_13 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = -var_4;

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_14 = (arr_1 [i_0]);
            arr_5 [20] [17] [i_0] = (arr_1 [i_0]);
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_10 [i_2] = 1;
            arr_11 [i_2] [i_2] = 13916341881563055012;
            var_15 = ((13916341881563055012 / var_7) + (~var_9));
            arr_12 [i_2] [0] [16] = (arr_7 [i_2]);
        }
    }
    #pragma endscop
}
