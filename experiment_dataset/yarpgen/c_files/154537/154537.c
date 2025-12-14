/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_0] [i_4] [i_2] [i_2] [i_3] [i_4] = (arr_3 [i_2]);
                                var_19 = (((79 + -1793972289) - ((max((arr_10 [i_0] [i_4] [i_2] [i_3] [i_1] [i_0]), (arr_10 [i_4] [i_3] [11] [2] [i_1] [7]))))));
                                var_20 -= ((((max((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_12 [i_0] [i_1] [7] [i_3] [i_0]))) & (max((arr_12 [i_0] [i_0] [i_2] [i_0] [i_4]), (arr_1 [i_2]))))));
                            }
                        }
                    }
                    var_21 ^= (arr_14 [i_2] [i_2] [2]);
                    arr_16 [i_0] [i_0] [i_0] = (((arr_10 [i_1] [i_1] [i_2] [i_1] [i_1] [i_1]) & (0 & 13372)));
                    var_22 = (arr_8 [i_0] [i_1] [i_2] [i_2]);
                }
            }
        }
    }
    var_23 = (min(var_3, var_17));
    #pragma endscop
}
