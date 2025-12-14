/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = (arr_0 [i_0]);
        arr_5 [i_0] = ((((min((arr_1 [i_0]), (arr_3 [i_0])))) ? (max((arr_1 [i_0]), (arr_3 [i_0]))) : (225 > 205)));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_11 = (min(var_11, (((((max(((-1073741824 ? (arr_7 [17] [i_1]) : var_2)), ((((arr_6 [i_1]) <= var_7)))))) | ((30 ? ((var_1 ? var_3 : var_9)) : 237)))))));
        var_12 = (min(var_12, (arr_7 [i_1] [i_1])));
        arr_8 [i_1] = 225;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] [i_2] = var_7;
        arr_12 [i_2] = ((~(var_9 + 30)));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        var_13 ^= (((var_4 ^ (arr_14 [i_6] [i_4]))));
                        arr_24 [i_3] [i_4] [i_5] [i_6] = ((((((28475 ? var_2 : var_10)) ? -29854 : (((arr_6 [i_3]) ? (arr_17 [i_3] [i_4] [i_3]) : (arr_14 [i_3] [i_3])))))));
                    }
                }
            }
        }
        arr_25 [i_3] [i_3] = ((((!var_6) >= (((arr_15 [i_3] [i_3]) ? var_10 : -1257074469)))));
        var_14 *= (max(((min(111, 31))), (((arr_15 [i_3] [0]) ? ((min(var_2, var_6))) : (var_4 || var_4)))));
        var_15 = ((((((((var_10 ? (arr_9 [i_3]) : 213))) ? ((((arr_18 [i_3] [i_3]) == 30))) : ((~(-2147483647 - 1)))))) ? (max(var_4, ((var_3 % (arr_14 [i_3] [i_3]))))) : ((var_1 ? var_6 : (((arr_21 [i_3] [i_3] [i_3]) & var_3))))));
    }
    var_16 = (min(var_16, var_9));
    var_17 = var_1;
    var_18 = ((((((var_5 ? var_0 : var_7)) >= var_1)) ? var_0 : var_7));
    var_19 *= ((var_3 <= (((((max(var_2, var_1)) >= var_2))))));
    #pragma endscop
}
