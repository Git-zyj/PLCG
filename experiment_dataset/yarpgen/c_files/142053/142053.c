/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = ((((((arr_1 [i_0] [i_0]) ? (((arr_1 [8] [i_0]) & 46)) : -47))) ? ((-((3389817391 >> (-5452079037661231689 + 5452079037661231694))))) : ((((((arr_1 [i_0] [14]) ? var_8 : var_9))) ? (((((arr_2 [14]) || var_5)))) : (max(148, 4059069643))))));
        var_13 = (max((arr_2 [14]), (arr_2 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        var_14 ^= ((+(((arr_4 [i_1]) ^ (arr_4 [i_1])))));
        var_15 &= ((64488 ? -1682567112 : 3366058595));
        var_16 *= ((~(arr_5 [i_1 + 1])));
        arr_6 [i_1 + 1] = ((~(arr_4 [i_1 - 2])));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_17 += (((((-(min((arr_3 [i_2] [i_2]), var_9))))) ? (arr_9 [i_2] [i_2]) : (arr_4 [i_2])));
        var_18 = (35205 / 843473917);
        var_19 = ((((((min(383543990, 25695))) ? (max((arr_3 [13] [i_2]), (arr_2 [i_2]))) : ((var_4 & (arr_2 [i_2]))))) > ((min((arr_7 [i_2] [i_2]), (arr_7 [i_2] [i_2]))))));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 14;i_3 += 1)
    {
        var_20 = (min(var_20, 5452079037661231689));
        var_21 = arr_4 [0];
        var_22 = (arr_1 [i_3] [i_3 - 2]);
        var_23 = ((!(arr_0 [i_3 + 1] [i_3])));
    }
    var_24 = ((((max((3369720804 - 148), 1418555875))) != (min((min(11252020670191157968, 3366058595)), 928908687))));

    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        arr_14 [i_4] = (arr_13 [i_4]);
        var_25 = (((arr_12 [i_4]) ? (min(-33, 5452079037661231689)) : (((var_6 ? (arr_12 [i_4]) : (arr_12 [i_4]))))));
    }
    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {
        var_26 = (min(((var_5 ? (arr_11 [i_5 - 2]) : (arr_11 [4]))), (arr_1 [i_5 - 2] [i_5 + 1])));
        arr_17 [i_5] = ((~((-(((arr_2 [i_5]) ? (arr_3 [i_5] [i_5]) : var_11))))));
        var_27 &= (~597691833);
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        var_28 = (max(var_28, (arr_27 [22] [22] [i_8] [i_9])));
                        var_29 = (((min(5841040494024722907, var_10)) & (4127684422 && 1023)));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            arr_37 [i_6] = ((var_11 > (arr_27 [i_7] [i_8] [i_10] [i_8])));
                            var_30 = (arr_23 [i_6]);
                        }
                        var_31 ^= (arr_21 [i_8] [i_8] [i_8]);
                        var_32 |= (((arr_24 [i_6] [i_6] [i_8]) <= (arr_21 [i_6] [i_7] [i_7])));
                        arr_38 [22] = arr_24 [i_6] [i_7] [i_7];
                        var_33 = (((((arr_31 [i_6] [i_6] [i_8] [i_6]) - (arr_33 [i_8] [i_8] [i_7])))) ? var_5 : (var_8 - 35206));
                    }
                    for (int i_12 = 2; i_12 < 23;i_12 += 1)
                    {
                        var_34 ^= (arr_35 [i_12 + 2] [i_12] [i_12 - 1] [i_12 + 1] [i_12 + 1] [2]);
                        var_35 = (min(var_35, (arr_24 [i_6] [23] [i_8])));
                        var_36 += (min(-71270756, (arr_26 [i_12] [i_12] [i_12 - 1] [22])));
                        var_37 = (min(var_37, ((((arr_31 [11] [i_12] [i_12 - 1] [i_12]) ? (((arr_23 [i_12 - 2]) & (arr_23 [i_12 + 1]))) : (((-(arr_39 [i_12 + 2] [i_12 - 2] [i_12 - 2])))))))));
                    }
                    arr_41 [1] [i_7] [1] = (((max((min((arr_22 [i_6] [i_7]), 18446744073709551595)), (arr_21 [i_6] [i_6] [21]))) - (((((min((arr_19 [i_6]), var_11))) ? (54 - 5452079037661231661) : (arr_19 [i_7]))))));
                }
            }
        }
    }
    #pragma endscop
}
