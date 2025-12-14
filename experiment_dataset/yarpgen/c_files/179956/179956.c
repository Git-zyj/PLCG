/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((4194303 ? 522650567601680760 : -4194298));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 = 17376;
                                arr_12 [i_0] [i_3] [i_1] [i_1] [i_0] [i_0] = ((~(((!41) ? (arr_11 [i_0] [i_1] [i_2] [1] [i_1] [i_2 - 2]) : ((((!(arr_11 [i_0] [i_0] [i_1] [i_1] [i_3] [i_1])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 -= (((~(~65535))));
    var_16 = var_2;
    #pragma endscop
}
