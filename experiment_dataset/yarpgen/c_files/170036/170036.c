/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_18 & (min(var_2, -485342656339323012))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_21 ^= ((((127 ? (var_5 / 15) : -var_16)) & ((((var_5 >= (((((arr_6 [i_1] [i_1]) > var_17))))))))));
                arr_7 [i_0] [i_1] = ((255 ? 10652170642734402764 : -30));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [8] [i_2] [i_1] [i_4] [i_4] [i_0] = (max((min(151, -485342656339323009)), 208));
                                arr_17 [i_1] [i_1] &= (arr_11 [0] [i_1] [i_2] [i_3]);
                                arr_18 [i_0] [1] [i_1] [i_1] [i_1] [1] [i_4] = ((((min((arr_9 [i_4] [i_3] [i_1]), (((~(arr_10 [i_3]))))))) ? (arr_9 [i_2] [i_2] [i_2]) : (((-(arr_12 [i_1] [i_1] [i_1 - 2] [i_1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 4; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 11;i_7 += 1)
            {
                {
                    var_22 = var_5;
                    var_23 ^= ((1 ? (((arr_21 [i_5] [i_7]) ? 255 : (arr_10 [i_5]))) : var_19));
                    arr_29 [i_6] [i_6] [i_7] [i_7] = (arr_9 [i_5] [i_5] [i_7]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 18;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 18;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 16;i_12 += 1)
                        {
                            {
                                var_24 = (!485342656339322998);
                                arr_41 [12] [i_12] [i_10] [i_11] [14] = ((-(arr_14 [i_12] [i_12] [i_12])));
                                var_25 += (((var_12 ? (arr_40 [i_12] [i_12] [i_12] [12] [i_12] [i_12]) : (arr_13 [i_12] [i_12] [i_12] [i_12] [i_12]))));
                                arr_42 [i_12] [i_11] [i_10] [i_9] [i_8] = ((1503144923 != ((((((arr_11 [i_8] [i_10] [i_11] [i_10]) ? 485342656339323032 : 3392424199))) ? (~var_10) : (arr_32 [i_11])))));
                                var_26 = (arr_30 [i_8] [i_8]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 19;i_14 += 1)
                        {
                            {
                                arr_48 [i_8] [i_9] [i_10] [12] [i_13] = (arr_30 [13] [i_8 - 1]);
                                arr_49 [i_13] [17] [17] [i_13] = (max(-27, -9019261345843458393));
                            }
                        }
                    }

                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        var_27 -= (max(((~(arr_14 [i_10] [i_10] [i_10]))), 0));
                        arr_53 [i_8] [i_8] [i_9] = (!var_19);
                        var_28 = (max(var_12, var_11));
                        arr_54 [i_8] [i_8] [i_8] [i_8] = var_11;
                    }
                    for (int i_16 = 2; i_16 < 16;i_16 += 1)
                    {
                        var_29 = (max((((!(arr_31 [i_10])))), (arr_6 [i_16 + 3] [i_16 + 3])));
                        arr_58 [i_9] = 33249;
                    }
                    for (int i_17 = 0; i_17 < 19;i_17 += 1)
                    {
                        var_30 += (arr_34 [i_8] [i_9] [i_10]);
                        arr_62 [i_17] [i_10] [i_8] [i_8] = (max(((-(arr_30 [i_9] [i_8]))), (((1 == (-9223372036854775807 - 1))))));
                    }
                }
            }
        }
    }
    var_31 = (((max((var_17 < var_11), ((var_7 ? var_18 : var_5)))) << var_19));
    #pragma endscop
}
