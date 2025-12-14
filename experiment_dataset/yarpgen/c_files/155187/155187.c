/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (max((max(((max(63, var_13))), (max(var_14, var_0)))), ((((min(var_4, (-2147483647 - 1))) == 2147483647)))))));
    var_21 = (((-2147483647 ? (max(1544080996, var_8) : ((var_17 ? var_8 : 1544081007))))));
    var_22 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = 2147483647;
                arr_6 [i_0] = (min((((max(var_13, var_4)))), ((((arr_0 [i_0]) ? var_5 : 26948)))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_23 = (min(var_23, ((((((min((arr_3 [i_0] [i_0]), (~var_5))) + 2147483647)) >> (((((arr_3 [i_0] [i_4 + 1]) ? (((2482 << (((arr_13 [1] [i_1 - 2] [i_2] [i_0] [i_0] [i_3] [1]) + 20712))))) : (max((arr_10 [i_3]), (arr_2 [i_1 - 2] [i_3] [i_4 + 1]))))) - 158822)))))));
                                var_24 = (min(var_24, ((((((((min((arr_3 [i_4] [i_0]), var_16))) ? ((2147483647 ? (-2147483647 - 1) : (arr_8 [i_3] [i_3] [3]))) : ((var_9 ? 1544080996 : var_9))))) ? (~var_10) : -255)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (max(var_25, 3426));
    #pragma endscop
}
