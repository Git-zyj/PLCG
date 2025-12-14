/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((min(((var_0 ? var_16 : -118)), var_3)) == var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = (((var_12 && var_13) ? (var_1 && var_18) : ((var_10 ? var_15 : 27363))));
                    var_21 = (((((var_17 ? ((121 ? var_14 : var_16)) : 117))) ? ((var_18 ? var_11 : ((max(var_12, var_3))))) : ((max(var_1, var_13)))));
                    arr_8 [i_0] [i_1] [i_2] [14] |= ((((max(((min(var_3, var_7))), ((var_4 ? var_7 : var_14))))) ? var_9 : var_12));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] = -118;
                                var_22 = (((-99 ? ((19592 ? var_1 : var_9)) : ((min(-118, var_5))))));
                                var_23 = ((((((max(var_8, var_8))) ? ((min(var_14, var_5))) : ((max(-23471, var_10))))) > var_5));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = min(-3995, 141);
    var_25 = var_11;
    #pragma endscop
}
