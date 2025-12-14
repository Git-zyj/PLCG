/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max(var_0, (var_5 % var_16))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = ((var_1 != (((var_16 & (arr_2 [0] [i_1]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = var_6;
                                var_20 = ((((var_12 / var_11) | (var_10 / var_3))));
                            }
                        }
                    }
                }
                arr_12 [i_1] = (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                arr_13 [i_0] [i_0] [i_0] = var_13;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_21 = (max(var_21, -var_4));
                            arr_20 [i_0] [i_1] [1] [20] = ((((((((arr_8 [i_6] [i_1] [1]) ? (arr_17 [i_0]) : var_5))))) - (min((min(var_9, (arr_18 [i_0] [i_6] [i_6] [i_6]))), var_10))));
                            var_22 = var_13;
                            var_23 += ((~((var_11 ? (((var_12 < (arr_8 [12] [i_0] [i_0])))) : ((((arr_0 [i_0]) != var_5)))))));
                        }
                    }
                }
            }
        }
    }
    var_24 = (min(var_24, ((((var_9 && var_2) ? (((((((var_5 ? var_0 : var_12))) || (((var_12 ? var_1 : var_10))))))) : ((((max(var_8, var_5))) ? (min(var_6, var_3)) : ((var_3 ? var_11 : var_14)))))))));
    #pragma endscop
}
