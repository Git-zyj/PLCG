/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_2, var_3));
    var_20 = (((var_4 | var_7) < var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_10 [i_0] [i_2 + 1] [i_1] [i_1] [i_0] |= (((arr_6 [i_2 + 1] [i_0] [i_2 + 2]) < var_4));
                        arr_11 [i_1] [i_2 + 1] [i_1] [i_1] = (arr_7 [8] [i_1] [i_2] [i_3] [i_2 + 2]);
                    }
                    arr_12 [i_0] [i_0] [i_0] = (arr_8 [i_0] [i_2 + 2] [i_2] [i_1]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                arr_19 [i_0] [i_1] [i_2] [i_4] [i_5] = (((((min((arr_2 [i_0]), (arr_2 [i_0]))))) % (((arr_9 [i_0] [i_0] [i_0] [i_0]) ? 1 : (arr_9 [i_0] [i_1] [i_0] [i_4])))));
                                arr_20 [i_5] [i_1] [i_4] [i_5] = (((((arr_0 [i_2 + 1]) - var_1)) % (((min((arr_2 [i_2 + 1]), var_17))))));
                                arr_21 [i_5] [i_4] [i_2 - 1] [i_4] [i_0] = var_18;
                                arr_22 [i_5] = (((((+(((arr_16 [i_0] [1] [i_1] [i_2] [2] [i_4] [i_1]) ? var_7 : (arr_6 [i_0] [i_4] [i_5])))))) ? (11937738791303195048 % 801260320) : ((min((min((arr_18 [0] [0] [i_5] [i_4] [i_5]), var_11)), (((-(arr_7 [1] [i_4] [i_2] [i_0] [i_0])))))))));
                                arr_23 [i_4] [i_4] = 98;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_8;
    #pragma endscop
}
