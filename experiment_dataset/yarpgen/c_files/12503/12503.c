/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_0));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = (((arr_1 [i_0 + 2] [i_1 + 2]) ^ ((min(var_5, (arr_1 [i_0 + 1] [i_1 + 2]))))));
                arr_5 [i_0] [i_0] = (48 << 0);
                var_12 = (min(var_12, ((max(var_8, (min(((1 ? var_5 : var_4)), ((var_9 ? var_4 : 1)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 3; i_4 < 12;i_4 += 1) /* same iter space */
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_3] = 127;
                                var_13 ^= var_4;
                                arr_15 [i_1] [i_2] [i_0] = (6942522057839997188 % var_6);
                                var_14 = (((arr_12 [i_0 - 1] [i_1] [i_2] [i_0] [i_4]) ? (arr_10 [i_3] [i_0] [i_2] [i_1 - 2]) : (arr_4 [i_0] [i_0])));
                                arr_16 [i_0] [i_1] [i_1] [i_0] [i_4 - 1] [i_1] [i_0] = (134215680 / var_5);
                            }
                            /* vectorizable */
                            for (int i_5 = 3; i_5 < 12;i_5 += 1) /* same iter space */
                            {
                                var_15 = ((4294967295 ? (arr_3 [i_1 + 1] [i_1] [i_1]) : (arr_3 [i_1 - 1] [i_1 - 1] [i_1])));
                                var_16 = ((var_3 ^ (arr_3 [i_1] [i_1 + 1] [i_1 + 2])));
                            }
                            /* vectorizable */
                            for (int i_6 = 3; i_6 < 12;i_6 += 1) /* same iter space */
                            {
                                var_17 = (arr_8 [i_0]);
                                var_18 = (min(var_18, (((var_9 ? var_6 : ((-8173610558652048696 ? (arr_11 [8] [8] [i_2] [i_2] [i_2]) : var_9)))))));
                                var_19 = (((arr_13 [i_6 - 2] [1] [i_6] [i_3] [i_1]) ^ ((((!(arr_21 [i_0] [i_3] [i_3] [i_3] [i_3])))))));
                                var_20 = (max(var_20, (arr_2 [i_1 + 2])));
                                var_21 -= ((+(((arr_4 [2] [2]) % 1))));
                            }
                            /* vectorizable */
                            for (int i_7 = 3; i_7 < 12;i_7 += 1) /* same iter space */
                            {
                                var_22 = ((15793581114737157108 ? (arr_1 [i_0 + 2] [i_1 + 1]) : (arr_1 [i_0 - 1] [i_1 - 2])));
                                var_23 = ((((-(arr_10 [i_0] [i_0] [i_0] [i_0])))) >= (arr_8 [i_0 - 3]));
                                var_24 = (((arr_19 [i_0] [i_0]) / (arr_9 [i_0])));
                                var_25 = var_9;
                                var_26 = (439600875 ? (((var_3 >= (arr_8 [i_3])))) : var_5);
                            }
                            var_27 = ((1 ? 3556381112219605157 : 12269829108716573883));
                        }
                    }
                }
                var_28 = (min(1, -9223372036854775807));
            }
        }
    }
    #pragma endscop
}
