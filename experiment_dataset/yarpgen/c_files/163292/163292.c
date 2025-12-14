/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    var_21 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = ((((((!1) ? 1 : (min(9, 2875676781))))) ? (((12 ? 23005 : 21616))) : ((~((22995 ? 1 : var_7))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_2] [i_2] [i_1] = ((!(((1 ? 16994 : ((max(var_14, -21614))))))));
                                arr_14 [i_1] = ((~((var_1 ? ((var_9 ? 512 : 1)) : (-32764 == -22990)))));
                                arr_15 [i_1] [i_1] [i_1] [i_1] [i_3] [i_1] = 1;
                            }
                        }
                    }
                    arr_16 [i_1] [i_0] [i_0] [i_0] = (((max(7439, (-9223372036854775807 - 1)))) ? ((var_15 ? -1 : 2047)) : ((-21 ? 32768 : 177)));
                }
            }
        }
    }
    #pragma endscop
}
