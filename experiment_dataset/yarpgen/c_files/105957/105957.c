/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (max(var_18, -var_17));
                var_19 = 10003333413854297326;

                /* vectorizable */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    var_20 += ((((arr_4 [i_0]) <= var_4)));
                    var_21 = (((!182) / (arr_2 [i_2 + 1] [i_2] [i_2])));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_1] = -1;
                        arr_11 [i_0] [i_0] [i_2 - 1] [i_0] [i_0] = (((arr_8 [i_0] [i_3] [i_2 - 1] [i_0]) ? (arr_8 [i_0] [i_2] [i_2 + 1] [i_0]) : (arr_8 [i_0] [13] [i_2 - 1] [i_0])));
                        arr_12 [i_0] [i_2] [9] [i_1] [i_0] = ((arr_8 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_0]) + ((var_11 ? var_8 : 2047)));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_22 = ((((var_1 ? (arr_5 [i_4] [i_4]) : 8664409236042922387))) ? ((~(arr_0 [i_0] [i_4]))) : -1);
                        var_23 = (!2051948835745023449);
                    }
                    arr_15 [i_0] [i_1] [i_1] [i_2] = (arr_1 [i_2 + 1]);
                }
                var_24 = (max(var_24, (((-(((arr_2 [i_0] [i_0] [11]) ? (arr_2 [i_0] [i_1] [i_1]) : 14)))))));
            }
        }
    }
    var_25 = var_2;
    #pragma endscop
}
