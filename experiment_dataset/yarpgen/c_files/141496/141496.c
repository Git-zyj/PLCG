/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 += ((~((((arr_11 [i_1 + 4] [i_1 + 3] [i_1] [i_1 + 1]) <= (arr_11 [i_1 + 4] [i_1 - 2] [i_1 + 4] [i_1 + 3]))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_15 [3] [3] [i_1] [i_1] [i_0] [i_0] = (min((min((((arr_11 [i_0] [i_0] [8] [i_0]) * (arr_10 [i_0] [i_3] [i_2]))), 1)), ((max((arr_11 [i_1 - 1] [i_1 + 3] [i_1] [i_1 - 1]), (arr_11 [i_1 - 3] [i_1 - 1] [i_1 - 3] [i_1 + 3]))))));
                        var_19 &= (min(((var_8 ? -39 : -240)), (arr_1 [i_0])));
                        arr_16 [8] [8] [i_2] [8] [i_1] = ((~((~(arr_12 [i_1 + 4] [i_1 + 1] [i_1 + 2] [i_1 + 3] [i_3] [i_3])))));
                        arr_17 [i_0] [i_1] [i_1] [i_2] [6] = ((15 >> (((max(var_13, (arr_14 [i_1] [i_1 - 3] [i_1 + 3] [i_1] [i_1] [i_1]))) - 267084478))));
                    }
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        var_20 += ((((max(((max((arr_7 [4]), (arr_4 [0] [i_1] [0])))), var_14))) ? (((!((((arr_2 [i_2]) ? var_15 : var_11)))))) : (((!((((arr_2 [3]) >> (((arr_2 [i_2]) - 292708265))))))))));
                        arr_21 [i_1] [i_2] [i_2] = (min(((((-(arr_7 [i_2]))) * (var_4 / var_15))), (arr_9 [1] [i_1] [i_1 - 2] [i_1 + 3])));
                    }
                    var_21 = (max(var_21, (~var_13)));
                    var_22 ^= (!7);
                }
            }
        }
    }
    var_23 = var_4;
    var_24 -= -64;
    #pragma endscop
}
