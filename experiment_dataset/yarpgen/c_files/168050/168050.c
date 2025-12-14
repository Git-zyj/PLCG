/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 *= (((~(arr_7 [i_1] [i_1] [i_0]))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 *= ((max((max(var_11, (arr_4 [i_0] [i_4])), (-1650739666424958734 && var_2)))));
                                arr_15 [i_0] [i_1] [i_2] [i_4] [i_4 - 1] = (((var_11 ? ((64512 / (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : 1650739666424958730))));
                                var_21 = ((((((((var_15 ? var_9 : -1650739666424958732))) ? -78 : (arr_0 [i_2])))) ? ((-((-(arr_8 [i_3 - 2]))))) : (arr_6 [i_0])));
                                var_22 = (min(var_22, (5594146246202075305 != 101)));
                                var_23 *= ((max((((-106 ? -4112 : (arr_12 [i_0] [i_1] [i_3])))), (~var_6))));
                            }
                        }
                    }
                    var_24 *= ((arr_5 [i_0]) * (!12852597827507476312));
                }
            }
        }
    }
    var_25 = (max((((var_10 & (~-65)))), ((var_11 ? ((var_6 ? 3623705108 : var_3)) : var_11))));
    #pragma endscop
}
