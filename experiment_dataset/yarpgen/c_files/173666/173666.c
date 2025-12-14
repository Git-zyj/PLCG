/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 *= var_5;
                arr_5 [i_0] = var_5;
            }
        }
    }
    var_21 = (max(var_21, ((((((((var_12 ? var_3 : var_12)) >> ((((var_11 ? var_1 : var_7)) - 12259212757422401344))))) ? (max(((min(var_18, var_15))), (min(var_0, var_16)))) : ((((((var_12 ? var_0 : var_1)) == (((var_4 ? var_0 : var_12))))))))))));
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 23;i_4 += 1)
            {
                {
                    var_22 = (min(var_4, (((!(!var_10))))));
                    var_23 |= ((((max((arr_9 [i_4 - 1]), var_6))) ? (((((var_7 ? (arr_6 [i_3]) : (arr_6 [i_2 - 1])))) ? ((var_1 ? (arr_11 [i_2] [i_3] [i_4]) : var_17)) : var_4)) : var_11));
                }
            }
        }
    }
    var_24 += ((((max((var_17 || var_14), ((-3853771488903937124 ? var_10 : var_17))))) ? var_9 : ((((!var_0) ? (((var_17 ? var_7 : var_18))) : var_13)))));
    #pragma endscop
}
