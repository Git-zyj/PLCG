/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((18446744073709551615 - var_5) - ((((-2619 ? 18446744073709551610 : 15)) / (var_7 + var_3)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = var_7;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_14 = (((((arr_7 [i_1 + 1]) ? -31564 : 2513206856651894587)) >= ((((arr_7 [i_1 - 2]) ? (arr_7 [i_1 + 2]) : (arr_7 [i_1 + 1]))))));
                    var_15 = (144114638320041984 > 6507868271558512133);
                }
            }
        }
        var_16 = (arr_0 [i_0]);
        var_17 = (-10459 - -8024790395394776998);
    }
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        arr_11 [i_3] = (max((arr_8 [i_3]), (arr_10 [i_3])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                {
                    var_18 = 10901534210445274115;

                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        var_19 = (max(var_19, (arr_8 [i_5])));
                        var_20 = (i_3 % 2 == zero) ? ((((((arr_16 [i_6] [i_6] [i_3]) + 2147483647)) >> (((((arr_9 [i_3]) ? (arr_17 [i_3] [i_4] [i_4] [i_4] [i_4] [20]) : (arr_9 [i_3]))) + 1476066873252715955))))) : ((((((((arr_16 [i_6] [i_6] [i_3]) - 2147483647)) + 2147483647)) >> (((((((arr_9 [i_3]) ? (arr_17 [i_3] [i_4] [i_4] [i_4] [i_4] [20]) : (arr_9 [i_3]))) + 1476066873252715955)) - 330851996334982379)))));
                        var_21 += 18302629435389509631;
                    }
                    arr_18 [i_3] [i_4] [i_3] = (arr_17 [i_3] [i_4] [i_4] [11] [i_4] [3]);
                }
            }
        }
        arr_19 [i_3] = ((((var_4 ? (arr_10 [i_3]) : (((arr_8 [i_3]) ? (arr_9 [i_3]) : (arr_15 [i_3] [i_3] [i_3])))))) ? ((((((min((arr_15 [i_3] [i_3] [i_3 - 1]), var_5))) == (arr_14 [i_3 - 1]))))) : ((var_5 * (((arr_14 [i_3 - 1]) >> (var_9 - 1267002339))))));
    }
    for (int i_7 = 1; i_7 < 10;i_7 += 1)
    {
        arr_24 [i_7] = ((var_6 ? (min(var_8, (arr_20 [i_7 + 2]))) : (((max(6916, (arr_20 [i_7 + 1])))))));
        var_22 = ((max(var_4, (min(var_1, var_3)))));
    }
    var_23 = (((min((((var_9 >> (var_5 - 402996182)))), (min(var_0, 4294967274)))) > var_5));
    #pragma endscop
}
