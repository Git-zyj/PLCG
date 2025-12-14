/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] = var_13;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_19 |= ((((min(var_5, (arr_3 [i_0] [i_1] [i_2])))) - var_10));
                            var_20 = (max(var_7, (((~((var_5 ? var_18 : (arr_5 [i_0] [i_1] [i_3]))))))));
                        }
                    }
                }
                var_21 = (max(var_21, var_5));
                var_22 = (min(var_22, var_6));
            }
        }
    }
    var_23 -= ((~(min((45528 <= var_14), var_15))));
    var_24 = var_4;
    var_25 = (min(-8366178373827664667, (((var_17 ? 1265250319 : var_17)))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            {
                var_26 = ((var_17 ? (((((15 ? var_4 : -3125))) ? var_9 : ((var_13 * (arr_12 [i_5]))))) : var_3));
                arr_16 [i_5] [i_5] = (!var_2);
                var_27 = (min((((var_9 | (((arr_15 [i_5] [14]) | var_2))))), (((((var_0 ? var_14 : var_4))) ? 18 : 104))));
            }
        }
    }
    #pragma endscop
}
