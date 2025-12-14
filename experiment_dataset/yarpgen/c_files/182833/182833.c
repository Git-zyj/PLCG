/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((~(min(var_2, 379057921)))) + 9223372036854775807)) >> (var_9 + 531953627)));

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_13 *= ((((((arr_0 [8]) ? (arr_0 [10]) : 1))) && (((~(arr_0 [10]))))));
        var_14 ^= ((91 ? (((((var_8 ? 67700870 : (arr_0 [10])))) ? (((4678791024061021875 ? (arr_3 [12]) : (arr_2 [i_0 - 1])))) : (arr_3 [4]))) : ((((4135269257287793222 || (arr_2 [i_0 + 1])))))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    {
                        var_15 = (((((var_11 >> ((((7399656799694985248 ? 1088022128161788880 : 191)) - 1088022128161788864))))) > ((53 ? (arr_12 [10] [10] [i_3] [10] [i_3] [i_3]) : 179))));
                        var_16 = (((max(((((arr_5 [i_2]) || -1947100361))), 682543940))) ? (((arr_8 [i_3]) ? var_2 : ((((arr_12 [i_1] [10] [i_1] [12] [7] [i_1]) ? -2096311672 : (arr_5 [i_1])))))) : ((max(((((arr_8 [i_3]) || var_5))), (arr_10 [i_1 + 1] [i_1 + 1] [i_2 + 1] [i_4 + 1])))));
                    }
                }
            }
        }
        arr_13 [i_1] = ((!(((((((arr_1 [10]) ? 626198173 : 12530587377467197204))) ? ((5748919056205020755 ? (arr_10 [i_1] [i_1 + 1] [3] [i_1]) : var_10)) : (((((arr_5 [8]) != 7399656799694985260)))))))));
        var_17 = (max((min((arr_4 [i_1]), (arr_12 [0] [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1]))), ((min(1382419470, (max(4083150169, var_5)))))));
    }
    for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_18 = (min(var_18, (((((((((var_6 ? var_4 : 1))) ? (var_6 < var_2) : (((arr_5 [i_5]) * (arr_11 [i_5 + 2] [i_5])))))) ? (((11047087274014566368 >= 214) ? (arr_3 [4]) : (((arr_15 [i_5]) ? var_8 : var_2)))) : (arr_9 [i_5] [i_5] [2] [i_5]))))));
        arr_17 [i_5] = (arr_3 [i_5]);
        arr_18 [i_5] [i_5] = ((!((((min(4612, (arr_11 [i_5] [i_5])))) && var_7))));
    }
    var_19 = (((((((var_7 ? var_4 : var_8))) ? -2096311672 : (min(var_4, var_2)))) - (1 - var_5)));
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            {
                arr_26 [i_6] [i_7] [5] = ((((-2096311649 || ((((arr_21 [i_6] [i_6]) ? (arr_24 [11] [i_6]) : (arr_23 [i_6] [i_7] [i_6]))))))) & ((((145 ? var_6 : (arr_22 [i_6]))))));
                var_20 = (min(var_20, (arr_19 [11])));
            }
        }
    }
    #pragma endscop
}
