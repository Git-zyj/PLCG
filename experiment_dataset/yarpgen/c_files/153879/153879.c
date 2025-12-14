/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_7 [i_2] [i_1] [i_2] = (arr_2 [i_0]);
                    arr_8 [i_0] [i_2] = ((((min(var_15, var_2))) ? (((arr_2 [i_0 - 2]) & (arr_3 [i_1] [i_2] [i_2]))) : ((max(((31020 ? 480 : (arr_0 [i_0 + 2]))), (min(6930, var_4)))))));
                    var_20 = (((((-((var_16 >> (17629 - 17629)))))) < ((-(arr_2 [i_0 + 2])))));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = (min(((((((arr_1 [i_2]) >> (var_5 - 4906064261718336749)))) ? (arr_1 [i_0 - 1]) : 243)), (-127 - 1)));
                    var_21 = (((((-9223372036854775804 ^ var_15) ? 6930 : (var_9 & var_15))) & ((((arr_3 [i_0] [i_0 - 3] [i_2]) & var_10)))));
                }
                arr_10 [0] = (((var_14 ? var_8 : (((var_1 ? -106 : (arr_0 [i_1])))))));
            }
        }
    }

    for (int i_3 = 4; i_3 < 20;i_3 += 1)
    {
        var_22 = 3183508792119237905;
        arr_13 [i_3] = (arr_11 [i_3]);
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_23 ^= ((-(min(var_14, var_1))));
        var_24 = (max(var_24, (((((((((var_15 & (arr_16 [i_4])))) ? ((-3494386417806389697 ? var_7 : var_13)) : var_19))) ? (arr_15 [i_4]) : (((arr_11 [1]) | (max(var_2, var_1)))))))));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_19 [i_5] = ((9223372036854775799 <= -0) * (max(4088, 32759)));
        var_25 = ((var_2 && ((min((((arr_1 [i_5]) ? 3995549384 : 103)), var_10)))));
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 11;i_6 += 1)
    {

        for (int i_7 = 2; i_7 < 14;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_32 [i_8] [i_6 - 2] [i_8] [i_9] = ((arr_2 [i_6 - 3]) < (arr_27 [i_8] [8]));
                        arr_33 [i_8] [3] [i_7] [i_7] [i_7] [i_8] = ((var_19 != var_12) % ((var_19 ? var_5 : var_14)));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 0;i_12 += 1)
                    {
                        {
                            var_26 = (~(arr_26 [i_6 - 1] [i_7] [i_6 + 4] [i_12 + 1]));
                            var_27 = var_11;
                            arr_43 [i_6] [i_7] [i_10] [i_11] [i_11] [i_12] [i_12] = (((arr_20 [i_7 - 1] [i_12 + 1]) >> (((arr_25 [i_6 + 4]) - 4716))));
                            arr_44 [i_6 + 3] [14] [11] [i_11] [i_12] = ((9223372036854775804 ? (arr_25 [i_6]) : (var_1 | var_7)));
                        }
                    }
                }
            }
            arr_45 [i_7] [1] |= var_7;
        }
        arr_46 [i_6] = ((var_0 ? var_1 : (arr_21 [i_6 + 1])));
    }
    var_28 = (min(var_3, var_4));
    var_29 = ((~(min((-106 | 110), (((-121 + 2147483647) >> (var_19 + 121)))))));
    #pragma endscop
}
