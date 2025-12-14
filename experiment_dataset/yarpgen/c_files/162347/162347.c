/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, (((!(5343 / var_10))))));
                                var_19 = var_16;
                                var_20 = (min(var_20, (((!(((((((arr_7 [i_3]) ? var_9 : 8877))) ? (((var_11 + (arr_12 [i_0] [i_1] [i_2] [i_1] [i_1] [i_2] [i_4])))) : ((248 - (arr_11 [i_4] [8] [i_2 - 3] [8] [i_2] [i_2])))))))))));
                                var_21 += ((-((max(var_17, (arr_5 [i_2 - 1] [i_4]))))));
                            }
                        }
                    }
                    var_22 ^= ((var_17 - ((~(548611435 - var_5)))));
                    arr_14 [i_1] [i_1] = (((((248 >= (arr_11 [12] [12] [i_1] [i_1] [i_1] [i_2])))) & 4894));
                    arr_15 [i_0] [i_1] [i_2 - 2] = 2;
                }
            }
        }
    }
    var_23 = 30721;
    var_24 = -99;
    var_25 ^= ((((((549755813887 ? 74 : var_7)) >= var_13)) ? var_15 : 66341541));
    var_26 = (min(var_26, (((~((var_0 + (153 + var_2))))))));
    #pragma endscop
}
