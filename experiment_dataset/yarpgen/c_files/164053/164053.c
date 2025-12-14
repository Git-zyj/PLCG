/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, (arr_0 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_13 = ((-((-(arr_3 [i_0] [i_2])))));
                                var_14 *= ((((((arr_13 [i_0 - 1] [i_3] [i_4] [i_4 + 1] [i_4 - 2]) ? 2 : (arr_2 [i_0])))) < (min((~var_2), (arr_3 [10] [i_3])))));
                                var_15 = (max((min((-127 - 1), 3617087780)), ((max(64849, (arr_8 [i_1] [8] [7]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (max(var_16, (((min((min(var_7, var_8), (var_3 * var_8))))))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    arr_25 [8] [i_6] = min((max((arr_14 [i_5] [i_5] [i_7] [11] [i_5]), (min((arr_3 [8] [8]), (arr_1 [i_6] [i_5]))))), ((((-(arr_2 [i_7]))))));
                    arr_26 [1] [i_6] [i_5] = ((~(min((arr_24 [i_5]), (arr_24 [i_6])))));
                    arr_27 [i_6] = min((94 <= var_1), (arr_22 [1]));
                    var_17 *= var_9;
                }
            }
        }
    }
    #pragma endscop
}
