/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= 251;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, ((((arr_1 [i_0]) ? (min(-38, (min(32758, 1073741822)))) : -var_7)))));
                    var_13 = (max(var_13, (((~((20 ? 4294967292 : -9)))))));
                }
            }
        }
        var_14 |= 32753;
        var_15 = (min(var_15, ((((max((arr_1 [i_0]), (((arr_1 [i_0]) ? -30 : var_8)))) - (((arr_3 [i_0] [i_0]) - (((var_6 ? var_3 : (arr_1 [i_0])))))))))));
        arr_7 [i_0] [i_0] = ((((((-(arr_1 [i_0]))) <= (max(var_4, var_3)))) ? (max(var_8, var_2)) : 2147483647));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 9;i_4 += 1)
            {
                {
                    arr_15 [i_3] [i_3] = (((((-33 ? (arr_14 [i_0] [i_3] [i_4 - 2]) : var_0))) ? (!var_10) : -17075753959022511436));
                    var_16 *= (((var_8 - var_4) * ((min(var_3, (arr_10 [i_4] [i_4]))))));
                    var_17 = (((((((max(var_4, var_1))) ? ((var_2 ? var_1 : -32765)) : 35))) ? 16384 : ((max(32739, 8121862539055916587)))));
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 12;i_5 += 1)
    {
        var_18 = (min(var_18, (((!(var_7 + var_5))))));
        var_19 = (arr_18 [i_5]);

        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            var_20 ^= ((+(((arr_17 [i_6 - 2] [i_5 - 1]) ? (arr_17 [i_6 - 1] [i_5 - 1]) : (arr_17 [i_6 + 1] [i_5 - 2])))));
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        {
                            var_21 ^= min(((var_1 ? var_2 : (max(var_0, var_10)))), ((min((arr_23 [i_5 - 2] [i_9] [i_5]), var_4))));
                            arr_28 [i_5] [i_6] [i_7] [i_8] [i_8] [i_8] [i_6] = (max(((-((var_3 ? var_4 : var_1)))), (((max(var_0, var_7))))));
                            arr_29 [i_5] [i_6] [i_7] [i_5] [i_9] [i_6 - 1] = ((((max(((var_0 - (arr_17 [i_6] [i_9]))), (arr_27 [i_5] [i_5] [i_5] [i_5 - 1] [i_5])))) ? (arr_20 [i_5] [i_6] [i_9]) : 4294967295));
                            var_22 = (max(var_22, ((max((arr_24 [i_5] [i_5] [i_9] [i_5 - 2] [i_5 - 2] [i_7 - 1]), var_6)))));
                        }
                    }
                }
            }
            var_23 = (((((var_8 ? var_6 : (!var_9)))) ? ((((min((arr_19 [i_5]), var_8)) == (arr_18 [i_5 - 1])))) : (arr_21 [i_6] [i_5 - 1] [i_6 - 2])));
        }
        for (int i_10 = 4; i_10 < 10;i_10 += 1)
        {
            arr_32 [i_10] [i_10] [i_10] = (arr_25 [i_5 - 2] [i_5] [i_5] [i_5] [i_5 + 1]);
            var_24 ^= ((var_6 | ((~(arr_30 [i_5 - 1])))));
        }
        for (int i_11 = 2; i_11 < 10;i_11 += 1)
        {
            arr_35 [i_11] [i_11] = var_1;
            var_25 ^= (((((var_9 > ((var_0 ? var_3 : var_2))))) != ((max((var_2 && var_5), (arr_16 [i_5 - 1] [i_11 - 2]))))));
        }
    }
    for (int i_12 = 1; i_12 < 12;i_12 += 1)
    {
        var_26 -= (min(-var_6, ((max(32746, 171)))));
        var_27 ^= min((arr_36 [i_12 - 1]), ((max(var_10, var_7))));
        var_28 ^= var_1;
    }

    for (int i_13 = 0; i_13 < 18;i_13 += 1)
    {
        arr_40 [i_13] [i_13] = ((!(((((max(2090, var_1))) ? var_10 : ((((arr_38 [i_13]) == var_8))))))));
        var_29 += var_6;
        var_30 = (max(var_30, (((((((var_8 ? 1984 : var_6))) == ((var_9 ? var_0 : var_10)))) ? ((((!((min(1, 99))))))) : (min((var_8 >= var_8), (65516 - var_7)))))));
    }
    #pragma endscop
}
