/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 |= -15404;
                    var_19 = (max(var_19, (((((max(19749, 19749))) ? ((max(3841, var_8))) : (((!((min(-12169, 19751)))))))))));
                    var_20 = 32759;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_21 = 19749;
                                var_22 = (var_8 + -13768);
                                var_23 = ((var_13 ? var_12 : ((max((var_8 == var_6), var_0)))));
                                var_24 = (max(var_24, 0));
                                arr_14 [1] [i_1] [i_2] [i_3] [i_4 - 2] = (((var_5 + -19775) ? (((!7168) ? ((max(var_1, var_15))) : (var_16 == 2))) : 9));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (max(var_2, -var_1));
    #pragma endscop
}
