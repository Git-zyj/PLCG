/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= var_16;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_3] [i_2] [i_3] [i_0] |= ((((-((-(arr_9 [8] [10] [i_3] [i_3]))))) == 25418));
                                var_20 = (min((arr_8 [i_0] [i_1 + 1] [16] [i_4] [i_1 - 1]), (((!(arr_10 [i_1 + 1] [i_2] [i_1 - 1] [i_3]))))));
                            }
                        }
                    }
                    var_21 = (((25396 ? var_17 : 40109)));
                    arr_14 [7] [i_2] = ((var_15 / ((((40130 ? var_17 : (arr_12 [i_0] [i_0] [i_1 - 1] [i_2] [i_2]))) + (arr_4 [i_0] [i_2] [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
