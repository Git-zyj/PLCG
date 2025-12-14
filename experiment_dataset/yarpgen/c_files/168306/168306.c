/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [i_3] [i_3] [i_3] [1] [i_3] [i_0] = ((~(arr_10 [i_0] [i_2] [i_0])));
                                var_20 += ((min((((1 > (arr_6 [i_0] [i_2])))), (~1))));
                                arr_13 [i_4] [i_1] [i_1] [i_3] [i_0] = ((-(arr_0 [i_3] [i_0])));
                                var_21 *= (arr_5 [i_2] [i_2]);
                                var_22 = (min(((~(arr_11 [15] [15] [15] [i_3] [i_3] [i_3] [i_3]))), (arr_5 [i_0] [i_3])));
                            }
                        }
                    }
                }
                var_23 &= var_11;
            }
        }
    }
    var_24 = (~var_11);
    var_25 |= 4278190080;
    #pragma endscop
}
