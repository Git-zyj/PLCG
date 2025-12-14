/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= ((((min((~120), var_14))) ? var_7 : (((var_9 ? var_9 : (((var_5 ? 1 : var_1))))))));
    var_16 = 13;
    var_17 += (((!var_0) < var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 *= (max(((min((arr_5 [0] [i_1 - 1] [i_1 + 1]), -15))), (((arr_5 [11] [i_1 - 1] [i_1 + 1]) ? (arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 1]) : var_1))));
                                var_19 = (max(var_19, ((max((((var_4 < var_12) ? ((((-13 + 2147483647) >> (((arr_0 [14]) - 103))))) : (min(13, (arr_12 [i_0] [i_0]))))), 26114)))));
                                var_20 = (((((min(var_11, -30)))) < (arr_0 [i_4])));
                                var_21 = (arr_1 [i_1]);
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    arr_15 [i_0] [i_1] [i_1] |= (((!((min(var_12, 10878))))));
                    arr_16 [i_0] [i_1] [13] = ((146 ? (arr_2 [i_1 - 1]) : (((((255 ? 558047188745518298 : (arr_10 [i_1] [i_5] [i_1 - 1] [i_1]))) | (arr_8 [i_1 - 1] [i_1 - 1] [i_1]))))));
                    var_22 = 54170;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_21 [i_1] [i_7 - 2] [i_6] [i_5] [i_1 + 1] [i_1] [i_1] = var_3;
                                var_23 = (max(var_23, (1 * -6)));
                                arr_22 [i_1] [i_6] [i_1] = 3103144345;
                                var_24 = (i_1 % 2 == 0) ? ((min((max(-31, (((arr_4 [i_1]) >> (-102 + 126))))), var_11))) : ((min((max(-31, (((((arr_4 [i_1]) + 9223372036854775807)) >> (-102 + 126))))), var_11)));
                            }
                        }
                    }
                }
                arr_23 [i_0] [i_1] = ((((((var_10 ? 762038964546725570 : 47118))) ? 27445 : (((arr_13 [i_1 + 1] [i_0]) - var_6)))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            var_25 ^= 11340085311524907078;
                            var_26 = (min(var_26, ((min(-7, (((((4294967289 ? 14 : 191)) < (arr_26 [i_9] [i_8] [i_1] [i_0])))))))));
                            var_27 = ((((arr_11 [i_1 + 1] [i_1 - 1] [i_1 + 1]) > (arr_11 [i_1 + 1] [i_1 - 1] [i_1 + 1]))));
                            arr_30 [i_1] [i_1] [3] [i_9] [i_0] = (((((!65530) > (~1895365550))) ? (((1 | var_6) | ((var_4 ? -817406249134358624 : -31016)))) : (arr_3 [9] [i_9])));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 23;i_12 += 1)
            {
                {
                    var_28 = (max(var_28, (((max(((((arr_34 [i_11]) < var_12))), (arr_36 [i_12 - 2] [i_12 - 2] [i_11] [i_12 - 1])))))));
                    var_29 = (min(var_29, ((1 ? 1 : 22))));
                }
            }
        }
    }
    #pragma endscop
}
