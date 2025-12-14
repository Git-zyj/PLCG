/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_2] [i_1] = ((((min(var_3, 65527))) || (((arr_5 [i_0] [i_0]) < 5565609552781279492))));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((-(((330646296 >= var_15) << (((((arr_5 [i_0] [i_0]) ? var_1 : var_19)) + 607014197))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_15 [9] [9] = (max(((177803469 ? var_4 : var_10)), (((12881134520928272119 ? (3964320995 + 3176) : ((247 ? 330646286 : 3256712037)))))));
                                arr_16 [i_0] [i_1] [i_1] = (234 || 4294967283);
                                arr_17 [i_0] [1] [i_2] = ((var_1 || ((min(59549, 2)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_4;
    var_21 = var_19;
    #pragma endscop
}
