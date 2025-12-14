/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    var_20 = var_18;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_12 [i_3] |= (((arr_0 [2] [2]) + (arr_9 [4] [i_1] [i_1])));

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_21 = (max((~63187), var_17));
                            var_22 = ((-((32767 ? 268292172 : (2350 <= -32759)))));
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_23 = (((~18597) ? ((max((arr_5 [i_1 + 2] [i_1 - 2]), (arr_9 [i_0] [3] [i_2])))) : (((arr_3 [i_1 + 3] [i_2]) ? (arr_5 [i_2 - 2] [14]) : (arr_5 [i_2 + 1] [i_1 + 3])))));
                            var_24 = min((arr_17 [i_0]), (((((-517971491 ? (arr_16 [i_0] [i_0] [14] [14] [1] [i_2] [i_0]) : 112))) ? ((9223372036854775807 ? var_1 : (arr_3 [i_0] [i_0]))) : (var_17 + 33))));
                            var_25 = ((((!(arr_13 [i_0] [i_2]))) ? (((arr_13 [2] [i_2]) ? (arr_8 [0] [i_1] [i_2] [i_1 - 2]) : (arr_13 [i_0] [i_2]))) : ((((arr_13 [i_0] [i_2]) || (arr_8 [i_0] [i_1] [i_2] [i_1 - 2]))))));
                        }
                    }
                }
            }
            arr_18 [i_0] [i_0] = (arr_9 [10] [1] [i_0]);
            var_26 = (((~var_3) * ((min((arr_10 [i_0] [i_0] [i_0] [i_1 - 1]), (arr_16 [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_0] [i_1 - 1]))))));
        }
        arr_19 [i_0] = (~232);
    }
    #pragma endscop
}
