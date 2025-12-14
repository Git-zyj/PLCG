/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((4915759054707851740 ? ((var_1 ? 16970 : var_4)) : ((255 ? 48566 : var_11))))) ? 156 : var_11));
    var_16 = var_14;
    var_17 |= var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 = 239;
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = (((((var_9 ? var_11 : 251))) ? ((100 ? 60601 : (-2147483647 - 1))) : ((48566 ? 40162 : var_9))));
                            }
                        }
                    }
                }
                var_19 = (((((60608 ? 13 : 48566))) ? (((4935 ? 114 : 156))) : ((var_7 ? 16376 : ((96 ? 57344 : 3955953309))))));
                arr_13 [i_0] = (((((var_0 ? 3242 : 1758724998))) ? var_1 : (((var_0 ? var_12 : 30303)))));
            }
        }
    }
    #pragma endscop
}
