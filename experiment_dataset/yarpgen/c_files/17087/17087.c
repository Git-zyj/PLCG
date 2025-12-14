/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 = (arr_0 [i_0]);
                    arr_8 [6] [i_1] [i_2 - 2] = (-1 % var_11);
                }
            }
        }
    }
    var_16 = var_9;
    var_17 = var_4;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 19;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_18 = ((max(((var_1 ? var_11 : var_8)), var_4)));
                                var_19 = (min(var_19, var_11));
                                var_20 += (((((arr_23 [i_6] [i_6] [i_6] [i_6] [11] [i_6 + 1] [i_6 - 1]) ^ (-9223372036854775807 - 1))) >= (((~(var_14 % var_7))))));
                                arr_26 [i_3] = (((1 ? (~24) : var_10)));
                                var_21 = arr_20 [7] [i_3] [i_3] [i_3];
                            }
                        }
                    }
                    arr_27 [i_3] [i_3] [i_3] = (((max((((var_5 ? 25900 : (arr_19 [i_3] [i_3] [i_5 - 2])))), 1728394276))) & 9223372036854775807);
                    var_22 -= (((((arr_11 [i_5 - 1] [16]) & var_2)) ^ -672114264));
                }
            }
        }
    }
    #pragma endscop
}
