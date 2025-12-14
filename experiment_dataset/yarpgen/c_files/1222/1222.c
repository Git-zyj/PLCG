/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_2] [i_0] [i_0] [i_0] [i_0] = var_8;
                        arr_12 [i_1 - 1] [i_1 - 1] [i_0] = max(((var_0 ? var_5 : 11466735354792319736)), var_7);
                        arr_13 [i_0] [i_0] [i_2] [i_0] = 11466735354792319736;
                        var_10 = ((var_2 ? (((max((max(var_0, (arr_5 [i_0] [i_0] [i_0]))), ((((arr_3 [i_1] [i_1] [i_0]) && 6980008718917231879))))))) : (((((var_7 ? var_5 : var_1))) ? var_5 : (min(var_4, (arr_1 [i_2] [i_2])))))));
                        var_11 = (max((max((max((arr_2 [i_2] [i_1] [i_0]), var_5)), 11466735354792319736)), ((+((var_7 ? (arr_9 [i_0] [i_0] [i_2] [i_3]) : var_7))))));
                    }
                }
            }
        }
        var_12 += ((((arr_7 [i_0 + 1] [i_0] [16]) ? (arr_7 [i_0 - 3] [i_0] [1]) : var_5)));
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 16;i_4 += 1) /* same iter space */
    {
        var_13 = var_7;
        var_14 = (((arr_2 [i_4] [i_4] [i_4 - 1]) ? (var_4 && var_4) : (arr_7 [i_4] [i_4] [i_4])));
        var_15 = (arr_9 [i_4 - 1] [i_4] [i_4 - 2] [i_4]);
        var_16 = (max(var_16, var_0));
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 14;i_7 += 1)
            {
                {
                    var_17 = (min(var_17, ((max(((((max((arr_4 [i_5] [i_5] [i_5]), (arr_2 [i_6] [i_5] [i_5])))) ? ((var_6 ? (arr_10 [i_5] [i_5] [i_5] [i_5] [i_5]) : var_0)) : var_6)), (((!(arr_20 [i_7] [i_7 + 1] [i_6 - 3] [i_6])))))))));
                    var_18 = (((arr_1 [i_7 - 2] [7]) ? var_6 : (((((((var_2 ? var_9 : var_1))) && ((max(var_4, var_4)))))))));
                }
            }
        }
    }
    var_19 = var_0;
    #pragma endscop
}
