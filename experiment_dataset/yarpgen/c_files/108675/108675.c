/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 70217560;
    var_18 += 0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_1] &= (max(1634543888, (arr_0 [i_2 + 2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_16 [i_2] [14] [1] [i_3] [i_4] = -1;
                                var_19 += arr_2 [i_0];
                                var_20 ^= 0;
                                var_21 = (((-67 ? (arr_15 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 2] [i_2] [i_2 - 2]) : (arr_15 [i_2 - 1] [i_2] [i_2 + 3] [i_2 + 2] [i_2] [i_2 + 1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = 3946432805;
    #pragma endscop
}
