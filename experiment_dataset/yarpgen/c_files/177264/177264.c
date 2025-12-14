/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 &= ((~(!-5)));
                                var_20 = (max(var_20, (arr_1 [i_4])));
                            }
                        }
                    }
                    var_21 = (min((((15 != (arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1])))), (((arr_8 [3] [i_0 + 2] [i_0] [i_0 - 1] [13] [i_2] [i_0 + 2]) ? (arr_5 [i_0 - 2] [i_0 - 2] [i_0]) : (((min((arr_7 [i_2] [i_2] [i_2]), (arr_2 [i_0 + 1] [13])))))))));
                }
                var_22 = (arr_9 [i_0] [i_0] [i_1] [i_0] [i_1] [i_0 - 1] [i_0]);
                var_23 -= (((28462 == 5) || 3938486409874011149));
            }
        }
    }
    #pragma endscop
}
