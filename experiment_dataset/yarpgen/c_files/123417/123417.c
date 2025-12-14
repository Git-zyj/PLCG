/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_2] [1] [i_3] [i_4] = var_2;
                                var_18 = ((((min(89, 689475203))) ? (((var_9 || (-2147483647 - 1)))) : var_3));
                                arr_16 [13] [i_2] = (max(((-671291948 ? (!var_4) : ((var_1 ? -18236 : 671291948)))), var_1));
                                arr_17 [i_2] [i_1] [i_1] [13] [13] [i_4] = ((((max(var_12, var_6))) ? (~var_17) : ((var_5 ? var_10 : var_0))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_1] [i_2 + 2] [i_2 + 2] [i_2] = (((min(16760832, 284465567)) + -var_10));
                                var_19 = (min(var_19, ((min(var_3, 59)))));
                                var_20 += var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (((max(var_17, (min(var_8, var_9)))) >= (~-112)));
    var_22 = (-127 - 1);
    #pragma endscop
}
