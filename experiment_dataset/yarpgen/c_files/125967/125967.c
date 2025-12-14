/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 ^= var_11;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] [i_1] [i_2] [i_3] = (29433 >= var_2);
                            arr_11 [i_2] [i_1] [1] [12] = 9456;

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                var_16 = ((max(var_1, 524287)));
                                arr_14 [i_0 + 2] [i_1] [i_2] [i_3 - 1] [15] = ((((max(var_8, (var_6 < var_3)))) << 4294443007));
                                var_17 = var_1;
                                arr_15 [i_1] [i_2] [i_3] = var_1;
                            }
                            arr_16 [i_2] = 4095;
                        }
                    }
                }
            }
        }
    }
    var_18 |= (((max(var_8, var_11)) / (((-2655361126365598784 + 9223372036854775807) << (11140839332867687391 - 11140839332867687391)))));
    #pragma endscop
}
