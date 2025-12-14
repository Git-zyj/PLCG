/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((max((max(var_4, 24)), (((var_10 ? var_8 : 1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (((arr_2 [i_0] [i_1]) < 2047));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 = ((!((((arr_9 [i_1] [i_3] [i_2] [i_1]) & (arr_9 [i_1] [i_2] [i_1] [i_4]))))));
                                var_20 = (min(var_20, (((-113 + 2147483647) << (((~3377807616651713578) - 41941))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = ((-(((arr_13 [i_0]) >> (3377807616651713578 - 3377807616651713567)))));
                                arr_17 [i_0] [i_1] [19] [i_1] &= (((var_5 ? (arr_3 [i_1] [i_1]) : (arr_3 [i_3] [i_0]))));
                            }
                        }
                    }
                }
                var_21 = (max(((((63481 ? 3377807616651713578 : 15068936457057838037)) | (~var_5))), (((-(748471594325662621 > 6785387882101764954))))));
            }
        }
    }
    var_22 = var_11;
    #pragma endscop
}
