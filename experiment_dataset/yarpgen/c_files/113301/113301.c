/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_4 [7] = ((((((71 ? var_14 : var_3)))) ? 1 : -1820932722));

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_19 &= (((((var_10 ? var_1 : 427619843) ^ var_10))));
            var_20 = ((((var_3 ? (arr_7 [i_0 + 4] [i_0 - 1] [i_1]) : (arr_3 [i_0 - 1]))) + (arr_0 [i_0] [i_1 + 1])));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_21 = var_18;
            var_22 = (min(((151 ? -214254255 : 1435648914)), ((-197 ? (max(var_12, (arr_6 [i_0 - 2] [i_2] [i_0]))) : (((var_9 - (arr_10 [i_2]))))))));
            arr_11 [i_0] [12] = var_15;
        }
        var_23 |= (max((arr_3 [i_0 + 1]), (arr_3 [i_0 + 1])));
        var_24 = ((((((max(14039, var_8))) / (max((arr_5 [i_0 + 2] [i_0 + 2] [i_0]), var_16)))) * var_8));
    }
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        var_25 = (min(var_25, ((min((((arr_13 [i_3 + 1] [6]) | (arr_12 [i_3 + 1]))), 55)))));
        var_26 = (max(var_26, 172));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 24;i_5 += 1)
            {
                {
                    var_27 = (arr_15 [i_3] [i_5 - 3]);
                    var_28 = var_1;
                    var_29 = (min(var_29, (((var_5 || (2278894798 / 14039))))));
                    arr_18 [20] |= (((((((2859318381 ? var_8 : var_6)) <= (~6962465947205852260))))));
                }
            }
        }
        var_30 = (arr_12 [i_3]);
    }
    var_31 *= ((var_4 == ((var_2 | (~var_16)))));
    var_32 = (min(var_32, ((max(var_7, (((15 < 0) - ((45 ? var_18 : var_7)))))))));
    #pragma endscop
}
