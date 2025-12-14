/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_8;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_20 = (((arr_0 [i_0] [i_0]) > (arr_0 [i_0 + 1] [i_0 - 1])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_21 = var_1;
                    var_22 -= ((min((max((arr_2 [i_0] [i_1]), (arr_3 [i_2] [i_1] [i_0]))), var_10)));
                    arr_6 [i_0] [i_1] = 11419;
                    arr_7 [i_0] [i_0 + 1] = (((-(21705 - var_3))));
                }
            }
        }
        var_23 = (max((min(((var_11 ? -21705 : 21705)), ((var_18 ? var_7 : 65534)))), (min(var_16, (var_0 - 21705)))));
        arr_8 [i_0] = ((((((min(5706, 28672))) && var_7)) ? var_18 : (((((((arr_3 [i_0] [i_0] [i_0 + 1]) || var_15))) < (12110 / 7))))));
        var_24 += (max(((((min(23470, var_7))) ? ((var_1 ? 53439 : var_0)) : (1228 - 11))), ((60368 ? ((-21702 ? var_9 : var_18)) : var_12))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_25 = (min(var_25, ((((((11267 ? (arr_1 [i_3]) : (((arr_4 [i_3] [i_3] [2]) ? 0 : -6257))))) ? (arr_9 [i_3]) : ((-((var_15 ? var_1 : 12097)))))))));
        var_26 = (((((var_15 / ((min(var_3, var_18)))))) ? ((-21705 ? var_7 : (arr_10 [i_3]))) : (((min(var_6, var_12))))));
    }
    var_27 = ((((((65534 ? var_8 : -7136)) + 2147483647)) >> ((((((var_1 ? 13631 : var_4)) | 60654)) - 64998))));

    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_28 = (((((arr_2 [i_4] [i_4]) & var_10)) - ((var_1 ? var_18 : var_1))));
        var_29 = ((((-var_14 * ((max(46667, var_10))))) - (var_18 + var_17)));
        arr_15 [i_4] = ((~(((((var_2 ? var_7 : var_10))) ? (arr_3 [i_4] [3] [i_4]) : 32768))));
        var_30 = (min(var_30, (max((((((min(var_1, 21))) <= var_13))), var_2))));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
    {
        var_31 = (min(var_31, (((((!(arr_12 [i_5] [i_5]))) ? var_8 : (~var_11))))));
        arr_19 [i_5] = (((20051 | 64291) ? var_1 : ((min((max(-7398, 12600)), (arr_17 [i_5]))))));
        var_32 -= ((53439 ? 5 : 16));
    }
    #pragma endscop
}
