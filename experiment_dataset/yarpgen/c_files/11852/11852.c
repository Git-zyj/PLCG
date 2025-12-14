/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] |= (((((((var_6 ? var_2 : var_4))) && -var_7)) ? (min((!var_1), var_19)) : (~var_18)));
                var_21 = (((~var_2) ? ((var_16 ? var_11 : var_0)) : 0));
                var_22 = (((!var_10) ? var_8 : (((((var_8 ? var_3 : var_2))) ? var_19 : var_7))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            {
                var_23 = (min(var_23, ((((-var_4 ? var_1 : (~var_9))) & (~var_0)))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 7;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_24 ^= (max((max(var_4, var_16)), ((min(var_6, var_16)))));
                            var_25 = (max(var_25, ((((-var_16 && ((max(var_15, var_9)))))))));
                            var_26 = (min(var_26, ((((~var_2) ? ((~((var_4 ? var_3 : var_0)))) : var_1)))));
                        }
                    }
                }
                var_27 ^= max(((var_13 ? var_4 : var_1)), ((min(var_2, var_19))));
            }
        }
    }
    #pragma endscop
}
