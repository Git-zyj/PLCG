/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = 103;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_15 = (arr_9 [i_0] [i_0] [i_0] [14]);
                                var_16 = (min(var_16, 0));
                                arr_16 [i_4] [i_1] [i_1] [i_1] [i_0] = (max((max(((max(113, 84))), (arr_10 [12] [i_1 - 1] [11] [i_1 + 4] [11]))), (((!(arr_3 [i_3]))))));
                                var_17 = -8;
                            }
                        }
                    }
                }
                var_18 = ((-(var_0 | var_5)));
            }
        }
    }
    var_19 = (max(((max(15954, var_10))), ((((max(-121, 216))) ? -var_2 : var_0))));
    #pragma endscop
}
