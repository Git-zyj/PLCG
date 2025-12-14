/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((((var_3 / (min(var_8, var_2)))) == (((var_4 * (max(182497660, var_4))))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = -470;
        var_18 = (((1 >= var_12) * var_8));
        var_19 *= ((23266 - ((4294967292 ? var_5 : var_0))));
        var_20 ^= var_12;
        var_21 = var_9;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_22 = (((((61589 != var_2) > ((min((arr_5 [i_2]), -48))))) ? ((var_6 ? (((-182497669 + 2147483647) >> (425050930 - 425050900))) : ((min(var_1, (arr_5 [i_2])))))) : (((((-31432 ? (arr_3 [i_1]) : var_9))) ? (!var_15) : -425050934))));
            var_23 = (((((((-182497638 ? 2375724613 : 9223372036854775807))))) | ((min(9940301024943898833, var_7)))));
            var_24 = (((((min(182497638, -118)) < (var_2 > 182497673))) ? ((min(var_7, (arr_1 [i_2])))) : var_4));
            var_25 -= 1;
            arr_9 [i_1] [i_1] [i_2] = (min((max(var_14, (arr_7 [i_1] [i_2]))), (arr_5 [i_2])));
        }
        var_26 = (min(var_26, (((((min(var_5, var_1))) ? 2656003014383674000 : (max((arr_0 [i_1]), (arr_3 [i_1]))))))));
    }
    for (int i_3 = 3; i_3 < 11;i_3 += 1)
    {
        var_27 = (arr_11 [i_3] [i_3 - 3]);
        var_28 = (((arr_1 [i_3 - 2]) << (((min((min(var_15, (arr_12 [i_3]))), (((132 ? 56752 : 1))))) - 56739))));
        var_29 ^= ((((((var_10 ? 182497637 : var_1)) ? 2656003014383673972 : var_9))));

        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            arr_15 [i_3] = ((!var_6) ? (((~(((arr_12 [i_3]) ? var_5 : 8176))))) : ((~(((arr_14 [7]) ? (arr_14 [i_3]) : -5239646176698080328)))));
            arr_16 [8] = ((((max(56, 182497669))) ? (!1) : (((arr_13 [i_3]) + var_0))));
            var_30 = (min(var_30, ((max((((!(arr_1 [i_4])))), ((-2656003014383674000 - ((min(4026141607, -182497669))))))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_19 [i_5] [i_5] = ((var_15 ? var_3 : (((var_12 ? 1 : 1)))));
            var_31 = ((((((-2147483647 - 1) ? -123 : 48))) ? -5796505435401277672 : 0));
            var_32 ^= (((arr_17 [0]) ? var_2 : (~-2656003014383674000)));
            var_33 = -182497638;
        }
    }
    var_34 = (((((var_5 || 2822077635) && var_7)) || 3232037677));
    var_35 = (min(var_9, ((48 ^ ((5260631606226901867 << (((-2031741412 + 2031741462) - 50))))))));
    #pragma endscop
}
