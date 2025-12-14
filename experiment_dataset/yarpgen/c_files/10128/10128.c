/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (max((max((min((arr_0 [i_0]), var_6)), (arr_2 [3] [i_0]))), (((var_6 ? var_2 : var_11)))));
                arr_4 [i_1] = (((max(0, 1)) ? ((((10052828165545110830 || ((min(10052828165545110829, var_14))))))) : -var_0));
                var_18 *= 1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_19 |= (max(((max((arr_8 [i_1]), (arr_8 [i_0])))), var_14));
                            var_20 |= ((max(1, 9860868851925613552)));
                            arr_9 [i_0] [i_3] [i_2] [1] |= ((1 + 3568458358126645186) ? ((-(arr_3 [i_3] [i_3]))) : (((((arr_7 [2] [2] [2] [i_1]) != 1)) ? (max((arr_3 [i_3] [i_3]), var_7)) : (arr_3 [i_0] [i_3]))));
                            var_21 -= ((1 ? 3568458358126645189 : 10052828165545110830));
                            arr_10 [i_0] [i_0] [i_0] [i_1] = (1 % 10052828165545110808);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                arr_16 [i_4] |= var_4;
                var_22 = (max(var_22, (((var_7 ? (arr_11 [i_4] [i_5]) : 10052828165545110832)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 18;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_23 ^= var_2;

                            for (int i_10 = 0; i_10 < 1;i_10 += 1)
                            {
                                var_24 &= var_7;
                                arr_36 [i_8] [i_9] = (((((max((arr_17 [i_9]), var_8)))) ^ (((min((arr_32 [i_6] [2] [i_8] [1]), var_10)) * ((((arr_34 [i_10] [i_9] [i_8] [i_7] [i_6]) ? var_9 : var_14)))))));
                                var_25 = (min(var_25, 1));
                            }
                            /* vectorizable */
                            for (int i_11 = 2; i_11 < 18;i_11 += 1)
                            {
                                var_26 = ((arr_27 [1] [1] [i_7] [i_8]) ? var_3 : (arr_27 [i_6 - 2] [i_6] [i_6] [i_6]));
                                var_27 ^= 1;
                            }
                            for (int i_12 = 2; i_12 < 17;i_12 += 1)
                            {
                                var_28 = arr_22 [1] [i_9];
                                var_29 = (min(var_29, var_14));
                                var_30 -= (min(((var_11 ? ((var_9 ? 1 : var_6)) : ((1 ? (arr_34 [1] [i_7] [i_8] [i_9] [i_12]) : (arr_23 [14] [i_9] [i_12]))))), var_13));
                                var_31 -= ((((((((var_7 ? 0 : (arr_39 [i_6] [i_7] [i_8] [i_9] [i_12] [i_8])))) ? ((min(1, var_14))) : 1))) ? (arr_17 [i_12 + 2]) : (!var_12)));
                                var_32 *= ((var_15 ? -72057594037796864 : ((((arr_32 [i_6] [i_6 - 1] [i_12] [i_12 + 1]) ^ var_16)))));
                            }
                            var_33 |= 1;
                            var_34 = (min((arr_19 [i_6] [i_6]), (max(var_11, ((~(arr_25 [i_7] [i_8])))))));
                        }
                    }
                }
                arr_43 [i_6] [i_6 - 1] |= (!1);
            }
        }
    }
    #pragma endscop
}
