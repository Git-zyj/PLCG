/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    var_11 &= var_6;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = ((~(min(var_8, (var_8 % -22844)))));
        arr_3 [i_0] = (min(((max(var_1, ((~(arr_1 [i_0] [i_0])))))), ((-(max(-30888, (arr_0 [8])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = -22862;
                    var_14 &= (min((((((var_4 ? var_7 : var_5))) ? (arr_7 [i_0] [i_0] [i_0]) : ((var_3 ? 2298204226 : var_0)))), 1996763070));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            {
                arr_15 [i_3] [i_3] &= (arr_11 [15]);
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {

                            for (int i_7 = 1; i_7 < 15;i_7 += 1)
                            {
                                var_15 |= (min(((((var_7 ? var_8 : var_1)))), (~var_6)));
                                var_16 = ((((((min(var_4, var_7))) ? ((var_6 ? var_6 : 1996763057)) : (((var_1 ? var_2 : (arr_12 [i_3] [i_4]))))))) ? var_7 : (((((arr_21 [13] [i_3 + 2] [i_4 - 1] [i_5 - 1] [i_5] [i_6] [i_7]) ? 31055 : -10858)) + var_2)));
                            }
                            for (int i_8 = 2; i_8 < 15;i_8 += 1) /* same iter space */
                            {
                                var_17 = (min(var_17, var_3));
                                var_18 = (min(4110940433, ((1036213256 ? ((2298204251 ? var_0 : var_6)) : ((min(3125623477, var_8)))))));
                                var_19 *= var_5;
                                var_20 = (min(var_20, var_3));
                                var_21 = (max(var_21, var_0));
                            }
                            for (int i_9 = 2; i_9 < 15;i_9 += 1) /* same iter space */
                            {
                                arr_27 [i_3] [i_3] [i_6] [i_6] [i_9 + 1] [i_3] = (max(((((arr_19 [i_3 - 1] [i_4] [i_6] [i_9]) || var_7))), 30917));
                                arr_28 [i_3] [i_4] [i_6] [i_6] [i_9] = (arr_18 [12]);
                            }
                            /* vectorizable */
                            for (int i_10 = 2; i_10 < 15;i_10 += 1) /* same iter space */
                            {
                                var_22 = ((var_3 ? (arr_26 [i_3] [7] [i_6] [i_6] [i_3] [i_4]) : ((var_3 ? var_3 : 3615131720))));
                                arr_33 [i_6] [i_6] [i_10 + 1] = -var_5;
                                var_23 = ((var_7 ? var_1 : (arr_9 [i_3] [i_3])));
                                var_24 += (arr_18 [i_3]);
                            }
                            var_25 += (max((220 & var_4), (arr_20 [2] [i_3] [i_4])));
                        }
                    }
                }
                arr_34 [i_3] [i_4] [i_3] = 1610368453;
            }
        }
    }
    var_26 = var_5;
    #pragma endscop
}
