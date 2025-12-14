/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = ((((((arr_2 [i_0] [i_0] [i_1]) / (arr_2 [i_0] [i_0] [i_0])))) ? ((-(arr_3 [i_0] [i_0] [i_1]))) : (((arr_3 [i_0] [2] [i_0]) / (255 / 1)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_11 [12] [12] |= (12 & 255);
                                var_21 |= (arr_8 [i_0] [i_1] [5]);
                            }
                        }
                    }
                }
                arr_12 [i_0] = ((((arr_3 [i_0] [i_1] [i_1]) >= var_0)));
            }
        }
    }
    var_22 = 1;
    var_23 = ((!((max(181, -var_5)))));
    #pragma endscop
}
