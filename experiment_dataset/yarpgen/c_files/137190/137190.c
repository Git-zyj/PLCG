/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (((((max(-34, var_3)))) / (max(var_5, var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = (max(var_12, ((max((min((arr_0 [i_0] [14]), 33)), var_4)))));
                arr_5 [18] [i_1] [i_0] &= var_1;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, ((max(18446744073709551615, (arr_3 [4]))))));
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_0] [i_2] = (((max(25, 3416837365)) | (!1)));
                            }
                        }
                    }
                }
                arr_15 [i_0] = 1920;
            }
        }
    }
    #pragma endscop
}
