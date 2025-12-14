/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1 + 2] [i_0] = (var_1 - var_5);
                arr_6 [i_1] [i_1] = (((max((arr_3 [i_1] [i_1 + 3] [i_1 - 1]), -9223372036854775805)) >= ((max(1487472331, 13)))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] = ((var_3 ? (max(((-5124966154065983479 ? 7710 : 13299)), (var_10 - 160))) : (max(var_4, 1223278106))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_12 ^= (((((max(2147483647, 240))) > -9158581106939811586)));
                                var_13 = var_2;
                            }
                        }
                    }
                    var_14 = ((((var_10 ? (arr_3 [12] [7] [i_1 - 2]) : var_3)) * var_6));
                    var_15 = -var_5;
                }
                var_16 *= -22;
                var_17 += var_4;
            }
        }
    }
    var_18 = (max(((var_10 ^ (var_2 ^ var_7))), (((~(var_10 | -11089))))));
    var_19 = var_1;
    #pragma endscop
}
