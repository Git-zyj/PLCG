/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (max(var_15, -48685310));
                arr_6 [i_0] [i_0] = 48685308;
                arr_7 [i_0] [i_1] [i_1] &= (--48685308);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [0] [1] [1] [i_3] [i_3] [1] = -48685308;
                                var_16 = max(((28 ? -48685315 : 15768)), -1302423709560966221);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                {
                    arr_26 [i_7] [i_7 - 1] = (((118 ? 118 : -38)));
                    var_17 = ((((((1 ? -90 : -915488450)))) - ((max(1, 49)))));
                    var_18 += (~-48685292);

                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_19 = (max(var_19, ((((((-125 ? 0 : 477170085995222731)) & (~6606842279056306545))) ^ ((7189889311327184111 ? -2437061274874417196 : (194 | 477170085995222716)))))));
                        var_20 = (min(var_20, (34656 | 124)));
                        var_21 *= (max(((((-915488450 || 206) || (915488450 && 0)))), ((-48685330 ? -48685308 : 114))));
                    }
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_22 = (max(var_22, (((max(718240191, ((min(22767, 11041)))))))));

                        for (int i_10 = 1; i_10 < 11;i_10 += 1) /* same iter space */
                        {
                            arr_38 [i_5 - 1] [i_6] [i_7 + 2] [i_9] [i_7] = ((!(-24856 / 114)));
                            var_23 = (!0);
                        }
                        for (int i_11 = 1; i_11 < 11;i_11 += 1) /* same iter space */
                        {
                            arr_41 [i_7] = 4;
                            arr_42 [i_5] [i_6] [i_7] [i_9] = 56070;
                        }
                    }
                    for (int i_12 = 2; i_12 < 9;i_12 += 1) /* same iter space */
                    {
                        var_24 = (min(var_24, 19));
                        arr_45 [i_7] [i_6] [i_7] = ((65519 ^ ((-146367378 ? 9 : 3))));
                        var_25 -= -15895;
                    }
                    for (int i_13 = 2; i_13 < 9;i_13 += 1) /* same iter space */
                    {
                        var_26 = -48685326;
                        var_27 = (min(var_27, ((((max(-9, -48685324)) < 56070)))));
                        arr_48 [i_5] [i_5] [i_7] [i_7] [i_5] [i_5] = (0 | 4095);
                    }
                    arr_49 [i_7] = 56070;
                }
            }
        }
    }
    #pragma endscop
}
