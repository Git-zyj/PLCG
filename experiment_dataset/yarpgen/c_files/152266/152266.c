/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_10 = var_7;

            for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
            {
                var_11 = var_0;
                var_12 = (min(var_12, ((((arr_7 [7] [i_1] [7] [7]) % var_5)))));
            }
            for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
            {
                var_13 = (((!31744) >> (((var_5 ^ var_4) - 963524644))));
                arr_11 [i_1] = (((-979095952 <= 856390759544547446) * (max(var_1, 0))));
            }
            arr_12 [i_1] = (17590353314165004169 && 70368609959936);
        }
        var_14 *= ((((var_0 ? (arr_7 [i_0 - 2] [i_0 + 1] [i_0 - 3] [i_0]) : (2748347142 | 197))) > (var_7 | 0)));

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_15 = ((((~(arr_4 [i_0] [i_0]))) >> var_6));
            var_16 |= 18446673705099591680;
        }
    }
    for (int i_5 = 2; i_5 < 19;i_5 += 1)
    {
        arr_19 [i_5] = (((~192) - (arr_18 [i_5 - 2])));
        var_17 = var_6;

        for (int i_6 = 2; i_6 < 18;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                var_18 = (min(var_7, ((((var_3 ? var_2 : 1)) >> var_1))));
                var_19 = (min(var_19, (((!(((((var_8 ^ (arr_25 [i_5] [i_5] [i_5])))) < 1)))))));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                arr_28 [i_6] = var_4;
                arr_29 [i_5] [i_5] [i_8] [i_6] = ((var_2 ? var_0 : (arr_10 [i_5] [i_5 + 1] [i_8] [i_6 + 1])));
            }
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                var_20 = 17244376875059818248;
                arr_32 [i_5 + 3] [i_6] [i_6] [i_6] = var_4;
            }
            for (int i_10 = 3; i_10 < 20;i_10 += 1)
            {
                arr_35 [i_6] [i_6] [i_6] [i_6] = ((~(((var_1 <= (arr_6 [i_6] [i_6 - 2] [i_10 - 1] [i_5 + 3]))))));
                arr_36 [i_6] = (193 * 2297333605);
                arr_37 [i_6] [i_6] [i_6] [i_5] = (var_7 * var_1);
            }

            for (int i_11 = 3; i_11 < 21;i_11 += 1)
            {
                var_21 = var_3;
                arr_41 [i_6] [i_6] = ((!(arr_30 [i_5] [i_6])));
                arr_42 [i_6] = (max((min(1, -4321)), (arr_9 [i_5 + 1] [i_6 + 2])));
                var_22 *= (((var_4 + 2147483647) << (((arr_5 [i_6] [i_11]) - 1575986503))));
                arr_43 [i_6] = var_5;
            }
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                var_23 = (max((var_4 * 197), (var_0 / 85)));
                arr_47 [12] [i_6] [i_6] [i_5] = var_2;
            }
        }
        var_24 = (max((!var_5), (arr_24 [i_5] [i_5] [18] [i_5])));
    }
    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {
        var_25 |= var_9;
        arr_50 [i_13] = var_1;
        arr_51 [i_13] = ((var_8 ^ ((-(arr_30 [i_13] [i_13])))));
    }
    for (int i_14 = 0; i_14 < 14;i_14 += 1)
    {
        arr_54 [i_14] |= (((arr_46 [i_14] [i_14] [i_14] [5]) ? var_8 : (max((((-63 + 2147483647) << (var_2 - 1))), var_7))));
        arr_55 [i_14] = var_6;
        var_26 = ((((((arr_1 [i_14]) && var_2))) * (((0 * var_1) * var_1))));
        var_27 = (((max(var_0, ((var_7 ? var_9 : var_0)))) / 9214364837600034816));
    }
    var_28 = (min(var_28, var_8));
    var_29 = var_3;
    var_30 = var_2;
    var_31 ^= (var_0 >= var_1);
    #pragma endscop
}
