/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_8, (min(var_17, ((var_14 ? var_3 : var_4))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 = (max((!-var_0), -7855));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_22 += (min(-1751336850, -78081520));
                            arr_17 [i_3] [i_3] = (5 >= -289754356);
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_23 ^= var_19;
                            var_24 = ((-var_1 * ((((10 ? var_4 : var_13))))));
                            var_25 ^= (((((((var_14 >= (arr_6 [i_0] [i_0] [i_0])))) * (((42 <= (arr_16 [i_0] [i_0 + 2] [i_2] [i_0] [i_0 - 1]))))))) ? (arr_4 [i_2]) : var_5);
                            var_26 = (min(var_26, 3));
                        }
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            arr_22 [i_3] [i_3] = (arr_1 [i_2]);
                            var_27 = (254 % var_1);
                            arr_23 [i_0] [i_0] [i_3] = ((~(((arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_6 - 1]) ? (arr_9 [i_0 + 2] [i_0 + 1] [7] [i_6 + 2]) : (arr_5 [i_0 - 1] [i_0 + 1])))));
                            var_28 = ((+((var_14 ? (arr_16 [i_0 + 1] [i_6] [i_3] [i_6 + 2] [i_6 + 2]) : (arr_0 [i_0 - 1])))));
                            var_29 &= (min(7855, -7876));
                        }
                        var_30 = -3238866632127273594;
                        arr_24 [i_3] [i_1] [i_1] = 0;
                    }
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        var_31 = ((((-(((-2147483647 - 1) ? 1720452317967617936 : 7855)))) * var_12));
                        arr_27 [i_0 + 1] [5] [i_2] [i_7] = max(((-(min(var_10, var_13)))), (((((1 + (arr_16 [i_0] [i_0] [i_2] [i_2] [i_7 - 1])))) ? ((~(arr_11 [5] [10] [i_1] [i_0 + 1] [i_0]))) : (!-27741))));

                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            var_32 = (((((((-27740 & (arr_6 [i_2] [i_7] [i_8])))) ? 18446744073709551610 : ((min((arr_14 [i_1] [i_2] [i_7] [i_8]), -20467))))) - (arr_2 [i_7])));
                            var_33 = -1814163328;
                            var_34 = ((var_2 ? var_2 : 15417));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
