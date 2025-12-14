/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!53496);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_0] [i_0] = (max((!var_1), 53496));
                            var_14 = (min((min(-var_12, 30)), (30 && var_5)));
                        }
                    }
                }
                arr_14 [10] [11] = (max(9556051423023244561, (+-9223372036854775805)));
                var_15 = var_0;
            }
        }
    }
    var_16 &= -13872;
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 20;i_7 += 1)
                    {
                        {
                            arr_28 [1] [17] [18] [i_7] = (((1077606478 != var_0) % ((~(var_10 > var_12)))));
                            arr_29 [1] [2] [i_6] [i_7] = 12040;
                            var_17 = (max(var_17, 739091569));
                            arr_30 [i_7] [i_5] [i_5] [i_7 + 2] [i_6] = var_1;
                            arr_31 [i_7] [i_6] [i_5] [i_7] = ((((max(63109, 1)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 4; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_10 = 0; i_10 < 23;i_10 += 1)
                            {
                                arr_39 [i_9] [i_5] [i_8] [i_9] [i_10] = -2147483637;
                                arr_40 [i_4] [i_9] [3] [i_9] [i_10] [1] = (~var_2);
                            }
                            for (int i_11 = 0; i_11 < 23;i_11 += 1)
                            {
                                var_18 = var_9;
                                var_19 ^= 2077007547;
                            }
                            for (int i_12 = 2; i_12 < 21;i_12 += 1)
                            {
                                arr_48 [i_4 + 1] [i_9] [i_8 - 2] [i_9] [i_12 + 2] [0] [i_12 - 2] &= 13871;
                                var_20 = (max(var_20, (!5261337953512425152)));
                                var_21 = (((max(643337221383616632, 739091569)) | 8314914156193894679));
                                var_22 = (min(var_22, ((min(-9446, (min((1 >= var_10), 2147483637)))))));
                                arr_49 [5] [i_9] [17] [i_9] [i_4 - 1] = 102;
                            }
                            for (int i_13 = 0; i_13 < 23;i_13 += 1)
                            {
                                arr_53 [i_4] [5] [i_8] [i_9] [i_9] = var_11;
                                arr_54 [i_4] [i_9] = (!((min(34307, 13872))));
                                var_23 = (153 <= (var_7 != 7841376041593999821));
                                arr_55 [6] [i_5] [i_5] [i_9] [i_5] = (!var_12);
                            }

                            for (int i_14 = 0; i_14 < 23;i_14 += 1)
                            {
                                var_24 = (+-2147483637);
                                var_25 *= (min((-13860 < 1), (max(var_1, -1077606478))));
                                var_26 = ((-(~var_10)));
                            }
                        }
                    }
                }
                var_27 = (!1);
                var_28 -= 1077606478;
            }
        }
    }
    #pragma endscop
}
