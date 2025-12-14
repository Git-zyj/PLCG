/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_14 -= (((var_6 + 2147483647) >> (var_12 - 74)));
                arr_4 [i_1] = ((var_13 ? ((8701303383674335790 ? var_1 : 13999)) : (arr_2 [i_1] [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {

                /* vectorizable */
                for (int i_4 = 2; i_4 < 7;i_4 += 1)
                {
                    var_15 = (max(var_15, (var_3 | var_0)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_16 = (var_8 | var_9);
                                var_17 = (((arr_15 [i_4] [i_4] [i_5] [i_6]) ? (arr_8 [i_4] [i_4 + 1] [i_5]) : (var_1 != 945798717)));
                                var_18 = var_9;
                                var_19 = 5060893989642332037;
                            }
                        }
                    }
                }
                for (int i_7 = 1; i_7 < 6;i_7 += 1)
                {
                    var_20 &= ((((63 << ((((var_10 ? var_5 : var_12)) - 929154397)))) / ((var_3 ? var_11 : ((var_6 ? 1 : (arr_17 [2])))))));
                    var_21 = (max(var_21, (arr_17 [4])));
                }
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            var_22 ^= var_4;
                            arr_25 [i_2] [i_3] [i_8] [i_9] [6] &= ((8701303383674335802 ? var_10 : var_8));
                            var_23 = (max(var_23, (((~((-(arr_0 [i_2] [i_3]))))))));
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_24 = (~-8424799254230347634);
                            var_25 -= (min((((arr_6 [i_2] [i_2]) + (min(var_9, var_11)))), (arr_1 [i_8])));
                            arr_28 [i_2] [i_3] [i_8] [i_9] [i_9] [i_11] = (min((((arr_17 [i_9]) ? (arr_17 [i_9]) : var_3)), (max(8557052877176179634, (arr_20 [i_2] [i_2] [i_2] [i_2])))));
                        }
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            arr_32 [i_9] = (((~20579) / var_10));
                            arr_33 [i_2] [i_2] [i_9] [i_2] = (945798717 & 1);
                            arr_34 [1] [i_2] [0] [i_8] [i_9] [i_12] = (arr_12 [7] [i_9] [i_9] [i_2]);
                        }
                        for (int i_13 = 0; i_13 < 0;i_13 += 1)
                        {
                            arr_38 [i_2] [i_9] [i_2] = var_13;
                            var_26 = (max(var_26, ((((((var_9 & ((var_12 ? -945798718 : var_3))))) ? 1150669704793161728 : ((max(-8424799254230347637, var_12))))))));
                            var_27 = var_7;
                            arr_39 [i_9] = ((((min(var_2, 7345316657089137352))) ? (arr_16 [i_3] [i_13 + 1] [i_13] [i_13] [i_13 + 1] [i_13] [1]) : (max(((41 >> (((arr_21 [i_2] [i_2] [i_2] [i_8] [3] [i_9]) - 1640)))), ((((arr_35 [i_9]) ? 65534 : var_4)))))));
                            var_28 = (max(((((var_0 << (var_0 - 20259))) % var_12)), (max(2, ((var_4 >> (var_2 - 12395)))))));
                        }
                        var_29 ^= (((var_10 | ((-256 ? 19154 : 126)))));
                    }

                    for (int i_14 = 0; i_14 < 10;i_14 += 1) /* same iter space */
                    {
                        var_30 = (((((-820 ? (arr_2 [i_14] [i_14]) : (arr_2 [i_14] [i_14])))) && ((0 || (arr_2 [i_14] [i_14])))));
                        arr_43 [i_2] [i_8] [i_14] [i_3] [i_14] = (((-8424799254230347637 ? (min(4630525140576245040, var_4)) : ((max(-884778020, var_2))))));
                    }
                    for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
                    {

                        for (int i_16 = 1; i_16 < 8;i_16 += 1)
                        {
                            arr_48 [i_2] [i_2] [i_2] [1] [i_2] = 8701303383674335790;
                            arr_49 [i_2] [i_3] = (((26308 & 1) | (var_9 | 28392)));
                            var_31 = (min(var_8, (max(((var_8 ? -3423974639508196401 : var_8)), (((!(arr_31 [i_2] [i_3] [8] [i_15]))))))));
                            arr_50 [i_16 - 1] [i_2] [i_8] [i_2] [i_2] = 113185926447421411;
                        }
                        arr_51 [i_2] [i_2] [i_8] [i_15] [i_8] [5] = (~var_1);
                    }
                }
                var_32 = (max((!-95), var_10));
                var_33 = ((+(((((arr_46 [i_3] [i_3] [i_3] [i_3] [i_3]) != 40)) ? ((max(var_0, (arr_37 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))) : (-25631 & var_11)))));
                arr_52 [i_3] = (((((-32767 - 1) + 2147483647)) >> (177336813 - 177336798)));
            }
        }
    }
    var_34 -= 1;
    var_35 ^= var_4;
    #pragma endscop
}
