/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((~(max(14504424050812723317, (~2135443534))))))));
    var_14 = (~var_11);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_0] [16] [i_1] [i_0] = (((((((var_1 != (arr_1 [i_0])))) & (arr_0 [i_0] [i_1]))) * 14240));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 += ((((((min((arr_12 [i_0] [i_1] [i_3] [16]), var_11)) | (arr_11 [i_2] [i_1] [1] [0] [i_1] [i_2])))) ? ((-(arr_12 [15] [i_2] [i_2] [i_4]))) : 1));
                                var_16 = (max(var_16, (((((((arr_7 [i_0] [i_1] [i_2] [i_0]) ? 850111264 : (arr_7 [i_0] [i_3] [i_0] [i_0])))) ? ((-(max(var_7, (arr_0 [i_2] [i_1]))))) : (((262143 + (arr_2 [i_1] [i_1])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = ((((min((var_10 * 262143), (~var_3)))) > ((var_8 ? ((var_9 ? var_1 : 1)) : (((var_8 ? var_9 : 1)))))));
    var_18 += 2976;
    #pragma endscop
}
