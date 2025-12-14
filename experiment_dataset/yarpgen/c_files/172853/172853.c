/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = var_7;
        arr_5 [i_0] = ((!(-9223372036854775807 - 1)));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_19 = (min(var_19, (((var_0 ^ var_6) ? (((arr_6 [i_1] [i_1]) ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1]))) : (min((arr_6 [i_1] [i_1]), (arr_0 [i_1] [i_1])))))));
        var_20 = (min(var_20, (1 == var_7)));
        arr_9 [i_1] = var_14;
        var_21 = (((arr_8 [i_1] [i_1]) != (arr_0 [i_1] [15])));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_22 ^= ((var_3 ? (((-(arr_12 [i_2] [12])))) : (~9223372036854775785)));
            var_23 = (((((var_6 ? 65533 : 18404))) ? ((((!(arr_8 [i_2] [i_2]))))) : (arr_8 [i_2] [i_3])));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_24 = 2560908663622865808;
            var_25 = (arr_0 [i_2] [i_4]);
            arr_16 [i_2] [i_2] = (arr_10 [i_2]);
            arr_17 [i_2] = ((!(!var_14)));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            arr_21 [i_2] [i_2] [i_5] = 17931640143322154652;
            arr_22 [i_2] [i_5] [1] = ((-((1 ? -8945 : 8119))));
            arr_23 [1] [1] [1] |= (1 ^ var_1);
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_26 = (max(var_26, var_11));
            var_27 = (min(var_27, 34704));
            var_28 = (((42932 ? 21057 : (arr_24 [i_2]))));
            var_29 = (((var_16 || var_2) || ((max(var_5, (arr_3 [i_2]))))));
        }
        var_30 = ((-((((min(var_18, (arr_6 [i_2] [i_2]))) != 90)))));
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
    {
        var_31 *= var_8;
        arr_29 [i_7] = ((-(max(8811996868591577780, (!var_2)))));
    }
    var_32 = ((-(max((((var_13 >> (var_1 - 828516910)))), var_14))));
    #pragma endscop
}
