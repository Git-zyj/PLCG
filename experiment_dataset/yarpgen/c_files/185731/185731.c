/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185731
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
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_17 *= ((((((((arr_1 [i_0] [i_2]) ^ -8)) & 7))) || (((~(arr_6 [i_2] [i_1] [i_0]))))));
                    var_18 ^= (!-19);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = (max((-12 + var_7), ((((var_4 ? 1 : var_8))))));
                                var_20 += var_5;
                            }
                        }
                    }
                    arr_13 [i_1] [i_1] = max(((-((var_1 ? var_15 : (arr_1 [i_1] [i_1]))))), (max((arr_9 [i_0] [i_0] [i_2]), var_7)));
                    arr_14 [i_1] [4] [i_1] [i_1] = ((((((max(65532, 0))) ? (arr_6 [i_0] [i_1] [i_1]) : ((max(44, 254))))) < (~var_3)));
                }
            }
        }
    }
    var_21 = var_16;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {
                var_22 = var_14;
                var_23 ^= (arr_18 [i_5] [i_6]);
            }
        }
    }
    #pragma endscop
}
