/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        var_13 = var_2;
                        arr_12 [5] [i_3] [i_3] = var_3;
                        arr_13 [2] [2] [2] [12] [i_2] [12] &= ((((arr_4 [i_3 + 1]) ? var_3 : (arr_1 [i_3 - 3]))));
                        arr_14 [15] [i_3] = (min((min((arr_7 [i_3 + 2] [i_3 - 2] [i_3 - 3] [i_3 - 1]), (arr_10 [i_3 + 1] [i_3 - 1] [i_3] [i_3 + 2]))), ((((32767 && 33) || (!var_2))))));
                    }

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_17 [i_0] [11] = ((2147483647 ? -25251 : 75));
                        arr_18 [3] [9] [3] = ((33 ? 466151795385949 : 3464735882579537059));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_6] [21] [1] = ((var_9 <= ((((arr_21 [i_5] [i_6 + 1] [i_5] [i_6 - 1] [0] [17]) ? var_2 : (arr_21 [8] [i_6 + 2] [21] [i_6 - 1] [18] [i_6 + 2]))))));
                            var_14 &= (-1034363330 | -32767);
                            arr_25 [10] [2] [20] [2] [18] [3] [i_6] = max(((min((max(var_0, var_3)), (!var_4)))), (max(-var_4, (min(var_3, var_8)))));
                        }
                        var_15 -= 25269;
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_16 = (0 && var_11);
                        arr_30 [i_0] [i_0] [i_0] [1] = (max((min((arr_1 [i_0]), ((min(var_1, -9290))))), ((min(var_5, (arr_8 [i_7] [i_2]))))));
                        var_17 = (max((arr_6 [i_0] [i_0]), ((648110015 >> (-25241 + 25247)))));
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        var_18 = (min(var_18, ((((((0 ? -25273 : 1689095698))) ? (((~(arr_6 [i_8] [i_8])))) : var_7)))));
        arr_33 [4] [4] = var_4;
    }
    for (int i_9 = 1; i_9 < 11;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 9;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 10;i_12 += 1)
                {
                    {
                        arr_43 [2] [i_9] [0] [9] [9] = (max(648110012, (arr_36 [i_11])));
                        var_19 = (max(var_3, 0));
                        arr_44 [i_10] [6] &= ((((-(min(-25269, 0))))) ? ((((((var_2 ? var_6 : var_3))) ? -33 : ((min(-32757, 57)))))) : (((~var_0) ? ((((arr_22 [i_10] [i_10] [i_10]) >> (((arr_10 [12] [12] [i_10] [6]) - 6860))))) : (min(3, (arr_0 [i_9]))))));
                        arr_45 [i_9] [1] [1] [1] [i_9] = var_10;
                    }
                }
            }
        }
        arr_46 [i_9] = (max(33, (((-(arr_37 [i_9] [i_9 - 1]))))));
        arr_47 [i_9] [3] = var_2;
        arr_48 [i_9] = (max(((-(((arr_27 [i_9] [i_9] [6]) ? (arr_40 [i_9] [i_9] [0]) : 11759324100045686584)))), ((min((arr_36 [i_9]), var_9)))));
        arr_49 [i_9] = (((648110015 | -648110026) ? -923 : 32767));
    }
    for (int i_13 = 4; i_13 < 12;i_13 += 1)
    {
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 10;i_16 += 1)
                {
                    {
                        var_20 = var_2;
                        var_21 = (!var_8);
                    }
                }
            }
        }
        var_22 -= var_3;
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 13;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 13;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 13;i_19 += 1)
                {
                    {

                        for (int i_20 = 0; i_20 < 13;i_20 += 1)
                        {
                            var_23 = ((-(arr_56 [i_13 - 2])));
                            arr_68 [i_13] [1] [i_13] [1] [0] = ((~((min(-65, -52)))));
                        }
                        for (int i_21 = 1; i_21 < 1;i_21 += 1)
                        {
                            var_24 += (((((-(max((arr_31 [10] [10]), (arr_40 [i_19] [8] [8])))))) ? (((~(max(var_1, (arr_22 [i_19] [1] [20])))))) : (arr_1 [i_13 - 4])));
                            arr_72 [1] [1] [1] = (-648110014 && -648110000);
                            var_25 ^= (-49 / -8132793913986215932);
                        }
                        var_26 = ((121 ? -31459 : 33));
                        arr_73 [i_13] [11] [4] [i_13] = ((((min(var_1, (arr_28 [15] [15] [0] [0] [0]))) <= (var_1 & var_0))));
                    }
                }
            }
        }
        var_27 *= (46 && 648110013);
    }
    /* LoopNest 2 */
    for (int i_22 = 1; i_22 < 19;i_22 += 1)
    {
        for (int i_23 = 0; i_23 < 20;i_23 += 1)
        {
            {
                arr_80 [i_22] [i_22] = ((((min((arr_1 [i_22 + 1]), (arr_1 [i_22 - 1])))) ? (var_11 / var_4) : (min(var_10, (arr_1 [i_22 - 1])))));
                arr_81 [1] [i_22] [18] = -2147483647;
            }
        }
    }
    var_28 = ((var_9 && ((!(var_6 % var_2)))));
    #pragma endscop
}
