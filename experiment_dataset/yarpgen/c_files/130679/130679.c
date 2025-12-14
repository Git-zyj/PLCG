/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = (((min(var_10, var_1))) ? ((max(var_10, var_5))) : var_8);
        var_13 |= (min(var_2, ((var_4 - (var_6 != var_3)))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [11] = (min(((var_12 >> (var_11 + 11253))), (((var_1 != var_10) ? ((max(var_7, var_5))) : var_9))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] = ((((min(((max(1, 188))), (min(var_0, var_6))))) ? var_11 : var_10));
                                arr_16 [i_0] [i_1] [i_4] = var_4;
                                var_14 = (min((min((max(var_1, var_9)), (var_5 || var_10))), var_7));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 24;i_5 += 1)
    {
        var_15 = var_4;
        var_16 = ((var_5 ? var_1 : var_12));
    }
    var_17 += (max(var_7, ((((max(var_2, var_8))) ? (var_3 - var_12) : ((max(var_2, var_5)))))));
    #pragma endscop
}
