/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_2 - ((~(min(var_6, var_2))))));
    var_11 = min((~-11959566767664375258), 2067899564);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_4] [i_3] [i_3] [i_2] [i_0] [i_0] = (((min((arr_2 [i_0] [i_0]), (arr_2 [i_1] [i_0]))) + (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                                arr_14 [i_3] [1] [i_3] [2] = ((((!(arr_11 [i_0] [i_0] [i_2] [i_3] [i_1]))) ? ((min(-5, (arr_1 [i_2])))) : ((-((-3 ? 1 : (arr_1 [i_0])))))));
                            }
                        }
                    }
                    var_12 = (((((((arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2]) ? (arr_4 [6] [i_1]) : (arr_2 [i_1] [1])))) * (arr_9 [i_0] [i_2] [i_0] [i_2]))));
                    var_13 = (((arr_9 [i_0] [i_1] [i_0] [i_2]) != (((((arr_9 [i_2] [i_2] [i_1] [i_0]) >= (arr_6 [i_0] [i_1] [i_1])))))));
                    var_14 = (min((((((min(4, (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) || (((arr_10 [i_2] [10] [i_0] [i_0]) > (-127 - 1)))))), (arr_2 [i_0] [i_0])));
                }
            }
        }
    }
    var_15 -= (min(((min(var_7, 4294967281))), ((((15579828704666214401 ? var_0 : var_2)) - var_9))));
    #pragma endscop
}
