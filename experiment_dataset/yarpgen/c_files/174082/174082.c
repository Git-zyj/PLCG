/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_1] [i_2] [i_2 - 1] [i_3] [22] = 9223372036854775803;
                                arr_20 [i_0] [i_1] [i_0] [i_3] [i_4] = 9223372036854775803;
                                var_14 -= -5778075767153664928;
                            }
                        }
                    }
                }
                var_15 = (-9223372036854775807 - 1);
                arr_21 [i_0] [i_1] = 1810595086;
            }
        }
    }
    var_16 |= var_2;
    var_17 = var_6;
    var_18 |= var_8;
    var_19 = var_8;
    #pragma endscop
}
