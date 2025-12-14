/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129215
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
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = (arr_9 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0]);
                                arr_14 [i_2] [i_3] [i_2] = ((((((arr_0 [i_1]) && (arr_2 [i_0])))) | (arr_10 [i_4] [i_2] [i_0] [i_0])));
                            }
                        }
                    }
                    var_12 = (max((arr_6 [i_0] [i_0] [i_0]), (((arr_6 [i_0] [i_1] [i_2]) ? (arr_6 [i_0] [14] [i_0]) : (arr_6 [i_0] [i_0] [i_0])))));
                    var_13 = ((1 ^ ((46988 ? ((1 ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0]))) : (~-1649286239)))));
                }
            }
        }
    }
    var_14 = var_5;
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    var_15 &= (arr_15 [i_5 - 1]);
                    arr_22 [i_6] = ((!((((((4000101628 ? 64 : (arr_18 [i_6])))) ? (arr_17 [i_5 + 1]) : ((min(-57817606, (arr_16 [i_7] [i_6])))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                var_16 += (((((((((arr_17 [i_5]) ? (arr_15 [i_7]) : -2391340498181268300))) ? (-2147483647 - 1) : (max(255, 1649286238))))) / (((arr_20 [i_5 - 1] [8] [i_5 + 2]) ? ((34 ? (arr_21 [i_5] [i_6] [i_6] [i_8]) : -2147483630)) : 47))));
                                var_17 = (min(3407121356, 24673));
                            }
                        }
                    }
                    arr_29 [i_6] = ((((((((arr_25 [i_6] [i_7] [i_6] [i_6] [i_5]) ? 3709192397 : -65)) >> (((max((arr_16 [i_5] [i_5]), (arr_28 [i_5] [i_5] [i_5 - 1] [i_5] [i_5] [i_5] [i_5]))) - 3703357368))))) ? (((arr_15 [i_5 + 2]) ? (arr_15 [i_5 + 3]) : 2147483647)) : (!18891)));
                }
            }
        }
    }
    #pragma endscop
}
