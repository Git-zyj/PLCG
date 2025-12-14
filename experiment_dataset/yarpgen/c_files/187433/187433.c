/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (((-((min((arr_1 [i_2]), var_6))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3 + 1] [i_4] = (~8);
                                var_18 *= var_4;
                            }
                        }
                    }
                    arr_15 [i_0] = (((((((var_6 ? (arr_9 [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_0] [i_0])))) ? (((arr_5 [i_0] [14] [i_1] [i_2]) - 231)) : var_0)) | var_7));
                    arr_16 [i_0] = 47;
                }
            }
        }
    }
    #pragma endscop
}
