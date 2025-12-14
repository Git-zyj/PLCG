/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((-32754 ? -14012 : 1));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_11 &= ((~(!14012)));
            var_12 = ((14012 ? (!7059020684194059338) : ((min(var_6, var_1)))));
            var_13 = var_7;
            var_14 = (min(var_14, var_2));
        }
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            var_15 = (max(var_15, var_4));
            arr_8 [i_0] [i_0] [i_0] = ((~(var_6 != var_1)));
            var_16 = var_6;
        }
        arr_9 [20] &= (((var_9 ? (max(14011, var_0) : -13986))));
        arr_10 [i_0] = var_0;
        var_17 *= (!var_0);
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        var_18 = (!-4207269068207680239);
        arr_14 [9] [1] = var_5;
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    var_19 -= var_7;
                    var_20 *= (((var_10 / var_1) < 167));
                    var_21 = (((7059020684194059328 - 14001) ? (var_6 == 117) : (var_7 / var_8)));
                    var_22 -= ((((10442582243975339219 ? var_2 : var_8)) != -var_8));
                    arr_24 [i_4] [i_4] [i_6] = ((((max((max(var_4, 14024)), 195565883))) && (((-(var_8 || var_1))))));
                }
            }
        }
        arr_25 [i_4] [1] = ((var_5 || ((((var_4 + 2147483647) << (var_8 - 18446744071610999459))))));
        var_23 += (max((((var_10 + var_1) ? (var_1 == var_4) : var_7)), (!var_1)));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 18;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_24 = ((!(((-(~var_8))))));
                                arr_36 [11] [i_7] [i_7] [i_8] = ((~(min(-var_8, ((var_1 ? var_9 : -34))))));
                                arr_37 [i_8] = ((65528 >> ((((-var_6 ? 13986 : var_7)) - 13978))));
                            }
                        }
                    }

                    for (int i_11 = 1; i_11 < 19;i_11 += 1)
                    {
                        var_25 = var_1;
                        arr_40 [i_4] [i_8] [i_8] [i_11 + 2] = ((-(max(16374, 6371973428589471914))));
                        var_26 ^= ((((max(-13989, var_6))) ? (min(var_7, 7059020684194059341)) : (var_0 ^ var_10)));
                        arr_41 [i_8] = var_5;
                    }
                    arr_42 [i_8 - 2] [i_8] [i_8] [i_4] = (((((47 ? 16140901064495857664 : var_2) ^ ((var_7 ? 17659439443508317807 : 18446744073709551615))))));
                }
            }
        }
        var_27 *= ((var_3 || ((((!-1637549230) ? (!-14007) : var_10)))));
    }
    var_28 = ((~((var_5 >> ((((var_5 ? var_3 : -5469)) + 7465430148943463361))))));
    #pragma endscop
}
