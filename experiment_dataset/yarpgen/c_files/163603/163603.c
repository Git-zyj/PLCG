/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((1 ? 12 : 136)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        var_13 = (max(var_13, ((max((max(-11716, (arr_5 [i_3 + 2] [i_3] [i_0 - 1]))), (((var_11 < (((arr_8 [i_3] [i_3] [i_3] [i_0]) << (var_8 - 748871578)))))))))));
                        var_14 += (!((min(135, -26))));
                    }
                    for (int i_4 = 2; i_4 < 14;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_15 = (max(var_15, ((((1 > 1) ? (((min((arr_5 [i_1] [i_4] [i_1]), (arr_3 [i_4] [i_2]))) & 1)) : ((var_11 ? -var_0 : 75)))))));
                            var_16 = ((((max(57389, 108))) ^ (var_3 || var_7)));
                            var_17 = (max(var_17, -1519487981));
                        }
                        var_18 = (((((-11716 ^ (1006688418 | -11716)))) ? ((max(var_11, (1006688418 <= var_4)))) : ((((-18574 < var_9) || (((~(arr_8 [i_1] [i_0] [i_0] [i_4])))))))));
                        var_19 = (max(var_19, (!var_10)));

                        for (int i_6 = 4; i_6 < 16;i_6 += 1)
                        {
                            var_20 -= (max(1, ((!(((var_9 ? 1 : var_0)))))));
                            var_21 = ((var_0 != (((2806848108 ? var_11 : 18446744073709551615)))));
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 14;i_7 += 1) /* same iter space */
                    {
                        var_22 += (var_11 % (arr_0 [i_7]));
                        var_23 = var_2;
                        var_24 = (min(var_24, 1));
                        var_25 = var_4;

                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_26 = (min(var_26, (((1 ? (57017 || 8505) : (var_2 && var_4))))));
                            var_27 = ((17774 ? ((-27057 ? -6760293537105953334 : 216172782113783808)) : ((((var_10 < (arr_8 [i_0 + 1] [i_0] [1] [1])))))));
                            var_28 = -22630;
                        }
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_29 = (min(var_29, (((-(var_0 && var_5))))));
                            var_30 |= ((arr_13 [12] [i_7] [0] [16] [1] [i_7] [0]) ^ var_0);
                            var_31 |= 39873;
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            var_32 = (min(var_32, (((1 ? 42 : 1)))));
                            var_33 ^= 1;
                            var_34 *= var_9;
                        }
                    }
                    for (int i_11 = 2; i_11 < 14;i_11 += 1) /* same iter space */
                    {
                        var_35 &= (max((arr_26 [i_0] [i_1] [i_2] [i_11] [i_11]), (min((arr_0 [i_11]), 130))));
                        var_36 |= (((((min(0, 1)) ^ (((min(1, 1)))))) / (((min((arr_28 [i_0 + 1] [i_0 - 1]), (arr_28 [i_0 + 2] [i_0 + 1])))))));
                        var_37 = (min((((1 * (arr_4 [i_11 + 2] [i_11 + 1] [i_11 - 2] [i_0])))), 14026733491615182894));
                        var_38 = (max((((~4046162871) ? ((((arr_6 [i_0] [i_1] [i_2] [14]) > 217))) : (arr_29 [i_0] [i_0] [13] [i_0] [i_0] [i_0]))), (max(1, ((1 ? 1 : -18589))))));
                        var_39 = (max(var_39, (((1 != var_1) != (min((var_11 & var_8), 24170))))));
                    }
                    var_40 = ((-((-(~20593)))));
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 14;i_13 += 1)
                        {
                            {
                                var_41 = (max(var_41, (max((max(7, (max(210, 15035226736572067873)))), var_9))));
                                var_42 = (max(var_42, (arr_1 [14] [i_0])));
                                var_43 &= ((((var_4 / (arr_36 [i_12 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))) != ((min(var_10, ((19097 ? 1 : var_6)))))));
                                var_44 = (((((((var_8 ? var_3 : -2)) ^ ((9349 ? -8252 : (arr_36 [0] [i_12] [0] [0] [i_12])))))) ? var_9 : (((var_6 && var_9) ? 6297533112328018097 : (arr_2 [i_0 + 1] [i_0 + 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
