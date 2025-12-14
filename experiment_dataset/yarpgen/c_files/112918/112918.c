/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (~var_8)));
    var_11 = (min(var_2, (255 + 3239401270516739997)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_2] = (min(((var_2 ? var_4 : var_9)), (((var_9 ? var_4 : var_7)))));
                    arr_7 [i_2] [i_1] [i_1] [i_2] = (var_3 + var_6);
                    arr_8 [i_0] [i_0] [i_2] = var_8;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_12 = (((-3239401270516739997 - -3239401270516739993) | 3239401270516739991));
                                var_13 -= ((var_5 ? (max(var_0, var_0)) : var_1));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_14 = (max(var_14, ((var_3 ? (max(12, 41561)) : ((min(var_0, var_0)))))));
                                var_15 = ((((min(var_6, var_7))) % ((max(var_1, var_2)))));
                                arr_18 [i_0 + 3] [i_1 - 1] [i_1 - 1] [i_5] [i_2] = ((~((-((var_0 ? var_7 : var_9))))));
                                var_16 = ((16044698934885576741 ? ((((min(var_6, var_5))) ? (((var_8 ? var_7 : var_1))) : var_9)) : (max((min(var_9, var_5)), var_6))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
