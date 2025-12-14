/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [13] [i_0 + 1] [23] = arr_0 [i_0 + 2];
                var_13 = ((((min(var_4, var_5))) ? (~var_1) : ((var_4 * (arr_3 [i_1] [i_0 + 3])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_14 *= (((arr_0 [i_3]) ? (((((var_1 ? (arr_3 [i_0] [i_0]) : var_6))) ? (arr_9 [i_0] [i_0] [8] [i_0 + 2]) : var_2)) : (((min((arr_2 [18] [18] [18]), var_2))))));
                            var_15 ^= -1;
                            arr_12 [i_3] [i_2] [i_0] [i_0] = -8047441068984616664;
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_16 = (((((min(var_1, var_6)))) ? var_1 : (((arr_7 [i_4] [21]) ? var_8 : var_5))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    var_17 = var_5;
                    var_18 = (((arr_3 [i_4] [i_5]) ? (((arr_3 [i_4] [i_5]) ? var_1 : (arr_3 [i_6] [i_4]))) : ((max((arr_3 [i_4] [i_6]), (arr_3 [i_4] [i_4]))))));
                }
            }
        }
        var_19 = (max(var_19, var_6));
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        arr_22 [i_7] [i_7] = (arr_7 [i_7] [i_7]);
        arr_23 [i_7] = var_10;
    }
    #pragma endscop
}
