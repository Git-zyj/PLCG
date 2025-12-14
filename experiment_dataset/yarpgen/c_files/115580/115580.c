/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-(min(var_7, ((max(var_7, var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] = 4294967285;
                                arr_15 [i_0] [i_0] = ((var_7 - 128) | ((-(arr_11 [i_1] [i_2 - 2] [i_2 - 3] [i_4] [i_4] [i_4] [i_2 - 2]))));
                            }
                        }
                    }
                }
                var_14 = ((-(max(1671514287332330140, -566865230))));
                arr_16 [i_0] [i_0] [12] = 49;
            }
        }
    }
    #pragma endscop
}
