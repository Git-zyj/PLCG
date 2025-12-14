/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_7 ? var_0 : (89 || var_8)));
    var_12 = 5428;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_13 ^= -52;
                                arr_14 [6] [i_1] [i_0] = (((((4294967281 * (60 > 170)))) && 51));
                                arr_15 [i_2] [i_2] = ((170 ? ((min(0, var_9))) : var_0));
                            }
                        }
                    }
                }
                arr_16 [i_0] = 5;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    var_14 &= (max((((var_3 ? 59039 : (arr_22 [i_7] [i_6] [i_5 - 1] [i_5])))), -var_9));
                    var_15 = (arr_20 [i_5] [13] [i_5]);
                }
            }
        }
    }
    var_16 = 135;
    #pragma endscop
}
