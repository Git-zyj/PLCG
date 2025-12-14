/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = 207422250;
                arr_4 [i_0] [i_0] = (arr_2 [i_0] [i_1]);
                var_13 = (min(var_13, ((((((1 && 13403) && (((985318164 ? var_9 : var_10))))) || ((max(var_2, (arr_0 [i_1])))))))));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_1] [i_2] |= (((((1930872163 ? 32767 : 0))) ? ((1 ? 38213 : 4294967295)) : (((arr_9 [18] [i_1] [i_1] [i_1] [16]) ? 1 : 1))));
                                arr_13 [i_0] [i_4] [i_3] [i_4] = (((!var_11) ? (!var_1) : (arr_5 [i_2 - 3])));
                                var_14 = ((((arr_10 [i_0] [i_4] [i_2] [0] [i_2]) - (arr_7 [6] [i_1] [i_1] [i_1] [i_1] [i_1]))) + 1023);
                            }
                        }
                    }
                    arr_14 [i_0 - 1] [i_1] [i_1] [i_0 - 1] = ((var_10 ? (arr_5 [i_0 - 1]) : 4294967295));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_15 = (max(var_15, var_6));
                                var_16 = 61440;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 8;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 10;i_8 += 1)
        {
            {
                arr_26 [i_7] [i_8 + 1] = 3589489784;
                var_17 ^= ((((!(arr_24 [i_7 + 2]))) ? ((((((7955795418037892613 ? 33830 : 1))) || (!var_6)))) : (((!var_11) ? (var_5 || 4294967295) : (arr_3 [i_7])))));
                arr_27 [i_7] [i_7 + 3] = ((((705477511 + (max(705477512, -25273))))) ? (((4294967295 - 216) ? 1 : 3309649131)) : 705477511);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 4; i_9 < 14;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 13;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        {
                            var_18 *= (arr_17 [i_10 - 1] [i_10 + 1] [i_9 - 1]);
                            var_19 = (max(var_19, (((((((18996 | var_0) - (arr_11 [i_12])))) == (((((var_11 ? var_10 : var_4))) ? ((795087478 ? 4294967279 : var_4)) : var_1)))))));
                        }
                    }
                }
                arr_39 [14] &= ((3589489802 ? (((!var_7) ? (arr_8 [i_9] [13] [i_10 - 2] [13]) : 25273)) : (((!((var_0 || (arr_3 [i_9]))))))));
                var_20 = (max(var_20, ((max((((3589489783 ? (arr_38 [10] [10]) : (arr_38 [i_10 + 2] [10])))), 8191)))));
                var_21 = (-var_4 ? (!3589489784) : ((((!(((var_9 ? var_3 : var_7))))))));
            }
        }
    }
    #pragma endscop
}
