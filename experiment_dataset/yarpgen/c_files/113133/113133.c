/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_13 ? var_10 : (max((var_15 + var_6), var_1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 -= (((((2147483647 ? (max((arr_0 [i_0]), var_17)) : ((((arr_4 [i_0]) * 1)))))) ? ((-(var_9 >= var_8))) : ((max(-1, 1)))));
                    arr_7 [16] [i_1] [i_2] = 10842;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] [i_4 - 2] = (max(((!(((var_2 & (arr_8 [i_2 + 1] [i_3])))))), (!var_5)));
                                var_20 ^= var_5;
                                arr_15 [i_2] [i_1] [1] [i_1] [i_1] = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
