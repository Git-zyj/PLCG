/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_13 -= (arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 9;i_4 += 1)
                            {
                                var_14 |= ((-(max((arr_0 [i_4]), (arr_3 [i_0])))));
                                var_15 ^= (min(9145889201793014860, 536870911));
                            }
                            for (int i_5 = 0; i_5 < 10;i_5 += 1)
                            {
                                var_16 -= var_4;
                                var_17 -= -13;
                                var_18 = (min(var_18, (((((max(var_2, (arr_8 [i_5] [i_5] [i_3 - 1] [i_5] [i_3 - 1])))) ^ (max(((var_5 ? var_6 : (arr_11 [i_0] [i_1] [i_2] [i_3]))), (arr_2 [i_1] [i_2] [i_3]))))))));
                            }
                            /* vectorizable */
                            for (int i_6 = 4; i_6 < 9;i_6 += 1)
                            {
                                var_19 ^= var_8;
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_2] [i_6] &= ((~(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [2])));
                            }
                            for (int i_7 = 1; i_7 < 7;i_7 += 1)
                            {
                                var_20 &= (((((arr_10 [0] [0] [i_2] [4] [i_2]) == (arr_13 [i_0] [i_0] [i_2] [8] [i_7 + 3]))) ? (arr_8 [i_0] [i_1] [i_2] [i_3] [i_7]) : (arr_1 [i_0] [i_1])));
                                arr_19 [i_0] [i_1] |= (((((~(arr_13 [i_0] [i_0] [i_0] [i_3] [i_7])))) == (~var_9)));
                                var_21 ^= (arr_18 [i_0] [i_1] [i_0] [i_3] [i_7] [i_0] [i_1]);
                            }

                            for (int i_8 = 4; i_8 < 9;i_8 += 1)
                            {
                                var_22 &= ((536870918 ? 32755 : 3758096384));
                                var_23 ^= (((min(var_6, var_5)) * ((min((arr_21 [i_0] [i_1]), var_4)))));
                                var_24 -= (arr_10 [8] [i_1 + 3] [i_1 + 3] [i_1] [i_1 + 1]);
                            }
                            for (int i_9 = 0; i_9 < 10;i_9 += 1)
                            {
                                var_25 = (max(var_25, var_10));
                                var_26 &= var_3;
                                arr_25 [4] [i_1] [i_1] [i_1] [i_3] [i_9] [i_1] |= ((!(arr_12 [i_1 - 1] [i_1] [4] [i_1 + 1])));
                            }
                            var_27 *= ((((min((arr_10 [4] [4] [i_1] [i_2] [4]), (0 && 536870912)))) ? (max((((-18571 ? 24 : 0))), (((arr_10 [4] [4] [2] [2] [i_2]) ? (arr_20 [i_0] [i_1] [i_2] [i_2] [i_3]) : var_5)))) : ((((arr_24 [i_1 - 1] [6] [i_3 - 3] [i_3 - 2] [i_3]) / (max(536870897, 93)))))));
                            arr_26 [i_0] [i_0] [i_2] [i_3 + 2] [i_2] [i_2] &= var_3;
                        }
                    }
                }
            }
        }
    }
    var_28 ^= (((min(var_5, var_5)) / (~var_5)));
    /* LoopNest 2 */
    for (int i_10 = 2; i_10 < 11;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            {
                var_29 = (max(var_29, (arr_30 [i_10 - 2] [i_11])));
                arr_34 [i_10] [0] |= (arr_29 [i_10] [i_11]);
            }
        }
    }
    #pragma endscop
}
