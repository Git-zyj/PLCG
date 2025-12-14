/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = (((-(arr_3 [i_0]))));
                arr_6 [i_0] = (max(0, 44));
            }
        }
    }
    var_17 = var_15;

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_9 [i_2] = (max((9327697668768021104 - 119), (arr_3 [i_2])));
        arr_10 [i_2] = (((((max(59, 4006404968612732606)) >> (-54 + 62)))) ? (-5 >= 11637461248811491046) : -1);
        arr_11 [i_2] = min(((-(arr_2 [i_2] [4]))), (((arr_2 [i_2] [i_2]) ? (arr_2 [i_2] [i_2]) : (arr_2 [i_2] [i_2]))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {

        for (int i_4 = 4; i_4 < 17;i_4 += 1) /* same iter space */
        {
            arr_16 [i_3] [i_4] = ((-59 ? -44 : 5));
            var_18 = ((-1718595689 - (arr_1 [i_3] [i_3])));
            arr_17 [10] [i_4 - 4] [i_3] = ((-6500247811491352317 ? 6500247811491352317 : -1718595689));
        }
        for (int i_5 = 4; i_5 < 17;i_5 += 1) /* same iter space */
        {
            var_19 -= (arr_19 [i_3] [i_3]);
            var_20 = (min(var_20, ((((((arr_1 [i_3] [i_5]) + 2147483647)) >> 1)))));
            var_21 = (min(var_21, (((~(arr_12 [8]))))));
        }
        arr_20 [i_3] = (((((var_5 ? 24684 : var_6))) ? ((55 ? (arr_12 [i_3]) : var_5)) : (arr_4 [i_3])));
        var_22 = (arr_0 [i_3]);
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
    {
        var_23 |= (max(32, 50338));
        var_24 = (max(var_24, ((min((max(var_13, (max(var_0, (arr_21 [6]))))), ((((((var_8 ? 14808 : 18446744073709551594))) ? ((min(-9, var_6))) : 1))))))));
        arr_23 [i_6] [i_6] = -2;
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
    {
        var_25 &= ((~((~(((arr_25 [i_7] [8]) ? 1 : (arr_7 [8])))))));
        arr_26 [i_7] [i_7] = ((((~(arr_7 [i_7])))) ? (((min((arr_7 [i_7]), 1)))) : (((arr_7 [i_7]) ? (arr_7 [i_7]) : 6500247811491352326)));
        var_26 ^= (min((max((arr_0 [15]), (arr_18 [i_7] [i_7] [0]))), (min((max((arr_0 [i_7]), var_10)), ((((arr_3 [i_7]) ? (arr_21 [6]) : -28)))))));

        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            arr_29 [i_7] [i_7] = (((min(((((arr_18 [i_7] [i_8] [i_7]) ? 14336 : (arr_0 [i_8])))), ((var_6 ? (arr_15 [i_7] [i_7] [i_8]) : var_1)))) / (((arr_27 [i_7]) ? ((((arr_15 [i_7] [i_7] [i_8]) ? 52 : var_4))) : (min((arr_3 [i_7]), var_8))))));
            arr_30 [0] |= (((arr_8 [i_7]) ? (((var_6 & 23092) ? 0 : (6500247811491352317 + 18446744073709551615))) : (((-((122 ? 96 : 10)))))));
            arr_31 [i_7] [i_8] = ((((max((((arr_15 [i_7] [i_7] [i_8]) ? 1 : (arr_21 [i_7]))), 8871014606457338596))) ? (((arr_4 [i_7]) ? (((arr_27 [6]) ? 70 : var_0)) : (((arr_25 [i_7] [i_7]) ? 11155 : var_2)))) : -81));
        }
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            var_27 = ((((((max(32763, 3974767656282536825))) ? (((((arr_0 [i_7]) || (arr_15 [i_7] [i_7] [16]))))) : var_7)) << ((((max(65535, 22857))) - 65479))));
            arr_34 [i_7] = (((((((((arr_3 [i_9]) ? (arr_4 [i_7]) : (arr_33 [i_7])))) ? ((var_14 ? (arr_1 [i_7] [i_7]) : 1)) : ((max((arr_22 [i_7]), var_4)))))) ? ((-59 ? (arr_13 [i_7] [i_9]) : (arr_13 [i_7] [i_9]))) : ((((arr_14 [i_7]) ? 255 : 1)))));
            var_28 ^= ((((((arr_33 [i_9]) ? (arr_7 [i_9]) : (arr_7 [i_9])))) ? (((((var_14 ? 536870911 : 1))) / (arr_33 [i_9]))) : (33191 & 3)));
        }
    }
    #pragma endscop
}
