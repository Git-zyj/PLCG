/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [9] = (arr_0 [i_0]);
        var_16 = (max(var_16, ((((arr_0 [i_0]) ^ (arr_1 [i_0]))))));
        var_17 += (((~-47) & ((var_8 ? 32256 : 17546997678658631889))));
        var_18 = 17546997678658631913;
        var_19 = -23;
    }

    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            {
                                var_20 = -17546997678658631913;
                                arr_16 [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_5] [i_1 - 2] [i_1] = ((((7168 ? -7169 : 10793108000242723332)) | (((-(arr_14 [i_3] [i_2 - 1] [i_4] [i_4] [i_3] [i_5]))))));
                                var_21 = (max(524280, 14646));
                            }
                        }
                    }
                    var_22 = ((+(((arr_4 [i_1 - 1] [i_2 - 1]) + var_13))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_23 += ((-(((arr_14 [i_7] [i_6 - 3] [i_1 - 1] [i_7] [i_1 + 1] [8]) >> (var_3 + 1391011501)))));
                    var_24 = ((-1788055441 == (~-46)));
                    arr_24 [i_1] [i_1] [i_1 - 1] = (min((max(var_10, (arr_10 [i_1 - 1]))), (arr_10 [i_1 + 1])));
                }
            }
        }
        arr_25 [i_1 - 1] = arr_23 [i_1] [i_1 - 1];
    }
    var_25 = (((var_13 | var_8) ? ((~(7168 | 6))) : var_15));
    /* LoopNest 3 */
    for (int i_8 = 2; i_8 < 18;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 21;i_10 += 1)
            {
                {
                    var_26 = (!899746395050919702);
                    var_27 = (max(-6999519469124834368, -6999519469124834368));
                    var_28 = ((-16 & (min(19, 0))));
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 18;i_12 += 1)
                        {
                            {
                                arr_36 [i_9 + 1] [i_9 + 1] [i_9] [i_9] [i_9 + 1] [i_9] [i_9 + 1] = 75;
                                var_29 ^= (min(((1 >> (arr_34 [2] [i_11 - 2] [i_10] [i_9 - 1] [i_8]))), (((arr_34 [i_10] [i_10] [i_10 - 1] [i_11 - 2] [i_11 - 1]) & (arr_34 [i_8] [i_9 - 2] [i_10] [i_11 - 2] [i_12])))));
                                var_30 *= (max(0, -7169));
                                var_31 = ((~(max(-5310466005514445548, 48))));
                                var_32 *= (min((max(var_13, ((~(arr_35 [i_8] [i_8] [i_8 + 4] [i_8 + 4] [i_8 + 2] [i_8]))))), (1 == -1646340542)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_33 = ((-((min(var_15, var_9)))));
    #pragma endscop
}
