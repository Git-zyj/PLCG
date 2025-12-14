/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((!var_4), var_10));
    var_15 = (min(7231, 1851207035));
    var_16 = 4284473179066262311;
    var_17 = 0;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = (min((((1514601399 ? 58310 : (((!(arr_0 [i_0]))))))), (max(var_2, 24961))));
        var_19 = -685628926;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_20 = ((~(((((-25495 ? var_1 : 16117)) < (!var_4))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_10 [0] [i_1] [i_1] = (1 << var_8);
            var_21 = (((127 ? 58070 : 4980)));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    {
                        var_22 &= ((var_9 ? 25495 : (arr_5 [i_4 - 3] [i_4 - 2])));
                        arr_15 [i_1] [i_1] [i_1] [i_1] = (arr_12 [i_4] [i_2] [i_2]);
                    }
                }
            }
        }
        var_23 = ((~((((min((arr_6 [3] [3]), (arr_14 [i_1] [i_1])))) ? (((min(var_11, 73)))) : (max(var_6, var_2))))));
        var_24 *= (((((((var_1 ? 1 : 28)) & (arr_1 [i_1])))) ? (min(((min(26629, var_2))), (min(var_13, 13106776616045059979)))) : (((((min(var_10, 57471))) ? 1 : ((65514 ? 1 : -3945)))))));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
    {
        var_25 ^= (((((min((arr_5 [i_5] [i_5]), 23)) + (((var_1 ? (arr_14 [i_5] [i_5]) : 1))))) ^ (!26649)));
        arr_20 [i_5] = -11;
        arr_21 [i_5] = (min((((arr_19 [i_5]) ? (arr_12 [i_5] [i_5] [i_5]) : (max(1, 3)))), (arr_1 [i_5])));
        var_26 = (min(((13106776616045059971 ? ((12 ? var_4 : var_1)) : (arr_12 [i_5] [i_5] [i_5]))), ((min((arr_19 [i_5]), 1)))));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 18;i_6 += 1)
    {
        arr_25 [i_6] [10] &= ((var_0 >> (((arr_16 [i_6 + 2]) + 4055022147000219794))));
        var_27 = ((((((arr_0 [i_6]) ^ 1))) ? (((2047 ? var_10 : 23734))) : (arr_3 [i_6 + 1])));
        var_28 += (((((var_8 ? var_10 : var_11))) || -16));
        arr_26 [i_6] = arr_11 [i_6] [i_6] [i_6 + 2];
    }
    #pragma endscop
}
