/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (min(928, 64607));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    var_18 = -0;
                    arr_7 [i_0 + 1] [i_0] [i_1 - 2] [9] = (~(max((arr_5 [i_0] [i_0] [i_0]), (min(-968045627, var_14)))));
                    arr_8 [12] [i_0] [i_2] = ((-((-111 + (arr_5 [i_0] [i_0] [22])))));
                    var_19 = (max(51300, 15));
                    arr_9 [i_0] [i_0] [i_0] = ((~((-(arr_1 [i_0 + 1])))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                {
                    var_20 = (~1);
                    arr_14 [i_0] = (((arr_5 [i_1 - 2] [i_0] [i_0 - 1]) ? (arr_5 [i_1 - 2] [i_0] [i_0 - 1]) : (arr_5 [i_1 + 1] [i_0] [i_0 + 1])));
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {

                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        arr_20 [i_0] = 125;
                        var_21 += ((-((-654805415 ? (117 % 5) : 40112))));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 23;i_6 += 1)
                    {
                        arr_23 [i_0] = ((var_5 != (((arr_13 [i_6] [i_6] [i_6]) - (arr_18 [i_0] [i_0] [14] [i_0])))));
                        var_22 = ((117 ? (arr_17 [i_0] [6] [i_4] [i_6 - 1]) : (arr_6 [i_0 - 1] [i_0] [i_1 - 1])));
                        arr_24 [i_0] = (arr_15 [i_6 - 2] [i_6 - 2] [i_4]);
                    }
                    arr_25 [i_0] [i_1 + 1] [i_0] [i_4] = (((arr_6 [i_0] [i_0] [13]) >> (((var_2 + var_3) - 387285316))));
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_23 = (min(var_23, (((((min((98 * 25424), (968045626 / 6)))) ? -968045627 : -101736520)))));
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_24 = ((((((arr_28 [i_8 + 1] [i_8 + 1] [i_8 + 2]) | (arr_28 [i_8 + 2] [i_8 - 2] [i_8 - 1])))) ? ((~(arr_30 [i_0] [i_0 - 1] [i_0] [i_8]))) : (((max(62, 5))))));
                                var_25 = 122;
                            }
                        }
                    }
                }
                var_26 = var_8;
            }
        }
    }
    var_27 *= (--22058);
    #pragma endscop
}
