/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        var_18 = ((!(((-var_12 ? (max((arr_0 [i_0]), var_12)) : (arr_1 [i_0]))))));
        var_19 = (min(((max(((~(arr_2 [i_0] [i_0]))), (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0])))))), -var_3));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] = (!((((arr_5 [i_1]) ? (arr_3 [i_1] [i_1]) : (arr_4 [i_1])))));
        var_20 = ((-(arr_4 [i_1])));
        var_21 = var_16;
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_22 = var_12;
        arr_9 [i_2] [i_2] = (max(((max(((-(arr_8 [i_2]))), var_12))), (min((((arr_0 [i_2]) ? (arr_7 [i_2] [i_2]) : (arr_4 [i_2]))), (arr_0 [i_2])))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_2] [i_3] [i_2] = (arr_0 [i_4]);
                    var_23 = (max((((503678663 ? 316366008 : 1508556635))), ((~(~var_8)))));
                }
            }
        }
        var_24 = (arr_0 [i_2]);
        arr_17 [i_2] = (max(20630, -4270906364584995175));
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_21 [i_5] = ((((((((-(arr_0 [i_5])))) ? (((min((arr_4 [4]), var_1)))) : (arr_20 [i_5])))) ? (((min((arr_2 [i_5] [i_5]), (arr_3 [i_5] [i_5]))))) : (arr_20 [i_5])));
        var_25 = (max(var_25, (arr_20 [i_5])));
    }
    for (int i_6 = 1; i_6 < 18;i_6 += 1)
    {
        var_26 = var_8;
        var_27 &= ((!((min((arr_23 [i_6]), (arr_23 [i_6]))))));
        arr_24 [i_6] [i_6] = (((arr_22 [i_6] [i_6]) ? var_8 : ((min(-var_16, (((!(arr_1 [i_6])))))))));
        var_28 = (min(var_28, (((((max((((!(arr_23 [i_6])))), (min((arr_2 [i_6] [i_6]), var_11))))) ? (arr_1 [i_6]) : (((!(((var_13 ? (arr_2 [i_6] [i_6]) : var_5)))))))))));
    }
    #pragma endscop
}
