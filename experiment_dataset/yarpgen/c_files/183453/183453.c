/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_0] [i_0] [i_0] = ((~((-((var_9 >> (var_8 - 10179233807520782663)))))));
                                arr_14 [i_0] = (((-2147483647 - 1) ? 9758468416125655607 : var_9));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_5] = -3409428038;
                                var_17 = ((var_8 ? var_9 : (arr_11 [i_0] [i_1] [i_1] [i_5] [i_0])));
                                var_18 = ((-(((!(arr_20 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
                                var_19 += ((0 ? 0 : 1073739776));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((var_1 ? var_3 : 8688275657583896001));
    #pragma endscop
}
