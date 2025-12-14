/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        arr_11 [i_1] [i_1] [i_2] [i_3] = (((((arr_10 [i_1] [8] [i_1] [i_3] [i_1]) < 6819421924349715290)) ? (arr_9 [i_1] [i_3] [i_2] [i_2 + 1] [i_2 - 1] [i_3]) : var_3));
                        var_10 |= 255;
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
                        {
                            var_11 = -6819421924349715291;
                            arr_18 [i_0] [i_4] [i_2] [i_4] [i_0] [i_4] = (((((arr_4 [i_0] [i_0]) ? (arr_4 [i_4] [i_0]) : (arr_4 [i_0] [i_5 + 2]))) << (((arr_4 [i_0] [i_4]) - 6693399881762832812))));
                            var_12 ^= (arr_5 [i_0]);
                        }
                        for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
                        {
                            arr_21 [4] [i_4] [1] = var_8;
                            var_13 = (~((-6819421924349715290 ^ (arr_9 [i_0] [i_4] [6] [i_0] [i_2 + 1] [7]))));
                            var_14 = (min(-373995134651605761, 44));
                        }
                        for (int i_7 = 1; i_7 < 9;i_7 += 1) /* same iter space */
                        {
                            var_15 = -30689;
                            arr_24 [i_0] [1] [i_2] [i_4] [i_4] [10] = (arr_2 [i_0]);
                            arr_25 [i_0] [i_1] [i_2 + 1] [i_2 - 1] [i_7] [i_4] = (arr_2 [i_1]);
                            arr_26 [i_0] [i_1] [i_1] [1] |= ((+((-6819421924349715314 ? 6819421924349715299 : (((((arr_9 [i_7] [i_1] [i_4] [i_2] [i_1] [4]) > -373995134651605761))))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 9;i_8 += 1) /* same iter space */
                        {
                            arr_29 [i_4] [i_4] [i_4] [i_4] [i_4] = 1;
                            arr_30 [i_4] [i_4] [i_0] [11] [11] [i_2] [i_4] = (((arr_28 [i_2 - 1] [i_2] [i_2 + 1] [i_2 - 1]) ? ((var_1 ? 34090 : (arr_12 [i_0] [i_4] [i_4]))) : (var_8 == var_1)));
                        }

                        for (int i_9 = 2; i_9 < 11;i_9 += 1) /* same iter space */
                        {
                            var_16 = (max(60695518, 65535));
                            arr_34 [i_0] [i_1] [i_4] [i_4] = 6819421924349715314;
                            arr_35 [2] [i_1] [i_1] [i_2 - 1] [i_1] [i_9 - 2] &= var_0;
                        }
                        /* vectorizable */
                        for (int i_10 = 2; i_10 < 11;i_10 += 1) /* same iter space */
                        {
                            var_17 *= 69;
                            var_18 ^= (~var_0);
                        }
                        for (int i_11 = 2; i_11 < 11;i_11 += 1) /* same iter space */
                        {
                            var_19 = 7514;
                            arr_42 [3] [i_0] [3] [i_0] [i_0] [i_4] [i_4] = (((((arr_23 [i_2 - 1] [i_1] [i_2 - 1] [i_4] [i_4]) && (arr_23 [i_2 + 1] [i_1] [i_2] [i_1] [i_4]))) ? (((62 <= (arr_17 [i_0] [i_2 + 1] [i_0] [6] [i_11] [i_1])))) : (arr_32 [i_0] [i_1] [i_2 - 1] [i_4] [i_11 + 1])));
                            arr_43 [i_0] [i_1] [i_2 + 1] [i_4] = (!17977451944468256176);
                        }
                        arr_44 [i_0] [i_0] [i_0] [i_4] [i_0] = (min(((max((arr_37 [i_4] [i_2] [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_4]), -124))), 469292129241295439));
                        var_20 *= var_1;
                        arr_45 [i_1] [i_1] [i_1] [i_1] |= (((((-5172271796217387927 && (-127 - 1)))) ^ var_0));
                    }
                    arr_46 [i_1] [i_1] = -1;
                }
            }
        }
    }
    var_21 = var_5;
    var_22 = (69 - 76);
    var_23 = (max(var_23, var_2));
    #pragma endscop
}
