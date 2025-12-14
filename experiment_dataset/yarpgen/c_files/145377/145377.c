/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_4 [i_0] = ((((((arr_2 [6] [i_1]) ? ((var_5 ? var_1 : 4398046511103)) : var_7))) && ((max(var_11, var_5)))));
            var_12 = var_0;
        }
        arr_5 [i_0] = (max((((((max(var_9, 7))) || -var_1))), (~7)));
        arr_6 [2] = var_9;
        var_13 *= (max((((((var_4 & (arr_0 [i_0])))) ? ((((arr_3 [1] [1] [i_0]) ? 2097151 : var_2))) : (arr_0 [i_0]))), var_7));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_14 = (((max((((arr_7 [5] [i_2]) ? var_11 : var_11)), ((2047 >> (var_5 - 204026582))))) != (((((!(arr_3 [i_2] [i_2] [i_2])))) & (max(var_10, var_0))))));
        arr_9 [i_2] &= ((((((var_1 ? var_6 : var_1)))) + ((((arr_3 [i_2] [i_2] [14]) < ((var_3 ? -4 : (arr_8 [i_2]))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        arr_12 [1] = (((((arr_1 [13] [13]) ? var_9 : (arr_0 [i_3]))) & (arr_8 [i_3])));
        arr_13 [i_3] = ((var_5 == (arr_10 [i_3] [i_3])));
        var_15 = var_11;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_16 = (((arr_17 [i_3] [i_3]) ^ var_3));
                    var_17 = (min(var_17, var_2));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            {
                var_18 = ((((max((((arr_22 [i_6]) ? (arr_22 [i_6]) : var_9)), (arr_22 [i_6])))) ? ((var_7 ? ((~(arr_26 [i_7]))) : var_11)) : (((-2097140 >= (arr_24 [i_6] [i_7] [i_6]))))));
                var_19 = 12;
                var_20 *= -2097166;
            }
        }
    }
    var_21 = (max((max((!var_2), (((var_0 + 2147483647) << (1 - 1))))), ((max((var_3 && var_10), var_2)))));
    #pragma endscop
}
