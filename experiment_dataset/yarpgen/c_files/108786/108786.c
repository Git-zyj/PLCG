/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    var_20 *= var_10;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_21 &= var_2;
        var_22 ^= ((~(~28701)));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_23 *= (~((-(var_17 > 27495))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_8 [i_2] [i_2] = var_4;
            arr_9 [1] [i_2] = ((-7572567326468091348 <= (((((arr_6 [i_1] [i_1] [i_2]) <= (((-(arr_5 [i_1] [i_2] [i_2]))))))))));
            var_24 += (arr_7 [17]);
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_22 [i_4] [i_4] = var_0;
                            var_25 = var_12;
                            arr_23 [i_1] [i_1] [i_1] [i_4] [i_1] = (arr_13 [1] [14]);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 19;i_8 += 1)
                {
                    {
                        var_26 -= (((-7572567326468091336 ? var_13 : ((var_13 ? (arr_27 [i_8] [i_3] [i_1]) : (arr_24 [i_3]))))));
                        var_27 = 28701;

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 0;i_9 += 1) /* same iter space */
                        {
                            arr_30 [i_9] [16] [16] [2] [i_1] |= (((((18516 ? var_7 : -595759381))) ? (arr_19 [i_1] [14] [i_1]) : var_10));
                            var_28 &= ((((var_15 ? (arr_11 [i_1] [0]) : var_14))) ? (((var_5 ? (arr_4 [6] [i_1]) : var_5))) : 7572567326468091350);
                        }
                        for (int i_10 = 0; i_10 < 0;i_10 += 1) /* same iter space */
                        {
                            var_29 = ((~(arr_24 [i_7])));
                            var_30 = var_6;
                            var_31 = (((((arr_17 [i_7 - 1] [i_7 + 4] [i_7 - 1] [i_8 - 2] [i_8 - 2] [i_10]) || var_14))) + ((((-4052973618230683077 ? (arr_19 [i_10] [17] [17]) : var_4)))));
                            arr_33 [i_1] [i_1] [i_10] [1] [14] = var_6;
                            var_32 = 28701;
                        }
                    }
                }
            }
            var_33 ^= (-1 || 2579631638);
        }
    }
    var_34 = var_8;
    var_35 ^= ((var_9 ? var_18 : (((!(-8319140140884657390 && var_0))))));
    #pragma endscop
}
