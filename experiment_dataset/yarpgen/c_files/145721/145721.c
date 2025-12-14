/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-127 - 1);
    var_12 = -94;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    var_13 &= var_3;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_14 = var_7;
                                arr_12 [i_0] [i_0] [i_0] [i_2] [3] = (((arr_4 [i_3] [i_2]) ^ ((((((((arr_6 [i_2]) ? (arr_0 [i_2]) : 110))) == -4294967295))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
