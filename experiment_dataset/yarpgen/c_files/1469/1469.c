/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_8;
    var_15 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        var_16 = var_9;
                        var_17 = (max(((min(var_12, (max(var_10, var_8))))), (((((var_8 ? var_3 : var_12))) ? ((var_8 ? var_2 : var_12)) : ((min(var_1, var_10)))))));
                    }
                    for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_18 = (((((var_6 ? var_7 : var_6))) ? ((var_2 ? var_6 : var_8)) : ((var_5 ? var_2 : var_5))));
                        arr_13 [i_4] = var_7;
                    }
                    for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        var_19 = ((var_9 ? ((min(var_1, var_8))) : (min(88, -499514954))));
                        var_20 = (min(var_20, ((min(-8029044860280840702, -499514954)))));
                        var_21 = (((((var_6 ? ((var_3 ? var_6 : var_11)) : var_9))) ? ((499514963 ? 8029044860280840732 : 499514955)) : (((var_5 ? var_7 : var_13)))));
                        var_22 = (min(var_22, var_8));
                    }
                    var_23 = (min(var_23, var_5));
                }
            }
        }
    }
    #pragma endscop
}
