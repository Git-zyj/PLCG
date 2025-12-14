/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 7;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0 + 2] = ((-(min((arr_1 [i_0 - 3] [i_0]), var_10))));
        arr_3 [i_0 - 1] = (max(var_5, ((var_9 ^ (((arr_1 [i_0 - 2] [i_0 - 2]) ? var_10 : 0))))));
    }
    for (int i_1 = 3; i_1 < 7;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            var_11 = (min(var_11, ((min((arr_0 [i_2 - 1]), 22)))));
            var_12 = var_4;
            var_13 = (min(var_13, (((~(((var_8 ^ 3) ^ 133466683)))))));
            arr_11 [i_2] [i_1 + 1] |= ((~(126 | 203)));
            arr_12 [i_1 + 2] = ((29882 ^ (max((~var_0), var_6))));
        }
        var_14 = (max(((var_2 ? var_10 : 254)), ((((max(var_2, var_1))) ? (arr_9 [i_1 - 1]) : var_10))));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        arr_15 [i_3] = ((((8049048528002455588 - var_10) ^ (~238))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_31 [i_6 - 1] [i_6 - 1] [i_5] [i_6 + 1] [10] = var_1;
                                var_15 = (max(((((-8 ? -1 : 8)) & ((10 ? 241 : 120)))), (238 * -8)));
                            }
                        }
                    }
                    var_16 *= ((8 <= (max(26, var_3))));
                    arr_32 [i_3] [i_4 + 1] [i_5] [i_5] = ((32767 < (((14521023201453889689 | var_7) >> (var_6 - 59693)))));
                }
            }
        }
    }
    var_17 = var_8;
    #pragma endscop
}
