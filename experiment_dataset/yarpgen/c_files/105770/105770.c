/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((((max(var_0, (min(var_3, var_0))))) ? ((((min(var_0, var_7))) ? var_10 : ((var_2 ? var_10 : var_2)))) : var_5)))));
                var_14 = (max(var_14, (((var_1 ? (min(1, -1429921862010581105)) : (((min(var_1, var_6)))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_15 *= ((((((((var_8 ? var_4 : var_5))) ? ((var_9 ? var_8 : var_11)) : var_10))) ? ((max((min(var_10, var_0)), var_3))) : ((var_4 ? var_5 : var_1))));
                                arr_15 [i_0] [i_3] [i_1] [i_2] [2] [i_3] [i_4] = (max((((var_4 ? var_10 : var_4))), ((var_8 ? ((var_4 ? var_11 : var_8)) : var_4))));
                                arr_16 [i_4] [i_3] [i_3] [i_3] [i_1] [i_0] = var_8;
                                var_16 = (((((((max(var_9, var_2))) ? var_5 : ((var_11 ? var_8 : var_4))))) ? (max(((var_4 ? var_2 : var_3)), var_9)) : (((((var_11 ? var_5 : var_2))) ? var_5 : var_2))));
                                arr_17 [i_3] [i_3] [0] [0] [i_3] = (((((((min(var_3, var_8))) ? var_10 : ((var_5 ? var_7 : var_6))))) ? var_2 : ((var_6 ? (min(var_8, var_7)) : (min(var_8, var_9))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
