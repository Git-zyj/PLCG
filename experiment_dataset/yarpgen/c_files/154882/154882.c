/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((52714 ? 12821 : -1734379228));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((arr_1 [i_0]) | (((((arr_1 [i_0]) != 4071077348))))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_13 = 174;
            var_14 = ((arr_2 [i_0] [i_1]) - (arr_4 [i_0] [i_0] [i_0]));
            arr_6 [i_0] [i_1] [i_0] = (arr_5 [i_0]);
        }
    }
    var_15 = var_0;
    var_16 = var_8;
    var_17 = var_11;
    #pragma endscop
}
