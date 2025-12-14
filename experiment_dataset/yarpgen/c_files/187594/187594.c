/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] [i_2] [i_0] [i_1] = -195;
                            arr_10 [i_1] [i_1] [i_1] [i_1 - 1] = ((((((-10 ^ 1) ^ (~var_17)))) | ((~(~var_7)))));
                            arr_11 [i_1] [i_2] [i_0] [i_1] = (1 & 2445583481051826782);
                            var_18 = ((-(~var_7)));
                            var_19 = var_11;
                        }
                    }
                }

                for (int i_4 = 4; i_4 < 20;i_4 += 1)
                {
                    var_20 = ((((((var_7 ? var_1 : var_7)) ^ (((var_3 ? var_5 : var_12)))))) ? (~var_7) : ((((var_4 >= var_14) - (var_15 < var_15)))));
                    arr_15 [i_0] [i_1] [i_4] [i_1] = ((~(var_8 <= -130)));
                }

                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_21 = (((((var_5 + var_17) >= var_14)) ? (((var_14 != var_8) ? (var_5 || var_7) : (var_15 * var_5))) : (~1)));
                    arr_19 [i_0] [i_1] [i_1] = (var_17 >> var_17);
                    arr_20 [i_1] [i_0] [i_0] [i_0] = ((((~((var_14 ? var_0 : var_0)))) < (((1 < 1) - 1))));
                    var_22 = ((var_9 >= (((1 || -2445583481051826797) ? (var_4 ^ var_1) : var_2))));
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            arr_27 [i_0] [i_0] [i_1] = var_15;
                            arr_28 [i_0] [i_1] [i_6] [i_6] [i_7] = var_16;
                            arr_29 [i_1] [i_1] [i_6] [i_6] [i_6] [i_6] = ((~((((var_2 ? var_5 : var_4)) ^ (~var_4)))));
                        }
                    }
                }
                arr_30 [i_1] [i_1] = (((((!(((var_9 ? var_3 : var_2)))))) - (!4)));
            }
        }
    }
    var_23 = ((((var_9 - ((var_10 ? var_12 : var_4)))) >= var_5));
    #pragma endscop
}
