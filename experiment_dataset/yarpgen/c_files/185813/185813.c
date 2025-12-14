/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((max((((min(var_9, var_7)))), (max(((var_6 ? var_5 : var_12)), var_17)))))));
    var_21 = ((!((max((((var_11 ? -23085 : var_1))), ((22765 ? var_10 : var_15)))))));
    var_22 &= (max(((8 ? ((var_14 ? var_5 : var_17)) : 86)), var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_2] [i_3 - 1] [i_4] = var_7;
                                var_23 = (min(23084, var_16));
                            }
                        }
                    }
                    var_24 = ((~(max((!2793560640), (~39968)))));
                }
            }
        }
    }
    #pragma endscop
}
