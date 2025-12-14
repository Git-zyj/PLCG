/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_13 = (arr_1 [i_0] [i_0]);
        var_14 = 0;
        var_15 = (((((var_0 ? var_7 : 17293822569102704640) - (max(32761, var_10))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_16 = (arr_2 [i_1]);
                            var_17 = (min((max(((var_7 ? (arr_10 [i_1] [i_2] [i_3] [i_1]) : var_3)), 27219)), (min(((min(var_9, (arr_1 [i_3] [i_1])))), ((var_4 ? var_10 : 402653184))))));
                            arr_12 [i_1] [i_2] [20] [i_4] [i_5] = (arr_4 [i_3] [i_3] [i_3]);
                            var_18 = ((var_0 & (((-var_1 <= (max((arr_5 [i_1]), 11113670616255184824)))))));
                            var_19 = ((((-(min(-94, 3))))) + (max((36028797018947584 || var_3), var_2)));
                        }
                    }
                }
            }
            var_20 *= var_0;
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 24;i_7 += 1)
                {
                    {
                        var_21 *= (((min((min(9, 7333073457454366782)), ((min((arr_9 [16] [12] [i_6] [i_7 - 2]), 402653165))))) + ((((var_6 * 8793945538560) ? ((min(var_0, 56))) : ((2919767182 ? 93 : (arr_13 [i_2] [20] [10]))))))));
                        arr_18 [i_6 - 1] [i_1] = var_1;
                        var_22 *= ((((((((arr_13 [i_1] [i_1] [22]) + 4294967275))) || (((var_8 ? var_5 : 18082740417457138454))))) ? (766293067 ^ 380003406466655501) : 3528674229));
                    }
                }
            }
        }
        var_23 = (min(((((arr_17 [i_1] [i_1] [i_1] [i_1]) + 57603))), -var_1));
        var_24 = ((var_1 ? (arr_0 [i_1] [i_1]) : (max((min(20, var_2)), var_8))));
    }
    #pragma endscop
}
