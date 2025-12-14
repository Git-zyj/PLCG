/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] [5] = (((min(-22260, var_0)) < (((!(!var_13))))));
                var_16 = (var_1 ? var_0 : var_9);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                var_17 = (22256 - var_4);
                                var_18 += ((var_0 ? ((~(((arr_13 [i_4] [20]) ? (arr_12 [i_0] [i_0] [i_0] [i_3] [i_4]) : (arr_8 [1] [i_3] [i_2] [1] [i_0] [i_0]))))) : var_3));
                                arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] = (((((arr_12 [i_1] [i_1 - 1] [i_1 - 1] [10] [i_1 - 1]) ? (min(var_2, (arr_6 [i_0] [i_1] [i_3] [i_1]))) : (arr_2 [9] [9]))) < (!22259)));
                            }
                            /* vectorizable */
                            for (int i_5 = 2; i_5 < 19;i_5 += 1)
                            {
                                var_19 |= (!(((arr_1 [i_5]) < -10341)));
                                var_20 = (max(var_20, ((((arr_10 [i_5] [i_5] [i_5 - 2] [i_5 + 1] [i_5 + 1]) ? (!var_11) : (22259 || 3935330628))))));
                                arr_17 [i_1] = var_12;
                            }
                            arr_18 [i_0] [i_1] [12] [i_2] [i_3] |= (min((max(var_9, var_5)), (((var_11 ? (arr_13 [i_3] [i_3]) : ((-22274 ? var_0 : -22275)))))));
                        }
                    }
                }
            }
        }
    }
    var_21 = ((-(var_10 + var_1)));
    var_22 = (min(var_5, var_7));
    var_23 = var_0;
    var_24 |= (min(var_8, var_7));
    #pragma endscop
}
