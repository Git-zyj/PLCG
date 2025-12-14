/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~1);
    var_15 = (-29545 ^ 26336);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_16 = (max(var_16, ((((arr_3 [9]) - (((((arr_12 [i_1 + 1] [i_1] [i_2]) != 26336)))))))));
                        var_17 = ((((((-38 + 2147483647) >> (-3983995390172033356 + 3983995390172033373)))) / ((((1895165527 <= (arr_0 [i_2]))) ? (58731948 == var_8) : (arr_8 [i_2] [i_3])))));
                        var_18 = (max(((((arr_5 [i_0] [i_1] [i_3]) == (arr_10 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1])))), (max(4236235348, var_2))));
                        var_19 &= (((((arr_6 [i_1 - 1]) | 4236235348)) == (~0)));
                    }
                }
            }
            arr_14 [i_0] = (~(min(11, 3627835229)));
            arr_15 [i_1] = (max((((((var_9 + 2147483647) >> (8896229190001178227 - 8896229190001178205))) > ((-28527 ? 1235958755 : var_13)))), (((((107 ? (arr_12 [i_0] [i_0] [i_1 - 1]) : 38))) <= (arr_3 [i_1])))));
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
        {
            arr_20 [0] [0] [i_4] = 3;
            arr_21 [0] [0] = (arr_3 [i_4 + 2]);
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            arr_25 [i_0] [i_5] = (((~-671191572) & 36410));
            var_20 = (((max((arr_9 [i_0] [i_5] [i_5] [i_5]), (arr_9 [7] [i_0] [i_0] [3]))) | (((arr_9 [i_0] [i_0] [i_5] [i_5]) & 61378))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 8;i_7 += 1)
                {
                    {
                        var_21 = (min(var_21, (((~(((!((((arr_1 [i_7 - 1]) ? 21019 : 31)))))))))));
                        var_22 -= ((((((max((-9223372036854775807 - 1), var_10))) ? (arr_24 [i_0] [i_5] [i_7 - 1]) : ((max((arr_27 [i_6] [i_7]), (arr_18 [i_5] [i_7])))))) >> (!16)));
                        arr_31 [i_0] [i_0] [i_6] [i_0] [i_6] = (((((max(4236235337, 1940193564))) ? 1 : ((61378 ? 1048575 : 15)))));
                        arr_32 [i_0] [i_6] [i_7] = max((~-47), (11 || 23829));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            arr_35 [i_0] [1] [9] = (!65524);
            arr_36 [i_0] [i_8] = (!((((arr_34 [10] [i_8]) + 15))));
            var_23 = (((((!(arr_10 [i_0] [i_0] [i_0] [5])))) + (!-183940015)));
            var_24 = (((((26640 ? 1 : (arr_16 [i_8])))) ? (arr_34 [i_0] [i_8]) : 1));
        }
        var_25 = ((~(max((arr_6 [i_0]), (arr_19 [i_0])))));
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 3; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    {
                        arr_50 [i_9] [i_10] [i_11] [i_12] = (min(4294967281, -111726055478753032));
                        var_26 = (max(var_26, ((((-var_1 >= 65) % -1945045899485922002)))));
                    }
                }
            }
        }
        var_27 = 1;
    }
    var_28 = (((((62 | ((-4146183218833165915 ? 1696740363 : 134217727))))) ? var_10 : var_6));
    #pragma endscop
}
