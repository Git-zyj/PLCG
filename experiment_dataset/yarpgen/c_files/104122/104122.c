/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(85, var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((((arr_3 [i_0] [i_1] [i_0]) ? (arr_3 [i_1] [i_1] [i_0]) : (arr_0 [i_0] [i_1])))) ? var_12 : 150));
                arr_5 [i_0] [i_0] = (((((var_6 ? (arr_2 [i_0] [i_1]) : 232))) ? ((((arr_2 [i_0] [i_1]) ? var_6 : (arr_2 [i_0] [i_1])))) : 113));

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = var_2;
                    arr_9 [i_0] [i_1] = (((((((((arr_2 [i_0] [i_0]) ? 108 : (arr_0 [i_0] [i_1])))) + (((arr_0 [i_0] [i_2]) ? var_1 : 113))))) ? (((((min((arr_1 [i_0] [i_0]), 27))) ? (max(var_3, -1)) : (((var_8 ? (arr_6 [i_0] [i_0] [i_0]) : var_4)))))) : (max(var_12, (arr_0 [i_0] [i_2])))));
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    arr_13 [i_0] [i_1] [i_0] = (max((arr_7 [i_0]), -0));
                    var_14 += var_2;

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_15 -= (arr_14 [i_4] [i_3]);
                        var_16 *= (((((arr_3 [i_1] [i_1] [i_1]) ? (arr_3 [i_4] [i_1] [i_4]) : (arr_3 [16] [i_1] [i_4]))) / ((min(var_2, 23434)))));
                    }
                    var_17 = arr_11 [i_0] [i_0];
                }
            }
        }
    }
    var_18 = var_12;

    for (int i_5 = 2; i_5 < 20;i_5 += 1)
    {
        arr_21 [i_5] = (max(((((((arr_20 [i_5 + 1] [i_5 - 1]) + 255))) ? (arr_18 [i_5]) : ((0 ? 125 : 2421915849592218861)))), var_6));
        arr_22 [i_5 + 1] [i_5] = ((((max(var_3, ((((arr_18 [i_5 - 2]) >> (var_4 - 121))))))) ? (((arr_19 [i_5 + 1] [i_5 - 1]) ? (min(var_10, (arr_18 [i_5]))) : (arr_20 [i_5 - 1] [i_5]))) : var_2));
    }
    var_19 = ((-((((var_4 ? var_11 : 2421915849592218861)) / -3351791061))));
    #pragma endscop
}
