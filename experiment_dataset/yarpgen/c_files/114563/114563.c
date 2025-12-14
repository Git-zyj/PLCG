/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 &= var_5;

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_13 = (max(var_13, (((((min((arr_4 [i_0] [7] [i_1]), (arr_4 [i_0] [i_1] [i_1])))) << ((((max(var_5, (arr_4 [i_0] [i_0] [i_1])))) - 220)))))));
            var_14 = (min(var_14, (((arr_3 [i_0]) ? (((!(arr_3 [i_0])))) : (~13315)))));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_15 += ((max((arr_1 [i_2] [i_0]), var_9)));
            var_16 -= ((((!((min(var_7, var_7)))))) == var_7);
            var_17 |= (max(-18446744073709551608, (arr_4 [i_2] [i_0] [i_0])));
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_18 = (max(var_18, var_5));
                    var_19 = (max(var_19, ((max((arr_4 [i_0] [i_3 + 2] [i_4]), (max(var_9, (arr_9 [i_3 + 2] [i_3 - 2]))))))));
                }
            }
        }

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_17 [i_0] |= (!var_11);
            var_20 = (max(var_20, (((((((!(arr_12 [i_5] [i_0]))))) <= (((((max(var_10, var_7)))) + -1051409331313935707)))))));
            var_21 = (max(var_21, (max((max(1526336343, (arr_10 [2] [2]))), (!1)))));
            var_22 = (max(var_22, ((min(((532676608 ? (min(18446744073709551608, 35740)) : (((239 << (31 - 21)))))), (arr_4 [i_0] [i_5] [i_5]))))));
        }
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            var_23 = (max(((((arr_7 [i_6 + 1]) | var_1))), (((arr_7 [i_0]) ? (max(var_1, var_11)) : (((max(-25877, var_9))))))));
            var_24 = (max(var_24, ((max(((((var_6 ? (-32767 - 1) : (arr_10 [i_0] [i_6]))) % (((14894518537462515736 ? 29796 : (arr_12 [4] [i_6])))))), (((!((((-5267220176373693052 + 9223372036854775807) << (3337 - 3337))))))))))));
            var_25 = (min(var_25, ((max(var_3, (((arr_18 [i_0] [i_0] [i_0]) + ((0 ? (arr_6 [i_0] [i_0]) : var_0)))))))));
            arr_21 [i_6] [i_6] = ((((1 ? 29800 : (max(3552225536247035890, 65535)))) | (((((max(25877, (arr_8 [10]))) < (max((arr_15 [i_6]), var_10))))))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_26 = var_1;
            var_27 = (max(var_27, (((((11833618400923367181 != (arr_8 [i_0]))) ? ((var_8 ? (arr_12 [i_7] [i_7]) : (arr_8 [i_0]))) : (((-8707030723785886372 ? 49689 : var_8))))))));
        }
    }
    for (int i_8 = 2; i_8 < 9;i_8 += 1)
    {
        var_28 ^= 11833618400923367181;
        var_29 = (max(((max(-3327, (1 * var_10)))), (max(var_1, (((arr_19 [i_8] [i_8] [i_8]) >> (var_9 - 9924)))))));
        var_30 = (max(((((max(var_0, (arr_26 [i_8] [i_8]))) > ((((arr_16 [i_8] [i_8] [i_8]) ? 3053835733157842192 : (arr_20 [i_8] [i_8]))))))), (arr_22 [i_8] [i_8 - 1])));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        var_31 = (!(((50105 ? 21635 : 127))));
        var_32 = (max(var_32, ((((arr_27 [i_9]) ^ var_6)))));
    }
    for (int i_10 = 1; i_10 < 15;i_10 += 1)
    {
        var_33 = (min(var_33, (max(((min((max(var_5, var_5)), var_8))), (max(8410311570640612241, (arr_28 [i_10])))))));
        var_34 += 3336;
        var_35 = (max((~255), (max((((arr_27 [i_10]) ^ 8410311570640612241)), ((max(var_6, var_7)))))));
    }
    var_36 &= (max((!-3352), var_8));
    #pragma endscop
}
