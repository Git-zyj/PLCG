/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 *= 32764;
        var_14 = 4541;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_15 &= 2067271539;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_16 = (max(var_16, (((4294967295 > 32750) ? (127 | 32758) : (arr_11 [i_3] [i_1 + 1] [i_3])))));
                                var_17 = (((arr_13 [i_4 - 1] [i_4] [i_3] [i_1 + 1] [19] [i_2 - 1] [i_4]) - 1));
                                arr_15 [i_2] [i_2] [i_2] [22] [i_2] [i_2] [20] = var_12;
                                arr_16 [i_1 + 1] [i_2 + 1] [i_3] [i_4] [i_2] = 32759;
                            }
                        }
                    }
                    var_18 = (min(var_18, (!var_5)));
                    var_19 -= ((4294967292 << (((arr_12 [i_1 + 3] [i_1] [13] [i_2 - 1] [i_2 - 1]) - 34576))));
                }
            }
        }
    }
    for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
    {
        arr_21 [15] &= 8166;
        arr_22 [i_6] [i_6] = ((-(((arr_14 [i_6] [i_6] [22] [i_6 + 1] [3]) * var_7))));
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    {
                        arr_34 [i_7] [i_8] [10] [i_10] [i_8] = (!(((-32764 ? 6794 : (arr_17 [i_10] [i_10])))));
                        arr_35 [i_8] [i_8] [i_8] [7] = (min(17091918668272565351, 47521));
                        var_20 = ((-32764 << (var_11 - 3813985918064252186)));
                        var_21 = (((((23044 << (var_2 - 10854419836180791891)))) ^ (max(1, ((-25656 ? 32748 : 16387851125757738815))))));
                    }
                }
            }
            var_22 *= (min((!32764), (max(3517773099, var_4))));
            arr_36 [i_8] [19] = max((((arr_9 [i_7] [i_7] [14] [i_8]) > ((var_12 & (arr_11 [i_7] [i_8] [i_8]))))), ((3729272850 != (arr_9 [i_8] [i_8] [7] [i_7]))));
            /* LoopNest 3 */
            for (int i_11 = 2; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        {
                            arr_44 [i_7] [i_7] [12] [16] [i_7] [i_11] &= ((-(arr_25 [i_11 + 3])));
                            arr_45 [i_7] [i_8] [i_7] [i_7] [18] [i_7] [i_7] = (((var_7 ? (arr_14 [i_7] [1] [i_12] [i_11 - 2] [3]) : (1 & 2058892947951812789))));
                            var_23 -= (((((!1) ? 9223367638808264704 : (65535 >= 2058892947951812801))) - -28188));
                        }
                    }
                }
            }
        }
        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {
            arr_50 [i_7] [10] = ((!((((arr_38 [i_7] [i_14] [i_14]) / var_8)))));
            arr_51 [i_7] [19] = (max((!23044), ((-((218 ? 113117927685014479 : 0))))));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 20;i_15 += 1)
        {
            var_24 = (7073259474111041973 ^ var_9);
            var_25 = ((-(arr_40 [i_15])));
            var_26 = (-32743 * 65524);
        }
        var_27 = (max(var_27, (((((min((var_11 > 1), var_2))) && (((2605664020913934377 ? -8865 : 25676))))))));
    }
    var_28 = var_7;
    #pragma endscop
}
