/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~var_5);
    var_15 -= ((var_12 % ((max((var_8 > var_5), (max(var_10, var_1)))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = (min(var_16, var_7));
        arr_2 [i_0] = (((min(-247673700, 1))) != var_6);
        var_17 = (((((((((arr_1 [i_0]) ? var_8 : var_5))) ? (arr_1 [i_0]) : (!49838)))) ? (arr_1 [i_0]) : ((-(arr_1 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (arr_3 [i_1]);

        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_18 = -var_0;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        var_19 = ((-(1 == 229376)));
                        var_20 = ((var_13 ? var_9 : (((arr_9 [i_1] [i_2] [15]) ? var_4 : (arr_9 [i_1] [i_1] [22])))));
                    }
                }
            }
            var_21 -= ((!(arr_10 [i_1])));
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
        {
            var_22 = var_0;
            arr_15 [i_1] [i_5] = ((arr_11 [i_1]) ? (arr_7 [i_1] [i_1] [i_5]) : ((((arr_11 [i_1]) | (arr_12 [i_1] [i_1] [i_1] [4] [4] [i_1])))));
            arr_16 [i_5] = var_6;
            arr_17 [i_1] = (((~var_11) + ((31209 ? (arr_13 [21]) : 1))));
        }
    }

    for (int i_6 = 1; i_6 < 19;i_6 += 1)
    {
        var_23 -= 1;

        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            var_24 -= ((((((arr_11 [i_6 + 1]) ? (arr_21 [i_6 - 1] [i_6 - 1]) : var_13))) ? (min(((1 ? var_13 : var_2)), var_5)) : (((((arr_12 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) * (arr_11 [i_7])))))));
            var_25 = ((~((-1 ? var_5 : (var_5 % var_6)))));
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            var_26 = (((((max(var_11, var_3)))) ? 1 : ((min(((var_12 > (arr_4 [i_6 + 1] [i_8]))), ((!(arr_4 [i_6] [i_6]))))))));
            arr_25 [i_6] = ((((((((!(arr_9 [i_6 - 1] [i_6 - 1] [i_6 - 1])))) >> (472684323 - 472684318)))) ? var_12 : (var_5 * var_5)));
        }
        var_27 += ((((!((!(arr_8 [i_6]))))) ? (((((var_11 ? (arr_6 [i_6] [i_6] [16]) : var_9))) ? (arr_19 [0]) : (!var_2))) : ((((!((min(var_4, var_8)))))))));
        arr_26 [i_6] = ((!((min((arr_18 [i_6]), (arr_18 [i_6]))))));
    }
    for (int i_9 = 2; i_9 < 18;i_9 += 1)
    {
        var_28 = (max(var_28, (((((min(var_1, 1))) ? (((min((var_12 != 471405404), (min(35252, (arr_14 [i_9 + 1] [i_9]))))))) : (min((arr_8 [i_9 - 1]), (min(var_8, (arr_19 [16]))))))))));
        arr_30 [i_9 - 2] [i_9 - 2] = var_2;
        arr_31 [i_9 + 1] [i_9 - 1] = (min(((((-(arr_20 [i_9 - 2] [7]))) + (((arr_18 [1]) - var_2)))), (arr_6 [i_9] [i_9] [i_9])));
        var_29 = (min(var_29, (((1 << (4294967295 - 4294967271))))));
        arr_32 [i_9] [4] = 1;
    }
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        var_30 -= (((((!((min(var_3, var_6)))))) < var_9));
        arr_37 [i_10] = (((!-var_2) ? var_11 : var_0));
    }
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        var_31 = (min(var_31, (((!(((arr_41 [i_11]) <= (arr_41 [i_11]))))))));
        arr_42 [i_11] = (arr_40 [i_11] [i_11]);
    }
    #pragma endscop
}
