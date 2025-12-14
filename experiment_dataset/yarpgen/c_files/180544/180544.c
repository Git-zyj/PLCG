/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 += max(((~(((arr_7 [i_2] [i_1] [i_2] [i_2]) ? var_16 : (arr_1 [7]))))), 28778);

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_19 -= var_4;
                        arr_10 [i_1] [i_1] [i_2] [i_3] = ((((~(arr_6 [i_0] [i_0]))) - (((var_4 ? (var_3 < var_9) : (~var_10))))));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_20 = ((~(max(((var_7 ? var_6 : var_6)), (~var_6)))));
                        arr_13 [i_0] [i_1] [i_2] [i_1] = ((max(var_5, -3700608617089018078)));
                        var_21 += (((((((var_7 ? var_4 : var_14)) | ((var_7 ? var_16 : var_13))))) ? ((max((max(var_15, var_13)), ((var_6 ? var_10 : var_4))))) : (max(var_11, (arr_7 [i_0] [i_1] [i_2] [i_4])))));
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_18 [i_1] [i_1] = (arr_4 [i_0] [i_1]);
                        var_22 ^= var_10;
                        arr_19 [i_0] [i_0] [6] [i_1] = (((var_14 | var_8) ? (max(((318281697 ? var_10 : 88)), (max(var_5, var_9)))) : ((max((max(var_8, 0)), var_4)))));
                        var_23 = ((7822176937925356081 << (1984 - 1938)));

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_22 [i_1] [i_1] [i_5] [i_6] = (max((((~(var_11 == var_10)))), (max(var_3, var_7))));
                            var_24 = var_15;
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_1] = (((((((max(-5797738885655872418, 246))) ? var_16 : (max(2255922384, var_11))))) + var_4));
                            var_25 = (max(var_25, (arr_1 [i_0])));
                        }
                        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                        {
                            arr_30 [i_0] [i_0] [9] [i_0] [12] [i_1] [i_0] = 1407242442;
                            arr_31 [i_0] [i_8] [i_1] [i_5] [i_8] = var_4;
                        }
                    }
                    var_26 = var_6;
                }
            }
        }
    }
    var_27 = ((var_7 ? var_17 : (((-318281698 ? var_16 : var_1)))));
    #pragma endscop
}
