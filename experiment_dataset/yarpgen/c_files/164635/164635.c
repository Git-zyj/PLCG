/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 64343;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = (-90 % 3726594673);
        var_18 |= (((((((arr_2 [i_0]) ? 511 : var_11))) ? (arr_2 [i_0]) : (min(92, 1008576222616831449)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_8 [1] = 13;
        arr_9 [i_1] = (arr_5 [i_1] [i_1]);
        arr_10 [i_1] = ((-76 & (var_9 <= 70)));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_19 = (min(var_19, ((((arr_3 [i_2]) ? (((arr_3 [i_2]) / (arr_3 [i_2]))) : (68 < -28))))));
        arr_15 [i_2] [i_2] = (((~var_1) / ((-68 ? var_15 : var_9))));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    arr_23 [i_3] [i_4] [i_4] [i_4] = (min((568372607 % 105), (((((min(3726594673, -1876949849))) ? ((((arr_21 [i_3] [i_4] [3] [i_4]) || var_11))) : ((var_14 ? var_11 : var_11)))))));

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_20 = ((((var_0 << (var_2 - 35))) & (arr_2 [i_3])));
                        arr_27 [10] [3] [i_5] [i_3] = (min((max(((3855903964832466547 >> (((arr_5 [i_3] [12]) - 3917573266)))), (arr_3 [i_3]))), ((((arr_22 [i_3] [i_3] [i_5] [i_6]) * (((arr_5 [i_3] [i_3]) ? var_12 : 3)))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_30 [i_7] [i_3] [i_3] [i_3] = (((arr_16 [i_3]) || (((arr_3 [i_7]) || var_7))));
                        var_21 *= (((var_10 + 2147483647) >> (((arr_17 [i_7] [i_4]) + 946918117738020232))));
                    }
                    arr_31 [i_5] [i_3] [i_5] [i_5] = (((((3782508311233829885 & var_14) ? (max(-2044392002, (arr_25 [i_3] [i_4] [i_3] [i_4]))) : (17 && var_0))) * ((((((-(arr_0 [11]))) <= (-27390 - 182)))))));
                    var_22 += ((((arr_3 [i_3]) | ((var_3 ? var_2 : 568372623)))));
                    arr_32 [i_3] [i_4] [i_3] = ((((max((arr_3 [i_3]), (arr_17 [i_3] [5])))) || (var_13 != 3726594656)));
                }
            }
        }
        var_23 = (max(1, (arr_3 [9])));
    }
    var_24 += (max(var_2, (((((27390 ? var_15 : var_13))) ? (~568372623) : (min(var_1, var_6))))));
    #pragma endscop
}
