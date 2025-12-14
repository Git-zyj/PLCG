/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((5935503774063036215 < var_13) ? var_3 : (var_3 == var_11)))) ? (((~((min(65535, 4)))))) : (var_9 + 17592186036224)));
    var_15 &= var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_16 = (max(var_16, (((max(24756, ((20618 << (24755 - 24745))))) != (((((!(arr_7 [i_0] [13] [3] [i_2])))) >> ((((arr_5 [12]) || var_13)))))))));
                    arr_8 [i_0] [1] [1] &= (min(4294967287, 24756));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = (((((+(max((arr_9 [i_0] [i_1]), var_9))))) ? 24764 : var_1));
                                arr_14 [i_0] [i_0] [i_2] [i_4] [i_4] |= (((arr_0 [3] [i_3 + 3]) ? (((min(var_8, (arr_13 [i_0] [8] [i_4] [i_0]))))) : (((-24757 <= ((var_3 ? var_1 : var_1)))))));
                                var_18 = (1 || 24756);
                                var_19 = ((min(((min(var_11, (arr_13 [i_0] [i_1] [i_1] [i_4]))), (max(var_6, var_5))))));
                            }
                        }
                    }
                    arr_15 [i_1] = var_2;
                    arr_16 [11] [i_1] [i_1] = (~0);
                }
                arr_17 [6] |= var_1;
                var_20 = (((((max((!1), -24765)))) <= (arr_7 [i_0] [i_1] [i_1] [i_0])));
                var_21 = (max(((((-39 ? -24786 : 24756)) > var_1)), (18066593318594768057 || -24747)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_22 = -24764;
                        arr_30 [i_6] = ((((!((((arr_18 [i_5]) ? (arr_18 [i_6]) : var_1)))))) > (arr_18 [i_8]));
                    }
                    for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                    {
                        var_23 &= var_8;
                        var_24 ^= max((max((arr_28 [i_5] [i_6] [i_7] [i_9]), var_12)), ((((arr_20 [i_5] [i_6]) ? (arr_20 [i_5] [i_9]) : (arr_20 [i_5] [i_5])))));
                    }
                    for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                    {
                        var_25 = (((((+((-24755 ? (arr_27 [i_5] [21] [i_7] [21]) : var_8))))) != (max((max((arr_19 [i_5] [i_5]), var_11)), ((min(24741, 24766)))))));
                        var_26 = (min(var_26, ((max((min(1, 24733)), 23)))));
                        arr_35 [i_6] [i_7] [i_10] = (((min(0, -24742))));

                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            var_27 &= ((~((max(1, 1)))));
                            var_28 = ((-(((!(arr_36 [i_11] [i_11] [i_7] [i_10] [i_6]))))));
                        }
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            arr_40 [i_5] [i_5] [i_10] [i_10] = ((((~(arr_20 [i_5] [i_10]))) ^ (max(24763, (arr_20 [i_5] [i_10])))));
                            var_29 = (((((((arr_24 [i_6] [i_12]) ? var_2 : 590462360)) == ((512 ? 24745 : var_3)))) ? ((((min(var_3, 123))) - (arr_37 [i_5] [i_6] [i_5]))) : ((var_8 ? var_0 : ((var_6 << (var_6 - 14889)))))));
                        }
                        arr_41 [i_5] [i_7] [i_7] = (max((var_10 <= 262143), (((arr_23 [10] [i_6]) ? (arr_23 [i_7] [i_10]) : (arr_23 [i_5] [i_7])))));
                    }
                    var_30 = (((((((arr_25 [i_5] [i_6] [i_5] [i_7]) == (arr_19 [i_6] [i_6]))))) ^ (min((arr_26 [i_5] [i_7]), (arr_21 [i_5] [8])))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 1; i_13 < 17;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                {
                    var_31 &= 3348501967;
                    arr_51 [i_13] = max(var_2, ((!(arr_21 [i_13 + 1] [i_14]))));
                }
            }
        }
    }
    #pragma endscop
}
