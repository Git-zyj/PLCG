/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = (max(var_19, 0));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 = ((-(max((max(var_7, (arr_4 [i_2] [i_2] [i_2]))), (((8226211400355025967 <= (arr_1 [i_0]))))))));
                                var_21 = (max(var_21, (((-23325 / (arr_3 [i_0 - 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
