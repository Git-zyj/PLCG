/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;
    var_17 = 3293916832;
    var_18 = (min(var_11, (((-47 * var_8) ? (-74 + var_6) : var_9))));
    var_19 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 = -44;
                                var_21 = (min(var_21, 173));
                            }
                        }
                    }
                    var_22 = 4079699741;
                    arr_15 [i_0] = (min(((((min((arr_10 [i_0] [i_1] [i_1] [i_2]), (arr_11 [i_0] [i_0] [i_2] [i_1])))) ? ((~(arr_3 [i_0] [i_1] [i_0]))) : 0)), (!759157405)));
                }
            }
        }
    }
    #pragma endscop
}
