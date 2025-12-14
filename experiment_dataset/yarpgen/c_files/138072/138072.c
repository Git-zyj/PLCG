/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 246783656;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 3; i_4 < 24;i_4 += 1)
                            {
                                var_17 = (min(var_17, ((-1 ? (arr_4 [3] [1] [15]) : (arr_13 [i_4 + 1] [12] [i_4 - 3] [i_4 + 1] [10])))));
                                arr_16 [i_0] [i_1] [i_2 + 2] [i_1] [i_4] = (!-3);
                                var_18 *= (((var_7 | 6281799786077459671) > (arr_9 [i_1 - 1] [i_1 + 2] [i_2 - 2] [i_4 - 1])));
                                var_19 &= (1 <= (arr_10 [i_4 + 1] [i_2 - 1] [i_0]));
                            }
                            arr_17 [16] [i_1] = (((((!(arr_12 [i_3] [i_2 - 1])))) * (!8)));
                        }
                    }
                }
                arr_18 [i_1] = -22753;
                var_20 -= 8;
            }
        }
    }
    var_21 = var_13;
    var_22 |= ((var_6 ? (var_2 | var_3) : var_15));
    #pragma endscop
}
