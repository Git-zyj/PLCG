/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = (((((-(arr_4 [i_0] [i_0])))) ? var_8 : var_0));
            var_12 = (arr_4 [i_0] [i_0]);
        }
        var_13 *= var_10;

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_11 [i_0] = ((-13 ? (((~((var_11 ? var_8 : var_2))))) : (arr_10 [i_0] [i_2])));
            arr_12 [i_2] |= (((((var_8 ? ((((!(arr_7 [i_0] [i_2]))))) : (min(-8251982508275174055, 30516))))) ? (arr_5 [i_2]) : 8251982508275174054));
        }
        var_14 = ((var_0 - ((9412 - ((var_0 ? (arr_10 [i_0] [i_0]) : (arr_7 [i_0] [i_0])))))));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        var_15 = (min((min(var_4, (arr_4 [i_3] [i_3]))), var_0));
        arr_17 [i_3] [i_3] = (arr_2 [i_3]);
        var_16 = (min(var_16, var_9));
        var_17 |= (((((((arr_5 [10]) || var_8))) % var_10)));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        var_18 = -0;
                        var_19 = (max(var_19, ((((((~14020360326206032007) | ((1 ? var_4 : -6705)))) >> ((((1 && 1) || ((((arr_20 [i_6]) ? (arr_7 [i_5] [i_6]) : 0)))))))))));
                        arr_28 [i_4] [i_4] [i_4] [i_6] [i_6] [i_7] = ((8251982508275174054 ? 3 : 12887157129660954535));
                        arr_29 [i_5] = (arr_10 [i_4] [i_4]);
                    }
                }
            }
        }
        var_20 = (((((403349846602947628 ? var_9 : var_1))) || (!var_6)));
        arr_30 [i_4] = ((((var_9 ? ((663177707 ? 1 : -8251982508275174055)) : 1)) > 218));
        arr_31 [i_4] = ((~((((((((arr_5 [10]) && (arr_16 [i_4] [i_4]))))) <= (min(1, 8251982508275174055)))))));
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
    {
        var_21 = 8325898197381310081;
        var_22 = (arr_4 [i_8] [i_8]);
        var_23 = ((arr_22 [i_8] [i_8] [i_8]) > (min(var_2, (var_5 ^ var_0))));
    }
    var_24 = 18147625901129021466;
    #pragma endscop
}
