/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = var_8;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [12] = ((min((arr_1 [i_0]), -1)) + 3938044115476453559);
        arr_3 [i_0] = (min((arr_0 [4]), ((1792248717 ? 3938044115476453572 : 5))));
        arr_4 [i_0] [i_0] = (min(((min((arr_0 [i_0]), (arr_0 [i_0])))), (min((arr_0 [i_0]), var_5))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] [1] = ((~(arr_6 [i_1] [i_1])));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_10 [i_1] = var_3;
            arr_11 [4] = (((15432 ? 3938044115476453538 : -15459)));
            arr_12 [i_2] [i_2] [11] = ((15432 ^ (arr_6 [i_1] [i_2])));
            arr_13 [i_1] [i_2] = var_4;
        }
    }
    for (int i_3 = 4; i_3 < 14;i_3 += 1)
    {
        arr_16 [i_3] [0] = ((~(-15467 ^ 233)));
        arr_17 [i_3] = (min(-3938044115476453546, -21));
    }
    #pragma endscop
}
