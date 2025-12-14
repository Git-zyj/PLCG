/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((-var_15 >= (((58186 ? var_2 : var_3)))))) + var_16));
    var_18 = (((((((!var_1) ? 74 : var_11)) + 9223372036854775807)) << ((((max(250, 0))) - 250))));
    var_19 = ((((var_13 >> (-9223372036854775792 + 9223372036854775794))) != (min(var_10, (var_13 - var_7)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = var_1;
        var_21 = (((43978 >> (var_13 - 414034256))));
        arr_3 [i_0] |= ((var_5 << (var_4 != var_8)));
        var_22 ^= (var_12 % var_9);
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_23 |= (max(((((min(9223372036854775797, var_6))) ? (min(var_5, var_4)) : (!var_10))), (var_6 && 9223372036854775798)));
                    arr_12 [i_1] [i_2] |= max(-4617681132676322476, ((((var_10 + 2147483647) >> (var_16 - 13940)))));
                }
            }
        }
        var_24 = (min(var_24, ((min(113, 127)))));
    }
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_25 = (max(var_25, (127 < 26)));
            var_26 = ((57 << (43969 - 43949)));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            var_27 = ((~(max(-124, ((max(var_3, var_3)))))));
            arr_20 [12] |= (((max((~var_10), ((142 ? var_15 : 130193389)))) < ((-((var_2 ? var_7 : var_1))))));
            var_28 = 9223372036854775801;
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {
            var_29 = (!var_12);
            var_30 |= (max((max(55572, -322879208)), (~992)));
            var_31 = (min(((var_4 ? ((var_8 ? var_3 : var_16)) : var_8)), ((min(var_14, var_7)))));
        }
        var_32 = (((((1386452471137647797 ? 0 : 52))) || var_1));
        var_33 = (var_7 | var_15);
        arr_25 [i_4] = (max(101, 45));
    }
    for (int i_8 = 1; i_8 < 10;i_8 += 1)
    {
        var_34 ^= var_16;

        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            var_35 = var_1;
            var_36 |= ((var_3 ? ((var_8 ? var_13 : var_16)) : var_8));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            var_37 = (101 >= var_2);
            arr_35 [i_8] = var_8;
            var_38 = (var_13 == var_13);
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            var_39 = var_11;
            var_40 |= (((-2045705640 >= var_6) ? var_6 : (var_5 / var_16)));
        }
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            var_41 = (!var_13);
            var_42 = (((((-(!-266786785258057620)))) + (max((~var_11), (var_16 | var_6)))));
            var_43 = (min(((min(var_3, (~var_2)))), 0));
            var_44 = var_13;
        }
        var_45 = (((var_5 % var_16) | var_8));
    }
    var_46 ^= var_4;
    #pragma endscop
}
