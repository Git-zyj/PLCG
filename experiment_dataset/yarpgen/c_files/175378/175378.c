/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= ((-931328123 ? (((-127 - 1) ? (min(var_7, var_1)) : -var_14)) : (((((var_1 ? -29788 : var_9))) ? ((var_4 ? var_0 : var_12)) : (((199 ? -986128451 : var_15)))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_18 = (max(((((arr_0 [i_0] [i_0]) != 244))), ((((min(25, (-127 - 1)))) + (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : -931328127))))));
        var_19 = var_5;
        var_20 = (max(var_20, (arr_2 [i_0] [i_0])));
        var_21 = var_12;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = var_12;
        var_22 = (((arr_4 [i_1]) ? (arr_4 [i_1]) : var_14));
    }
    for (int i_2 = 2; i_2 < 12;i_2 += 1) /* same iter space */
    {
        arr_10 [13] = 56;
        var_23 = (max(var_23, (((-(((arr_3 [i_2 - 1]) ? (((max(1, 1)))) : var_9)))))));
        arr_11 [12] = ((arr_2 [i_2 + 1] [i_2 + 2]) ? (((arr_2 [i_2 + 1] [i_2 - 2]) ? (arr_2 [i_2 + 1] [i_2 + 3]) : (arr_2 [i_2 - 1] [i_2 - 1]))) : 37519);
    }
    for (int i_3 = 2; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_24 = ((((arr_4 [i_3 - 1]) ? ((4 ? var_9 : var_13)) : (24184 / var_4))));
        var_25 ^= (max((arr_3 [i_3 + 3]), (((((56 >> (var_5 - 24984)))) ? -1 : 46213))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 15;i_6 += 1)
                {
                    {
                        var_26 = (78 || -29889);
                        var_27 = (max(var_27, ((min((min((arr_20 [i_3] [i_4] [i_4] [i_4]), -964901402384785204)), ((((~160) > ((239 ? -9223372036854775803 : 0))))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
