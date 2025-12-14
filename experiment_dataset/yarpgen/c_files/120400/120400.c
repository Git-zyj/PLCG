/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = 1;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_16 [i_3] = 0;
                                var_16 = 16942188011597381511;
                                arr_17 [i_2] [i_2] [1] [i_2] [i_3] = 10313705291756510174;
                                arr_18 [i_0] [i_3] = 10313705291756510174;
                                arr_19 [i_3] [8] [i_2] [i_3] = 0;
                            }
                        }
                    }
                }
                arr_20 [i_0] = -1072651329474402707;
                arr_21 [i_0] = 1;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                var_17 &= -1456968161708016856;
                arr_26 [i_5] [i_5] [i_6] = 18446744073709551615;
            }
        }
    }
    #pragma endscop
}
