/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((((var_15 ? var_7 : var_6))), (min(var_16, var_0))));
    var_20 = ((var_15 + (min((min(var_3, var_11)), (((var_9 ? var_9 : var_2)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((min(((~((var_14 ? var_0 : var_13)))), ((min(var_15, var_0))))))));
                                arr_13 [i_0] [i_3] [i_0] = ((((min(var_15, var_16))) ? (((min(var_12, var_16)))) : ((min(var_7, (min(var_2, var_0)))))));
                                arr_14 [10] [i_1] [i_1 + 1] [i_1] [i_0] [i_1] = (((var_8 != var_3) ? (var_9 >= var_16) : (var_6 <= var_16)));
                                arr_15 [i_0] [i_0] [i_0] [i_3] [i_4] = (((min(var_14, var_16)) > (var_18 == var_13)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_5] [i_2] [13] [i_0] = (min((var_11 + var_4), ((var_14 ? var_15 : ((min(var_9, var_1)))))));
                                arr_23 [i_0] [i_5] [i_0] = (((((var_9 ? ((var_6 ? var_2 : var_0)) : ((var_3 ? var_10 : var_0))))) | ((var_16 << ((((var_6 ? var_10 : var_12)) - 79))))));
                                arr_24 [i_0] [i_5] [i_2] [i_0] [9] [i_0] [i_0] = ((((var_2 == (var_3 >> var_4))) ? ((min((var_6 != var_0), var_9))) : (!30730)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        arr_33 [i_7] = (var_0 << var_1);
                        arr_34 [i_7] [i_7] [i_8] [i_7] [i_10] = (var_5 + -3936177141187559386);
                        arr_35 [i_7] = ((min(var_15, var_5)));
                    }
                    for (int i_11 = 1; i_11 < 21;i_11 += 1)
                    {
                        arr_38 [i_11] [i_7] [i_7] [i_7] = (((min(-3936177141187559418, 16695)) + (((var_0 * (((min(var_7, var_15)))))))));
                        arr_39 [i_7] [13] [i_9] [i_11] = (min((var_15 % var_15), -var_9));
                        var_22 = (min(var_22, (-789332338854358215 && -1)));
                        arr_40 [i_7] [i_11] = ((var_11 ? ((min(var_0, var_10))) : (var_4 * var_17)));
                    }
                    arr_41 [i_7] = ((((((var_15 % var_3) * ((var_7 ? var_9 : var_14))))) && (((((var_10 ? var_0 : var_17)) + (var_17 && var_17))))));
                    var_23 = (min(var_23, (((!(((min(var_2, var_17)))))))));
                    arr_42 [i_7] [i_8] = ((2145949278 >> (-1712678717 + 1712678730)));
                }
            }
        }
    }
    #pragma endscop
}
