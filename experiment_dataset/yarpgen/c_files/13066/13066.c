/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_13 = var_0;
                        arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] = var_5;
                        var_14 = var_3;
                        var_15 = ((var_10 == ((var_8 ? var_7 : (arr_2 [i_0] [i_2])))));
                    }
                }
            }
        }
        arr_11 [i_0] = (~var_6);
        var_16 = var_12;
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] [i_4] = -4227858432;
        var_17 = (var_5 / -var_4);
        var_18 = (max(var_18, var_12));
        arr_15 [i_4] [i_4] = (min((((max(var_9, var_5)))), (arr_8 [i_4] [i_4] [i_4])));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {
        var_19 = (((max((((arr_13 [i_5]) ? var_10 : var_6)), -var_3))) ? (((!((((arr_16 [i_5]) | 136)))))) : ((((min((arr_16 [i_5]), (arr_7 [i_5] [i_5])))) ? var_6 : var_9)));
        arr_18 [i_5] &= (var_6 == var_0);
        var_20 = (min(var_20, (((var_4 ? 9223372036854775807 : var_9)))));
    }
    var_21 = ((var_1 ? ((max(var_11, -1523000389))) : (var_8 == var_7)));
    var_22 = ((((max((((var_1 ? var_4 : var_6))), var_0))) ? (((var_0 ? -100 : var_3))) : var_2));
    #pragma endscop
}
