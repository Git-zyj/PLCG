/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_20 = var_11;
                        var_21 = (max(var_21, (arr_3 [i_1] [i_2] [i_3])));
                    }
                    for (int i_4 = 2; i_4 < 7;i_4 += 1)
                    {
                        var_22 *= (1 != 1);
                        arr_12 [i_1] [i_1] = (arr_8 [i_0] [i_0] [i_1] [i_0] [i_4]);
                        arr_13 [i_4] [i_1] [i_2] [i_0 - 1] = (arr_11 [i_0 - 1] [6] [6] [i_2] [6]);
                        arr_14 [i_0 + 1] [8] [i_2] [0] = (arr_5 [3] [i_1]);
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_23 = var_14;
                        var_24 = (arr_10 [i_0] [i_0] [i_2] [i_5] [i_5] [i_0]);
                    }
                    var_25 = ((((min(((min((arr_8 [i_0] [i_1 - 2] [6] [i_2 - 1] [i_2]), var_18))), (((arr_4 [i_0] [i_1] [i_2]) ? var_12 : (arr_4 [i_2] [i_1] [i_0])))))) ? (((min((arr_15 [i_0] [i_0 + 1] [i_1] [i_2] [i_0 + 2]), (arr_8 [i_0] [i_0] [i_2] [i_1] [i_2]))))) : var_19));
                }
            }
        }
    }
    var_26 = (min(var_26, ((max(var_0, ((var_19 ? (var_11 | var_18) : ((max(1, 1))))))))));
    #pragma endscop
}
