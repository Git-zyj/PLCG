/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_16 = (max(var_16, ((min((((((-(arr_3 [i_0] [i_1] [0]))) != (arr_4 [i_0] [i_0] [i_1] [i_2])))), var_4)))));
                    var_17 = ((((2611083120 ^ 5090) ? var_1 : var_8)));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    arr_9 [i_0] [i_0] [i_3] = (min(((min(3742789635, 3742789629))), 20917));
                    var_18 ^= (-(max(3742789635, (max(var_5, 11198)))));
                }
                arr_10 [i_0] [i_1] = (min(((((arr_5 [i_0]) * (arr_6 [i_0] [i_0] [i_0] [i_1])))), (min(-552177667, (var_0 < 0)))));
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_19 = ((-((min(-5554, 5530)))));
                                var_20 *= (max((((5565 ? (arr_5 [i_4 - 3]) : (arr_5 [i_4 - 3])))), (4658875611245487851 / var_2)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
