/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] |= ((87 << (((((arr_0 [i_1]) ? 41 : (arr_3 [i_1]))) & (-32767 - 1)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_17 = 127;

                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                arr_14 [14] [14] [i_2] [11] [i_2] = ((-(((((-(arr_10 [i_0] [i_3] [i_2] [i_4] [15])))) ? (min(var_0, var_11)) : (var_10 + var_5)))));
                                var_18 = 3184992664;
                                var_19 = ((var_14 < (((var_2 / var_0) / (55 * 1)))));
                                arr_15 [6] [15] [i_2] [i_3] [i_4] = (arr_0 [8]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 += ((((((min(1628043775, var_3)) - var_9))) ? (~var_10) : 3072));
    var_21 = 64;
    #pragma endscop
}
