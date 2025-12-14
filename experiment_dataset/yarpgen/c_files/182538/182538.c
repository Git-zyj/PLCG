/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_15 = ((((min(var_2, (arr_0 [i_0] [i_3])))) ? (((!(arr_8 [5] [5] [i_2] [i_3])))) : (-1487984674 <= 1)));
                                var_16 *= var_2;
                                var_17 += (((arr_10 [12] [i_0] [12] [i_1] [7] [i_3] [i_4 - 2]) != (0 % -1487984674)));
                                var_18 = ((~(((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] [i_4]) ? -var_7 : (~1)))));
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_1] [i_1] = (((((var_11 ? (max(-1487984674, var_3)) : (((max((arr_4 [i_1]), (arr_3 [i_3])))))))) ? (~1) : (arr_2 [i_1])));
                            }
                        }
                    }
                    var_19 = -var_4;
                    arr_13 [i_1] |= ((-92 ? 65515 : 21));
                }
            }
        }
    }
    var_20 = var_14;
    #pragma endscop
}
