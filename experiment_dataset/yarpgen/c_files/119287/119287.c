/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((arr_2 [i_0 + 4]) ? ((max((arr_0 [i_0]), var_4))) : var_6));
        arr_4 [6] [i_0] = ((((var_3 - (arr_0 [i_0 - 1]))) ^ (((max(var_6, (arr_2 [i_0 + 1])))))));
        var_17 = max((((((var_9 ? (arr_0 [i_0]) : var_8))) ? (var_10 & var_3) : var_16)), (((arr_2 [i_0 + 2]) ? (((((arr_0 [i_0]) + 9223372036854775807)) >> (var_9 - 1489231913102930030))) : (arr_1 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (((arr_5 [i_1]) ? var_1 : (arr_6 [i_1])));
        var_18 ^= var_15;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    {
                        var_19 = (min(var_19, ((((arr_8 [i_2] [i_2]) < ((var_13 << (((arr_15 [i_2] [i_2]) - 2023520495185621995)))))))));
                        var_20 = (min(var_20, (((~(arr_13 [i_3] [i_3] [i_3 + 1] [i_3] [i_3]))))));
                    }
                }
            }
        }
        var_21 = ((((arr_2 [i_1]) | (arr_1 [i_1] [9]))));
    }

    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        arr_19 [6] = ((((((max((arr_18 [i_5] [i_5]), (arr_17 [i_5])))) ? var_1 : var_4)) & var_9));
        arr_20 [18] = (max((max((((arr_17 [i_5]) ? var_15 : var_0)), ((max((arr_16 [i_5]), var_2))))), (((((((arr_17 [i_5]) % (arr_17 [i_5])))) && (((var_16 ^ (arr_17 [i_5])))))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 22;i_7 += 1)
            {
                {
                    var_22 = (max(var_22, (max((var_10 / var_15), (((var_14 | (arr_24 [i_7 + 1] [i_7 + 1] [i_7 + 2] [i_7 - 1]))))))));
                    arr_25 [i_5] [i_6] [i_7 + 2] [i_7] = (max(var_12, (max((arr_21 [i_5]), (-1 / 3505059355769776447)))));
                }
            }
        }
    }
    var_23 = ((((((var_13 >= var_1) << (var_12 == var_2)))) > ((((255 ? 3505059355769776447 : 23302)) ^ (((var_11 ? var_9 : var_4)))))));
    var_24 = var_2;
    var_25 = var_11;
    #pragma endscop
}
