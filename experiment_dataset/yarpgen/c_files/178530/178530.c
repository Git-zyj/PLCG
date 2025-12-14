/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_6);
    var_13 = ((((-var_9 ? var_10 : var_4))) ? -var_10 : (max(var_0, (var_4 ^ var_1))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 &= (max(var_10, ((+(((arr_0 [i_0] [1]) ? 18446744073709551615 : (arr_1 [i_0] [19])))))));
        arr_2 [i_0] [i_0] = ((max(var_8, var_7)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1] = (arr_4 [17] [i_1]);
        var_15 = 1;
        arr_6 [i_1] = (((arr_3 [i_1]) & var_11));
        var_16 *= (((arr_4 [i_1] [i_1]) / (3 < var_1)));
    }
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        var_17 = (min(var_17, ((((arr_3 [i_2 + 1]) != (min((arr_1 [i_2] [i_2 + 2]), (arr_8 [i_2 + 3]))))))));
        var_18 ^= (min(((var_3 ? (min(30, var_0)) : -2)), (var_3 || -21228)));
        arr_9 [i_2] [i_2] = (9860 ^ 4294967295);
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_14 [i_3] = ((-(((arr_11 [i_3] [i_3]) ? var_0 : ((((!(arr_4 [i_3] [i_3])))))))));
        arr_15 [i_3] [i_3] = (arr_3 [i_3]);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        arr_22 [i_3] [i_4] [i_5] [i_3] [i_5] [i_4] = (min((((max((arr_11 [i_3] [i_3]), (arr_4 [i_6] [6]))) > ((((arr_19 [i_3] [i_3] [i_5] [i_6]) - (arr_20 [9])))))), (((arr_16 [i_4] [i_4]) || (arr_17 [i_3])))));
                        var_19 = (min(var_19, (!6152339208961042660)));
                        var_20 = (((((-((var_6 ? (arr_16 [i_5] [i_5]) : (arr_10 [i_5])))))) ? -466718420 : var_1));
                    }
                }
            }
        }
        arr_23 [i_3] [i_3] = ((max((((0 >= (arr_20 [i_3]))), (max(var_2, var_8))))));
    }
    #pragma endscop
}
