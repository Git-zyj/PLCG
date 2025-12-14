/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 ^= ((63 ? (!-90) : (((arr_0 [0]) ? (min((arr_0 [8]), 2237819931051127150)) : (~var_9)))));
        var_18 = (min(var_18, (max((((arr_1 [6]) ? (arr_2 [6]) : (arr_2 [4]))), (arr_2 [0])))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = var_10;
        var_19 = 31;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_10 [i_1] [i_2] = 1;
            var_20 -= (arr_7 [i_1] [i_1]);
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_21 -= (arr_7 [i_1] [i_1]);
            var_22 &= (arr_13 [i_1] [i_3]);
        }
        for (int i_4 = 4; i_4 < 17;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                var_23 = 0;
                var_24 &= (((arr_18 [i_4 - 1] [i_4 - 4]) != (!var_1)));
            }
            arr_19 [i_1] = ((16900988117125931075 ? 737279455 : 8267567959694553910));
            var_25 &= (max((((((((arr_4 [i_1] [i_4]) && 180))) >> (((max((arr_4 [i_1] [i_4 + 1]), 130048)) - 7779502910627828667))))), (max((max(61440, 15971462037625301444)), ((max(3420399508, (arr_11 [i_4] [8] [i_1]))))))));
            var_26 -= ((((var_8 / (1545755956583620541 | 65520))) <= -1807901671));
            var_27 |= ((var_10 + (((~(2037104452 + 4))))));
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    {
                        var_28 = (max(var_28, ((((arr_24 [i_1]) || ((((max((arr_16 [i_8] [i_8]), (arr_22 [i_1] [i_1] [i_1])))) || 0)))))));
                        var_29 = (min(((((-1 + 2147483647) << ((((1488251725 >> (76 - 73))) - 186031465))))), (~4063775528963555448)));
                        var_30 = max((min(var_6, (max((arr_18 [i_1] [i_1]), 4294967295)))), 454766467323295040);
                        arr_29 [i_1] [4] [i_8] [i_1] [i_6] [i_8] = max(((min((max((arr_16 [i_7] [i_7]), 2996272391)), (arr_8 [i_8] [i_8])))), (min(5117003324032217242, (arr_24 [i_1]))));
                    }
                }
            }
            var_31 = (arr_27 [i_1] [8] [8] [i_1]);
            var_32 = (max(var_32, ((max(4042583559, 1)))));
            arr_30 [i_6] = ((!(((-(arr_28 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
            var_33 = ((min((0 <= 139), (arr_3 [i_1]))));
        }
        var_34 = (((-14547 + 2147483647) << (17718 - 17718)));
        var_35 -= (arr_9 [i_1] [i_1]);
    }
    var_36 = ((((16900988117125931074 + (11 == 2713553215))) < (max(((-122110804 ? var_1 : 8583903114364021276)), var_6))));
    var_37 = var_14;

    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        var_38 |= 65535;
        arr_33 [i_9] [i_9] = ((3328871528 ? (((((max((arr_32 [i_9]), 1)) != (290595387 >= var_10))))) : (max((arr_31 [i_9] [i_9]), 38))));
    }
    #pragma endscop
}
