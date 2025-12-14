/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_0] = ((var_12 > var_0) ? ((((~var_13) > var_5))) : var_14);
                            var_15 = (((((~var_10) ? (!var_0) : ((var_13 ? var_13 : var_6))))) ? ((~((var_11 ? var_14 : var_5)))) : ((-(var_3 > var_4))));
                        }
                    }
                }
                arr_10 [i_0] [11] [1] = var_0;
                arr_11 [i_0] [i_0 + 1] [i_0] = ((!((!(!var_9)))));
            }
        }
    }
    var_16 = var_2;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 9;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_17 = ((((((var_3 ? var_5 : var_0)) > var_3)) ? ((((~var_12) > ((var_7 ? var_14 : var_10))))) : var_13));
                            arr_22 [i_5] [i_5] [i_6] [i_5 - 2] [i_6] [i_4] = (56324 > 0);
                        }
                    }
                }
                var_18 = (((((-var_1 ? (var_3 || var_7) : ((var_10 ? var_12 : var_6))))) ? (18446744073709551615 > 18446744073709551615) : var_5));
                arr_23 [i_5] = (((var_3 > -var_12) ? (((var_10 ? var_7 : var_0))) : ((var_13 ? var_1 : var_13))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 24;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        {
                            arr_34 [i_8] [9] [i_10] [i_10 + 1] [i_10 + 1] = ((18446744073709551595 ? 50095 : 193));
                            arr_35 [i_8] [i_9] [i_10] [i_9] = ((((var_4 ? var_11 : ((var_12 ? var_14 : var_6))))) || ((((50095 ? 206 : 65535)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        {
                            arr_43 [i_13] [i_9] [i_9] [i_12] = var_8;
                            arr_44 [i_9] [i_9] [i_9] [i_9] [i_12] [i_9] = var_6;
                            arr_45 [i_12] [i_9] [i_9] [i_12] = ((19 ? 21 : 18446744073709551580));
                        }
                    }
                }
                arr_46 [21] [i_8] [i_9] = (((((var_9 ? ((var_7 ? var_3 : var_13)) : (~var_14)))) || (((var_4 ? var_2 : (var_13 || var_3))))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 23;i_15 += 1)
                    {
                        {
                            arr_53 [i_8] [i_9] [i_14] [i_15] [i_15] = -32121;
                            var_19 = (~(~var_11));
                            arr_54 [i_15 + 1] [i_14] [i_14] [i_8] [i_9] = (1 > 4186650369686151029);
                        }
                    }
                }
                arr_55 [8] [i_8] [i_9] = (((((~((var_12 ? var_5 : var_0))))) ? (1 > 6144) : -var_9));
            }
        }
    }
    #pragma endscop
}
