/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 = 34265;
                    arr_7 [6] [6] [i_2] [i_2] |= ((+(((((arr_4 [7] [i_1]) / var_0)) & (arr_1 [i_0] [9])))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 -= (min(-31275, var_6));
                                arr_13 [i_0] [i_1] [0] [i_3] [i_1] = (((((var_9 && var_12) ? 177 : 1))) ? var_13 : ((min(var_3, (arr_2 [i_2] [2])))));
                                var_16 *= var_1;
                                var_17 = (((arr_8 [i_3] [i_3 - 1] [i_3] [i_3 - 3]) > ((min((arr_8 [i_0] [i_3 - 3] [1] [i_3 + 1]), (arr_8 [i_3] [i_3 - 2] [15] [i_3 - 2]))))));
                            }
                        }
                    }
                }
            }
        }
        arr_14 [i_0] = (arr_11 [i_0] [i_0] [i_0] [i_0] [5] [2] [10]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    var_18 = var_12;
                    arr_20 [i_0] [i_5] [i_6] = ((((arr_15 [14] [i_6]) - var_1)));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                    {
                        var_19 = (min(var_19, (!var_12)));
                        var_20 = ((((((arr_9 [i_5]) ^ (arr_17 [13])))) ? (arr_18 [i_0] [i_5]) : 1501359597));
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                    {
                        var_21 = (((min((min(5184453199062187482, var_0)), ((((arr_6 [i_6] [i_6] [i_6] [i_8]) ? -49 : (arr_16 [i_0] [i_0] [i_0])))))) + ((((((var_11 ? (arr_22 [i_0] [i_5] [1] [i_6]) : -2600165078319939291))) ? (!var_4) : (arr_21 [i_8] [i_6] [14]))))));
                        arr_27 [i_0] [15] [1] [i_6] [15] [i_8] = (min((arr_25 [i_6]), (!var_13)));
                    }
                    for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                    {
                        var_22 = (max(var_22, 49));
                        arr_31 [i_0] [5] [1] [i_9] = ((((min(34265, var_1))) || (arr_0 [i_6])));
                        arr_32 [i_6] [1] [i_6] [11] [i_9] = var_13;
                    }
                    var_23 -= (((((max(var_12, var_6)))) && (arr_6 [i_6] [i_6] [0] [12])));
                    arr_33 [11] [11] [1] [4] &= (((((var_13 / (arr_8 [3] [i_5] [16] [1])))) + (((((arr_10 [9] [15] [1] [1] [i_5]) ? var_2 : (arr_11 [i_0] [i_5] [i_5] [i_5] [i_6] [6] [i_6]))) | (!var_3)))));
                }
            }
        }
        arr_34 [9] = arr_26 [i_0] [i_0] [i_0] [i_0];
    }
    var_24 *= var_10;
    #pragma endscop
}
