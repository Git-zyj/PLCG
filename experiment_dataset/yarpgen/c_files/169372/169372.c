/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((0 ? var_11 : (min(var_14, ((var_6 ? var_11 : 16776704))))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0 - 2] [i_0 + 1]) ? (7195047062203651442 || 1) : (arr_0 [i_0 + 1] [i_0 - 3])));
        var_18 = arr_1 [i_0];
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_19 = ((0 ? 7195047062203651442 : ((min(63, 3497279608)))));

        /* vectorizable */
        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            arr_9 [i_1] [i_1] [i_1] = (((arr_7 [i_1 - 1] [i_2 + 2] [i_2 + 2]) || var_16));
            var_20 = (((arr_0 [i_2 + 2] [i_1]) | var_14));
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_21 = ((-1 ? 7195047062203651418 : (((var_15 ? 197 : var_16)))));
                            var_22 = ((var_11 ? (arr_13 [i_5] [i_1] [i_3] [i_2 - 2] [i_1] [i_1 - 1]) : 86));
                        }
                    }
                }
            }
            var_23 = (((((-7195047062203651434 ^ (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1])))) ? ((1152921504604749824 ? 267386880 : 2147483647)) : (arr_7 [i_2 - 1] [i_2 + 3] [i_2 - 1])));
            var_24 = (arr_11 [i_2 - 1] [i_2 + 2] [12]);
        }
    }
    /* vectorizable */
    for (int i_6 = 4; i_6 < 20;i_6 += 1)
    {
        arr_18 [i_6 - 1] = ((arr_17 [i_6 - 3]) ? (arr_17 [i_6 + 2]) : (arr_17 [i_6 + 1]));
        arr_19 [0] = (785167375 ? var_9 : 127);
        var_25 *= (((arr_16 [i_6 + 2]) ? (arr_16 [i_6 + 1]) : (arr_17 [i_6 - 4])));
        var_26 = ((484402802 ? -2147483629 : 7195047062203651446));
        arr_20 [i_6] [i_6] = (((arr_16 [i_6]) ? ((((arr_16 [20]) ? var_0 : (arr_17 [i_6])))) : 203196423376882959));
    }
    var_27 = (((4294967285 < var_8) ? (min(var_9, (var_7 % var_7))) : var_16));
    var_28 = ((var_15 ? (((((min(12488256285523534950, var_13))) ? ((var_15 ? var_14 : var_13)) : ((var_10 ? var_9 : var_14))))) : ((((max(var_11, var_3))) | (min(var_7, 13005691266132272826))))));
    #pragma endscop
}
