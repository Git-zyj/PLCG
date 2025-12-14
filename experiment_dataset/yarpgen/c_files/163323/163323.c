/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [i_2 - 1] [i_1 - 2] [i_0] &= (arr_9 [i_1] [i_2 - 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_20 += (min((((((~25) + 2147483647)) >> ((min(1, var_7))))), 1));
                                var_21 = ((((~((var_14 ? var_11 : 3123078640347273756)))) >> (min((((arr_5 [i_2 - 2]) >> var_6)), (((1 >> (((arr_8 [i_1 + 1] [6]) - 5436957276890366275)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (~-1450553110);
    var_23 = var_2;
    var_24 ^= var_12;

    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        arr_17 [4] = (~-1450553087);
        arr_18 [i_5] = ((((max(6710897481469028051, (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))) ? (((var_16 ? (arr_5 [i_5]) : var_0))) : ((((max((arr_6 [i_5]), (arr_0 [i_5])))) ? ((((arr_4 [i_5] [i_5] [i_5]) && (arr_12 [i_5] [i_5])))) : 1))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] = (min((((arr_21 [i_6]) >> (var_0 - 10353132))), (!var_0)));

        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            arr_27 [i_6] [i_6] [i_7] = ((((~(arr_13 [i_6] [i_6] [i_6] [i_6] [i_7]))) * (((((arr_2 [i_7]) && (arr_2 [i_6])))))));
            var_25 ^= (arr_16 [i_6]);
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    {
                        arr_35 [i_9] [i_6] [i_7] [i_6] = ((~(((arr_6 [i_7]) << (var_0 - 10353140)))));
                        var_26 = ((((~(~7286626442815607761))) >> (((((arr_29 [i_6]) * (arr_30 [i_9] [i_9]))) + 7714))));
                        var_27 = (((var_11 ? (arr_9 [i_6] [i_6]) : (arr_6 [i_6]))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
