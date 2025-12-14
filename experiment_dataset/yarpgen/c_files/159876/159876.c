/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(-183, (!-var_7)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 = (47 & 1504253564);
                                arr_13 [i_0] = ((-(max(58, -21514))));
                            }
                        }
                    }
                    var_21 *= (((((var_7 >= var_18) | var_10)) == ((-(var_4 | var_10)))));
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    var_22 = (~-21512);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_23 = 2559180478;
                                var_24 = var_17;
                                var_25 = -var_1;
                            }
                        }
                    }
                }
                for (int i_8 = 2; i_8 < 19;i_8 += 1)
                {
                    arr_23 [i_0] = (max(var_7, (!171)));
                    arr_24 [i_0] [i_0] [i_1] [i_0] = ((((var_11 <= (var_0 * var_2)))));
                    arr_25 [i_0] = ((((var_1 && ((max(var_9, var_2))))) && (((var_6 >> (var_13 - 1031855481558419091))))));
                    var_26 = ((max(var_10, (!var_12))));
                }
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_27 = (~var_5);
                            arr_31 [i_0] [i_9] = (min(-var_13, (((var_8 << (var_11 - 51))))));
                            arr_32 [i_0] [i_0 - 1] [i_1] [i_9] [i_0] = (~-99);
                        }
                    }
                }
                var_28 = (((max(var_16, var_17)) & -var_1));
            }
        }
    }
    var_29 = var_12;
    var_30 = (min(-var_13, ((((-21439 <= 48) > -var_1)))));
    #pragma endscop
}
