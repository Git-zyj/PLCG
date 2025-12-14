/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_15 += var_4;
        arr_3 [i_0] [i_0] = (max((((((var_3 ? var_2 : var_5))) ? var_5 : (max(var_8, var_4)))), var_4));
        var_16 &= ((((max((min(var_11, var_4)), ((min(var_12, var_3)))))) ? var_2 : (((max(var_6, var_7))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 23;i_3 += 1)
            {
                {
                    var_17 = max(var_2, (((~((max(var_11, var_8)))))));
                    var_18 = var_9;
                }
            }
        }
        arr_12 [i_1] [i_1] = (max((min((max(var_12, var_4)), -var_0)), ((max(((var_5 ? var_6 : var_6)), var_1)))));
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                {
                    var_19 = (max((((!var_11) ? (((var_8 ? var_9 : var_7))) : ((var_4 ? var_8 : var_10)))), (max(((min(var_7, var_1))), (min(var_7, var_4))))));

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_20 = min((min(var_0, -var_10)), ((var_6 ? -var_14 : ((var_6 ? var_0 : var_7)))));
                        var_21 = ((var_4 ? ((~((var_3 ? var_4 : var_3)))) : (max(var_14, var_5))));
                        var_22 = ((var_12 ? (min((((var_5 ? var_8 : var_6))), (min(var_2, var_8)))) : (max((min(var_11, var_0)), (((var_4 ? var_11 : var_13)))))));
                    }
                    var_23 = (((((((max(var_2, var_4))) ? ((var_5 ? var_1 : var_13)) : ((var_3 ? var_1 : var_13))))) ? var_10 : var_3));
                }
            }
        }
    }
    var_24 = ((((-var_7 ? (~var_11) : ((var_13 ? var_6 : var_1))))) ? (((var_1 ? var_6 : var_7))) : ((-var_1 ? ((var_2 ? var_11 : var_4)) : var_0)));
    var_25 = var_6;
    #pragma endscop
}
