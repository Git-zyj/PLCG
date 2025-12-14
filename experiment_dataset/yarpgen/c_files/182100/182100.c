/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    var_14 = (((((!var_5) ? (max(var_9, var_5)) : ((var_2 ? -31719 : 14)))) == var_3));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    arr_8 [i_2] [10] [i_2] = var_12;
                    arr_9 [i_2] = 63;
                }

                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    var_15 = (var_6 ? ((((var_7 ? 56421 : var_0)) / ((var_5 ? 46942 : var_0)))) : 18593);
                    arr_14 [i_0] [i_0] [i_1] [11] = var_11;
                    var_16 = (min(var_16, (arr_10 [i_0 + 4] [i_1] [i_3 - 2] [i_1])));
                    var_17 = (((((((18594 ? (arr_1 [i_0]) : -47))) ? (max((arr_7 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]), var_9)) : ((var_9 ? var_0 : var_2)))) > (((-102 ^ var_1) ? ((max(192, var_5))) : ((min(-114, 32)))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_18 &= (((((var_7 ? (arr_0 [i_4]) : var_2))) || var_6));
        var_19 = (((var_10 ? 3165537998914299470 : var_4)));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_20 -= (var_12 >= -78);
        var_21 = var_11;
        arr_21 [i_5] = max((((arr_20 [i_5]) ? var_8 : (arr_20 [i_5]))), (arr_19 [i_5]));
    }
    #pragma endscop
}
