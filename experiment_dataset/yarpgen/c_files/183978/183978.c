/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((1 ? (1308402895 || var_12) : var_12)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (max(var_18, ((((max(1, var_16)))))));
        arr_3 [i_0] = 48;
        arr_4 [i_0] = var_14;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_7 [1] = (min((((arr_0 [2]) ? (arr_0 [0]) : (arr_0 [1]))), ((((min((arr_6 [i_1]), 171))) - (arr_6 [i_1])))));
        var_19 = ((!((max((arr_5 [3] [i_1]), 1)))));
        var_20 += (((arr_6 [i_1]) + (arr_6 [i_1])));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_21 = -107;
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        arr_19 [i_2] [i_3] [i_4] [i_5] = ((var_5 ? -11882005642970022834 : -5207090327865663337));
                        arr_20 [i_2] [i_4] [i_4] [i_3] [8] [i_4] = (1 ? ((((arr_14 [i_3]) ? var_9 : 1))) : (min((~148), var_2)));
                    }
                }
            }
        }
        var_22 = ((((min(var_13, (((var_2 ? var_10 : -17)))))) ? (arr_0 [i_2]) : 104));
        var_23 = ((75 ? ((((((arr_2 [i_2] [1]) ? 8908165600551568216 : (arr_10 [5] [i_2])))) ? (arr_12 [i_2]) : (max(6564738430739528782, var_15)))) : 14));
    }
    #pragma endscop
}
