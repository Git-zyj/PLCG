/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [1] [3] [7] = 0;
                                var_19 += (arr_1 [i_0]);
                            }
                        }
                    }
                    var_20 = 1097364144128;
                    var_21 = var_6;
                    arr_15 [i_2 + 1] [i_0] [5] [i_1 - 4] = var_14;
                }
                for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    arr_19 [i_0] [i_1] [i_1 - 3] [i_1 - 1] = var_14;
                    var_22 += var_0;
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
                {
                    arr_23 [i_0] [i_0] [i_0] = ((-1 ? ((var_14 ? var_5 : var_3)) : (arr_20 [i_1 - 4] [i_0])));
                    var_23 = (min(var_23, ((((arr_6 [4] [i_1] [i_6 + 1]) ? var_4 : (arr_2 [i_6]))))));
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_24 ^= (((((var_1 ? -1 : 37))) ? 3316597025937736231 : ((214 ? var_4 : (arr_6 [i_7 + 1] [i_1] [i_0])))));
                                var_25 ^= var_16;
                            }
                        }
                    }
                }
                var_26 ^= (arr_17 [i_0] [0]);
                var_27 *= (((arr_22 [i_1]) ? (arr_8 [i_1] [1] [i_1] [0]) : var_4));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            {

                for (int i_12 = 1; i_12 < 15;i_12 += 1)
                {
                    var_28 = var_11;
                    var_29 = var_2;
                }
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 15;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        {
                            var_30 = 218;
                            arr_48 [i_10] [i_10] = (arr_44 [i_10] [2] [i_10] [i_10]);
                            var_31 *= 222;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
