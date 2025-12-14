/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = 18446744073709551608;
        arr_3 [i_0] = 2130857597;
    }
    for (int i_1 = 4; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1 + 1] [i_1 - 4] = ((!(((~(arr_1 [i_1] [i_1]))))));
        var_21 -= var_4;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_22 = ((var_4 & ((min((2130857597 || -1636740254), 15)))));
                    arr_11 [i_3] [i_3] [i_3] = (((((((max(var_3, var_10)) == (max(var_4, 18446744073709551608)))))) | (arr_8 [i_1 + 1] [i_1] [i_3])));
                }
            }
        }
        var_23 = (max((min((arr_4 [i_1 - 3]), var_6)), var_17));
    }
    for (int i_4 = 2; i_4 < 10;i_4 += 1)
    {
        var_24 ^= (arr_13 [i_4]);

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_25 ^= (var_15 ^ var_12);
            var_26 = (arr_1 [i_4] [i_4]);
            var_27 = (((var_15 - (arr_9 [i_4] [i_4 + 2] [i_4] [i_4]))) << ((((61773 | ((var_18 ? var_2 : var_4)))) - 65502)));

            /* vectorizable */
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                var_28 = ((var_16 ? (!var_7) : (arr_2 [i_6 + 1])));
                var_29 = var_7;
                var_30 |= 51204;
                var_31 ^= var_0;
            }
            var_32 -= (arr_7 [i_4]);
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            var_33 = var_3;
            var_34 = (arr_16 [i_4] [i_7]);
            var_35 -= (arr_9 [i_4 - 2] [i_7] [i_4 + 2] [i_4 - 2]);
            var_36 = var_0;
            var_37 = ((((((((var_8 << (16645758396213084433 - 16645758396213084433)))) < (arr_12 [i_4 - 2] [i_4])))) + ((max(167, (min(14332, 167)))))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            arr_23 [i_4] [i_8] [i_4] = ((((((arr_17 [i_4] [i_8]) ? (arr_15 [i_4]) : var_2))) ? (~var_11) : var_1));

            for (int i_9 = 3; i_9 < 9;i_9 += 1) /* same iter space */
            {
                var_38 -= (var_3 + var_11);
                var_39 += ((((312854816 ? 3763 : 255)) == var_8));
                arr_28 [4] [4] [i_9 - 3] [i_4] |= ((var_3 >= (arr_0 [i_9 - 1])));
            }
            for (int i_10 = 3; i_10 < 9;i_10 += 1) /* same iter space */
            {
                arr_32 [i_4 + 2] [i_4] = var_14;
                var_40 = var_9;
            }
        }
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            var_41 -= (arr_34 [8] [i_4 - 2] [8]);
            var_42 ^= min(var_11, (((arr_9 [i_11] [i_11] [i_4] [i_4]) % var_3)));
            arr_35 [i_4] = arr_15 [i_4];
            var_43 = ((!(~var_2)));
        }
        arr_36 [i_4] [i_4] = (((arr_33 [i_4 + 2] [i_4] [i_4 + 1]) ^ var_0));
    }
    var_44 = (var_16 ? var_17 : (3106730500307589826 < var_3));
    #pragma endscop
}
