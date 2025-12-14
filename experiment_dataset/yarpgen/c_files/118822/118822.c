/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_5);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (((((19527 ? (!var_16) : 19529)) & 1530917289)))));
                    arr_7 [i_0] [i_1] [i_2] = (((var_14 / (arr_1 [i_0]))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_22 [i_7] = ((((((((arr_13 [i_3] [i_3] [i_5] [i_3]) ? var_13 : var_13))) ? (19551 + 1530917289) : 19527)) != 50690));
                                arr_23 [i_3] [i_3] [i_3] [i_3 - 2] = 46476;
                            }
                        }
                    }
                    var_20 = ((-var_5 ? ((((arr_16 [i_3 - 2]) ? (((((arr_13 [12] [i_4] [i_4] [i_4]) + 2147483647)) << (var_9 - 30654))) : (!var_16)))) : (((arr_10 [i_3] [i_4] [i_5]) ? (((var_11 ? 43752 : (arr_8 [i_3] [i_3])))) : (-9223372036854775807 - 1)))));
                }
            }
        }
    }
    #pragma endscop
}
