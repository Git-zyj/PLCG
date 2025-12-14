/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((max(((1 ? var_3 : var_2)), (~1))), ((~(!var_14)))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_16 &= (((32752 ^ 0) >> (!var_4)));
        arr_2 [i_0] = (((arr_1 [i_0] [i_0]) == (15360 ^ 3546422286)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (((-((max(var_3, 5812))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [i_1] = (max(var_2, 7680));
                                var_18 &= 15351;
                                var_19 = (min(var_19, ((max(((0 ? 8796036169393819177 : 8796036169393819174)), ((max(-21848, 4620))))))));
                            }
                        }
                    }
                    var_20 &= var_2;
                }
            }
        }

        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            arr_15 [i_5 + 1] &= var_12;
            var_21 |= ((max(((var_8 >> (58308764 - 58308734))), ((max(var_2, var_3))))));
            var_22 += ((!((max(1, (arr_9 [i_0 + 3]))))));
        }
        /* vectorizable */
        for (int i_6 = 3; i_6 < 19;i_6 += 1)
        {
            var_23 *= var_6;
            var_24 = ((!(((18446744073709551613 ? 7659 : 8386560)))));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        {
                            arr_27 [i_6] [i_0] [i_7] [i_6] [i_0] = ((-(~var_1)));
                            arr_28 [i_0 - 2] [i_0 - 2] [i_7] [i_8] [i_9] = (((!var_1) ? ((48 ? var_13 : (arr_10 [i_9] [i_8] [i_6 - 2] [i_6 - 2] [i_0]))) : -32763));
                        }
                    }
                }
            }
            var_25 = (min(var_25, 32774));
        }
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 1; i_11 < 8;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 4; i_13 < 9;i_13 += 1)
                {
                    {
                        var_26 = (i_13 % 2 == zero) ? (max(15, ((((max(1, var_12))) ? ((var_11 >> (((arr_5 [i_10] [i_11] [i_13] [i_13]) + 6717)))) : (~-18841))))) : (max(15, ((((max(1, var_12))) ? ((var_11 >> (((((arr_5 [i_10] [i_11] [i_13] [i_13]) + 6717)) - 20794)))) : (~-18841)))));
                        var_27 -= ((max((var_4 * var_0), 1)));
                        arr_42 [i_10] [1] [i_12] [i_13] [i_13] = ((-(max(var_5, -8796036169393819178))));

                        for (int i_14 = 3; i_14 < 9;i_14 += 1)
                        {
                            var_28 = (max(var_7, ((max(var_1, -16720)))));
                            var_29 ^= var_8;
                            var_30 -= (max((max(((68719474688 ? 57856 : (arr_44 [i_14 - 3] [i_14 - 3] [i_10] [i_13] [i_12]))), (arr_36 [i_11 + 1] [i_11 - 1] [i_12]))), ((~(~var_10)))));
                        }
                    }
                }
            }
        }
        arr_47 [i_10] = 6;
    }

    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        var_31 = ((((max(3350855023, 1))) ? ((var_3 ? (max(8553661595611635157, var_2)) : -1)) : var_7));
        var_32 = var_5;
        var_33 = (max(((max(var_0, 4))), 1));
    }
    var_34 += -var_7;
    #pragma endscop
}
