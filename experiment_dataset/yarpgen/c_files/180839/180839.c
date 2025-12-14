/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((((arr_1 [i_0] [i_0 - 3]) ? var_15 : (arr_1 [i_0] [i_0 + 2])))) ? (((((arr_2 [i_0] [i_0 + 4]) <= (arr_1 [4] [i_0 + 3]))))) : (min((arr_1 [i_0] [i_0 - 1]), var_10)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 = var_1;
            var_20 = ((-(((arr_1 [5] [i_0]) & var_16))));
            var_21 -= (((arr_3 [i_1]) <= var_17));
            var_22 = (((arr_5 [i_0 + 1]) - (arr_3 [i_0 + 2])));
            var_23 -= (arr_1 [i_0] [i_0]);
        }
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            var_24 = (min(((var_17 ? (arr_1 [i_0 + 2] [i_2 + 1]) : var_3)), (((((max(-28489, var_12))) && (arr_5 [1]))))));
            arr_9 [i_0 + 3] [i_0 + 3] [i_2] = 3671844613;
            var_25 -= arr_8 [1];
            var_26 = (arr_0 [i_2 - 1]);
        }
    }
    var_27 = ((((((var_2 ? var_4 : var_2)) >= (min(14265216119103120477, var_13)))) ? var_6 : ((var_14 ? var_18 : var_12))));
    #pragma endscop
}
