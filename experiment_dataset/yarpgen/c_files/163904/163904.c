/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (min(var_8, (((var_3 ? 62 : var_9)))));
    var_18 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_19 = (max(var_19, ((((((((arr_1 [i_3]) ^ 17629097565701044862)) % (arr_6 [1] [i_1] [i_0]))) + (1059863458656855407 & 12))))));
                            var_20 = (max(var_20, var_12));
                            var_21 = (max(var_21, ((((!var_12) * (arr_9 [i_0] [i_2]))))));
                            var_22 ^= (arr_13 [i_0] [15] [i_0] [i_0] [i_0]);
                            var_23 = (min(var_23, 33106));
                        }
                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            arr_16 [i_0] [18] [i_2] [i_3] [i_5] [i_5] [i_0] = ((~((~(arr_14 [18] [0] [i_5 - 1] [i_5] [i_5] [i_5])))));
                            arr_17 [i_5] [i_0] [14] [i_2] [i_1] [i_0] [6] |= -1;
                        }
                        var_24 = (max(var_24, (arr_9 [i_0] [i_0])));
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        arr_20 [i_0] [i_0] [i_2] [13] &= 1;
                        var_25 = ((!((var_12 || (arr_11 [i_6])))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        arr_24 [i_0] [i_1 - 1] = ((-(~var_13)));

                        for (int i_8 = 2; i_8 < 19;i_8 += 1)
                        {
                            var_26 = (max(var_26, ((((((965070807427063600 ? 32429 : 116))) ? -7192 : (((arr_13 [i_0] [i_1] [i_1] [i_7] [i_8]) ? var_2 : var_9)))))));
                            arr_28 [1] [i_0] [i_0] = (!(arr_14 [i_8 + 3] [i_2] [i_1 + 1] [2] [i_1 + 1] [i_1 + 1]));
                        }
                        var_27 -= (((arr_0 [i_1 + 1] [i_1 - 1]) ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : 8561966575546934844));
                        var_28 -= (((((var_3 <= (arr_22 [i_7] [i_2] [i_0] [i_0])))) & (arr_6 [1] [i_1 - 1] [i_1 - 1])));
                    }

                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 21;i_9 += 1) /* same iter space */
                    {
                        var_29 &= (((!613162905) ? (!var_7) : -11616));
                        var_30 = (max(var_30, ((((arr_9 [i_9 - 2] [i_1 + 1]) ? (arr_22 [i_1 - 1] [1] [i_2] [i_9 + 1]) : (arr_9 [i_9 + 1] [i_1 + 1]))))));
                    }
                    for (int i_10 = 2; i_10 < 21;i_10 += 1) /* same iter space */
                    {
                        var_31 = var_14;
                        var_32 += (((3505740565 * 83) ? ((~(((arr_9 [i_0] [i_1]) ? (arr_8 [i_0] [i_10] [i_10] [i_10] [12]) : var_9)))) : ((~((((arr_19 [i_10]) <= (arr_11 [i_0]))))))));
                    }

                    for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                    {
                        arr_38 [i_11] [i_1] [i_2] [i_2] [i_11] [i_2] = var_15;
                        var_33 = (max(var_33, ((((((max((arr_0 [i_1 + 1] [i_11]), (arr_0 [i_0] [i_11]))))) ^ (86 & 6070465129107872087))))));
                        var_34 -= (((((arr_31 [i_0] [i_1 + 1]) & (arr_31 [i_1 - 1] [i_11]))) + (((!(arr_31 [i_0] [i_1 - 1]))))));
                    }
                    for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
                    {
                        var_35 += (arr_12 [i_0] [i_1] [i_2]);
                        var_36 = ((~((21608 ? -112 : 22316))));
                        var_37 = var_8;
                        arr_41 [i_0] [i_0] = -32761;
                    }
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        arr_44 [i_13] [i_13] [i_2] [i_1] [i_0] = ((((((~var_12) ? (var_2 == 12991084228348837506) : ((var_2 ? var_4 : 1))))) ? var_4 : (arr_14 [i_0] [i_0] [i_1 + 1] [11] [i_2] [i_13])));
                        var_38 = 297890499;
                        arr_45 [i_0] [i_1] [i_2] [i_13] = ((~(!32436)));
                    }
                    arr_46 [1] [i_0] = (4234430629766380693 > -120);
                }
            }
        }
    }

    for (int i_14 = 1; i_14 < 12;i_14 += 1)
    {
        var_39 = ((((var_6 ? (arr_37 [i_14 + 2] [i_14] [20] [i_14 + 1] [21] [3]) : var_12)) ^ (((-(arr_37 [i_14] [i_14 - 1] [i_14] [i_14 - 1] [i_14 + 2] [i_14 - 1]))))));
        arr_51 [i_14] = ((4448625894921419238 - ((((arr_19 [i_14 + 1]) + (arr_14 [11] [i_14] [7] [i_14] [7] [i_14]))))));
        arr_52 [3] = ((((-(arr_9 [i_14 + 1] [i_14]))) - (min((arr_9 [i_14 - 1] [i_14]), (arr_25 [i_14 + 2] [i_14] [i_14 - 1] [i_14] [i_14] [i_14 - 1])))));
    }
    #pragma endscop
}
