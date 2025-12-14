/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (((((1043574980 ? 2309 : 16777215))) ? var_17 : var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((max(((((arr_2 [i_1 + 1]) >= (arr_4 [i_0] [i_1 + 1])))), (min(var_12, var_12)))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_19 ^= (max((((var_14 && (arr_3 [i_1 + 1] [i_1 - 1])))), (max(13330, -7066142098728766529))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_20 = var_15;
                                var_21 &= var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_8;
    #pragma endscop
}
