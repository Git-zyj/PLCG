/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_12 ? var_16 : ((((min(var_16, var_1))) ? var_17 : (min(var_13, var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = var_0;
                arr_6 [i_0] [i_0] = ((((min(((var_11 ? var_13 : var_7)), (min(var_16, var_13))))) ? (max(var_8, var_1)) : ((min(var_0, (min(var_14, var_5)))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                {

                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        arr_17 [i_2] = var_9;
                        arr_18 [i_5] [i_2] [1] [i_3] [i_2] [i_2] = ((((max((max(var_1, var_11)), (max(var_13, var_2))))) ? (~var_10) : ((min(var_3, var_9)))));
                    }
                    arr_19 [i_2] [i_2] [15] [i_2] = var_10;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((var_9 ? ((max(((var_7 ? var_17 : var_10)), var_6))) : ((var_15 ? var_17 : var_1)))))));
                                arr_26 [i_7] [i_2] [12] [i_2] [i_2] = ((((min(var_17, var_4))) ? var_14 : ((-((var_16 ? var_16 : var_9))))));
                            }
                        }
                    }
                    var_21 = min(var_14, var_4);
                    arr_27 [i_2] [i_4] [4] [i_2] = ((((max(var_3, var_13))) ? var_13 : ((min(var_16, var_11)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                {
                    arr_36 [i_8] [i_9] [i_10] [i_9] = var_4;
                    arr_37 [1] [6] [8] [6] = (((((var_11 ? var_15 : (min(var_11, var_9))))) ? ((var_7 ? var_1 : var_6)) : (((-((var_10 ? var_2 : var_10)))))));
                }
            }
        }
    }
    var_22 &= (min(var_12, (min(var_7, (min(var_1, var_8))))));
    #pragma endscop
}
