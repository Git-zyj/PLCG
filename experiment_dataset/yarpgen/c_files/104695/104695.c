/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_3);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_13 = 1;
                        var_14 = ((arr_10 [i_2] [i_0] [i_2 - 1] [6]) ^ (max(-2026820960, (max((arr_6 [i_0]), var_11)))));
                        var_15 = (min(var_1, ((-2026820960 ? (arr_3 [i_2 - 1] [i_2] [i_2]) : var_7))));
                        var_16 = (arr_2 [i_0]);
                        var_17 ^= (-(arr_10 [i_0] [i_3] [i_2 - 1] [i_3]));
                    }
                }
            }
        }
        var_18 |= 52814;
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        var_19 = (max(var_19, (~1)));
                        var_20 ^= var_9;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                {
                    arr_24 [i_0] [i_0] [i_8 - 1] = (((((((((arr_8 [i_0] [i_7] [i_0] [i_0]) ? 1 : 12722))) ? ((((arr_11 [i_8] [i_0] [i_0] [5] [i_0] [i_0]) >> (var_4 - 9260155135154954990)))) : (max(var_4, var_4))))) ? (arr_15 [i_0] [i_7 + 2] [i_0]) : (var_10 > var_9)));
                    arr_25 [i_0] [i_0] = ((var_3 ? var_6 : (arr_20 [i_8] [i_7])));
                    arr_26 [6] [i_7] [i_0] [i_8 + 4] = (max((arr_11 [i_7] [i_7 + 1] [i_8] [i_7] [i_8] [1]), (max(var_10, var_7))));
                    arr_27 [i_0] [i_7] [i_0] = ((1 ? ((((max(18446744073709551615, 18446744073709551615))) ? var_10 : var_2)) : (arr_11 [i_8 + 1] [i_8 + 2] [i_7 - 1] [14] [i_7 + 3] [i_7])));
                }
            }
        }
        var_21 = (min(var_4, (arr_2 [i_0])));
    }
    for (int i_9 = 1; i_9 < 16;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                {
                    var_22 -= (((((var_4 >= 146) ? (var_5 + var_1) : -var_2)) % ((((((var_8 ? (arr_34 [i_9] [i_9]) : 11806))) >= (var_1 ^ var_0))))));
                    var_23 = (~var_0);
                    var_24 = (((max((min(var_3, var_3)), var_1)) ^ (((((((arr_29 [i_9]) ? 1 : var_6))) ? (((315895286 >> (var_3 - 515174157707670591)))) : (var_10 + var_2))))));
                }
            }
        }
        arr_36 [i_9] [i_9] = (arr_35 [i_9 - 1] [7] [i_9 - 1]);
    }
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        /* LoopNest 3 */
        for (int i_13 = 1; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 23;i_15 += 1)
                {
                    {
                        var_25 = (min(var_25, 52812));
                        var_26 = (((((18446744073709551615 ? (max(var_5, (arr_43 [i_15] [i_14] [i_13] [i_12]))) : (arr_44 [i_12] [i_12] [i_12] [i_15])))) ? var_9 : var_0));
                        var_27 = (max(var_27, (arr_40 [i_12])));
                        var_28 = (min(var_28, ((((((((12724 ? 1790615879 : 242)) << (((~var_11) - 1373124415))))) > (min(var_7, (max(672339326666665911, 1189542995)))))))));
                    }
                }
            }
        }
        arr_45 [i_12] = var_2;

        for (int i_16 = 0; i_16 < 25;i_16 += 1)
        {

            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                var_29 = var_0;
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 25;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 21;i_19 += 1)
                    {
                        {
                            var_30 = var_0;
                            var_31 = ((((((((var_6 ? var_2 : 672339326666665911))) ? (arr_43 [i_12] [i_12] [i_12] [i_12]) : var_10))) ? (arr_42 [i_18] [i_17] [i_16] [i_12]) : (((((var_2 ? (arr_42 [i_12] [i_12] [i_12] [i_12]) : var_10))) ? (~var_5) : var_10))));
                        }
                    }
                }
            }
            var_32 ^= 133;

            for (int i_20 = 1; i_20 < 1;i_20 += 1)
            {
                arr_60 [i_20] [i_20] = ((~(((!(arr_54 [i_12] [i_16] [0] [i_12] [i_20 - 1]))))));
                /* LoopNest 2 */
                for (int i_21 = 3; i_21 < 24;i_21 += 1)
                {
                    for (int i_22 = 1; i_22 < 1;i_22 += 1)
                    {
                        {
                            var_33 -= ((((16594692979851144965 ? (arr_43 [i_12] [i_16] [i_20 - 1] [i_22]) : var_7)) ^ ((((((!(arr_54 [4] [i_12] [i_12] [i_12] [i_12])))) >> (var_4 - 9260155135154954986))))));
                            arr_67 [i_22 - 1] [i_20] [i_20] [i_20] [i_12] = -315895296;
                        }
                    }
                }
                arr_68 [14] [i_20] [i_20] = ((var_1 ? (((var_6 ? (((arr_38 [i_16] [i_16]) ? var_11 : var_7)) : (arr_64 [21] [i_16] [i_20] [i_16] [i_12])))) : ((14346894499530322512 ? (arr_51 [i_12] [i_12] [i_12] [i_20]) : var_10))));
                var_34 = (((((max(var_1, var_0)) + ((min((arr_51 [i_12] [i_16] [i_16] [i_16]), (arr_51 [i_12] [i_12] [i_20] [i_12])))))) | -var_5));
            }
            for (int i_23 = 0; i_23 < 1;i_23 += 1)
            {
                /* LoopNest 2 */
                for (int i_24 = 3; i_24 < 22;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 25;i_25 += 1)
                    {
                        {
                            var_35 ^= (!7602594891076095998);
                            var_36 = (min(var_36, (!32)));
                        }
                    }
                }
                var_37 = (min(var_37, var_6));
                var_38 -= var_11;
            }
        }
        for (int i_26 = 0; i_26 < 25;i_26 += 1)
        {

            for (int i_27 = 0; i_27 < 25;i_27 += 1)
            {
                var_39 = (min(var_39, var_7));
                var_40 = ((((((min(var_2, var_9))) ? var_0 : ((-10708 ? var_0 : var_4)))) > (min(var_3, (var_10 > 13666668350014179266)))));
            }
            var_41 = ((((-var_7 >= (!var_5))) ? -66 : var_2));
            arr_83 [i_12] [i_26] = (max((((!(var_2 && var_0)))), var_2));
        }
    }
    #pragma endscop
}
