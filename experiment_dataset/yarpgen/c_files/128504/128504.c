/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_18;
        var_20 = (max(var_12, (((!(arr_0 [i_0]))))));
        var_21 = ((((min(4294967295, var_5))) ? (arr_0 [i_0]) : (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] = (arr_4 [i_1]);
        var_22 = (min((((arr_4 [i_1]) * ((1 / (arr_5 [i_1]))))), ((((var_9 ? var_10 : 128)) << (((max(4294967295, (arr_5 [i_1]))) - 4294967288))))));
        arr_7 [i_1] = 127;
        var_23 = ((-((-(var_17 * 1)))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = ((((((1 ? 107 : 148)) & (arr_10 [i_2]))) != (((arr_10 [i_2]) ? ((var_5 ? var_14 : (arr_10 [i_2]))) : ((var_9 ? 147 : 139))))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                {
                    arr_17 [i_3] [i_3 - 1] [i_3] = ((~(max(var_14, ((1 ? var_4 : (arr_12 [i_3])))))));
                    arr_18 [i_3] = (((((-(arr_15 [i_3] [i_3])))) ? ((-(arr_8 [i_4 + 2]))) : ((((!var_12) || (var_9 ^ 2147483647))))));
                    arr_19 [i_2] [i_3] [1] [1] = 4294967273;
                    var_24 = (min(var_24, (((~(-var_2 + var_2))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                {
                    var_25 -= (((var_8 + var_9) ? 1 : (((arr_16 [i_6 + 2] [i_6 + 3] [i_6 - 1] [i_6 + 1]) - (arr_16 [i_6 + 2] [i_6 + 2] [i_6 + 2] [i_6])))));
                    arr_24 [i_2] [i_2] [i_6 + 3] |= (((max(1, (arr_23 [i_6 + 2] [i_6 + 2] [i_6 - 1])))) ? (max(var_14, 9112673458170826650)) : var_11);
                }
            }
        }

        for (int i_7 = 1; i_7 < 19;i_7 += 1)
        {
            var_26 = (-((1 ? var_5 : var_2)));
            arr_27 [i_7] = ((!((((arr_13 [i_7 + 2] [i_7 + 2]) ? (arr_13 [i_7 + 1] [i_7 - 1]) : (arr_16 [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 + 2]))))));
            arr_28 [i_7] = ((~((+((var_16 ? (arr_26 [i_2] [i_7 + 1]) : var_8))))));
        }
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_27 = (arr_14 [i_10]);

                        for (int i_11 = 4; i_11 < 19;i_11 += 1)
                        {
                            var_28 = ((((arr_29 [i_11 + 1]) || 128)) ? ((var_11 - (arr_29 [i_11 - 1]))) : (((arr_29 [i_11 - 1]) ? (arr_29 [i_11 - 1]) : var_10)));
                            var_29 -= 0;
                        }
                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            var_30 = ((((var_6 ? ((var_1 ? 1073741824 : var_4)) : 32)) + var_12));
                            var_31 = (min(var_31, 1));
                            var_32 ^= (!var_15);
                        }
                        var_33 &= ((-((var_13 ? (arr_8 [i_8]) : (arr_8 [i_8])))));
                    }
                }
            }
            arr_41 [i_8] = (max((arr_38 [i_8] [i_8] [i_8] [i_8] [i_8]), (((1 && (arr_38 [i_8] [16] [i_8] [17] [i_8]))))));
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        {
                            arr_50 [i_2] [i_8] [i_8] [i_2] [i_15] = (((((~(max((arr_12 [i_8]), -1073741850))))) ? 1 : var_0));
                            var_34 += (max(((var_3 | (arr_30 [i_2]))), 14087));
                            arr_51 [i_8] = ((-(arr_23 [i_15] [i_8] [i_2])));
                        }
                    }
                }
            }
            var_35 = (min(var_35, var_2));
        }
        for (int i_16 = 0; i_16 < 21;i_16 += 1)
        {
            var_36 = (((+(min((arr_52 [i_2]), var_6)))));
            var_37 = ((-(arr_40 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])));
            var_38 += (!128);
            var_39 -= ((min(var_15, (min(var_15, 3251418066555892215)))));
        }
        arr_54 [i_2] &= (((((-366262612 | (max(var_0, (arr_31 [i_2] [12] [i_2] [i_2])))))) ? (((arr_35 [i_2] [i_2]) ? (var_8 + 164) : (max(var_8, -1935049070348793903)))) : ((max(var_12, (4294967295 < var_0))))));
    }
    #pragma endscop
}
