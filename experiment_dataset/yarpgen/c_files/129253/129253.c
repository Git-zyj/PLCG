/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_10 = ((((((arr_1 [i_0] [10]) ? (max(8, -1944656531)) : (((arr_0 [i_0] [i_0]) ? var_2 : (arr_0 [i_0] [i_0])))))) ? (((262143 ? (arr_2 [i_0] [i_0]) : 1))) : (((var_3 >= 4173568899) ? var_9 : 255))));
        arr_3 [i_0] = (4294967049 - 1);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_11 = 216;
                        var_12 = (arr_4 [i_1] [i_2]);
                        var_13 = (max(var_13, (arr_1 [i_0] [i_3])));
                    }
                }
            }
            var_14 = ((511 * (((arr_4 [i_1] [i_1]) ? -32759 : -4133561179396478835))));
        }
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        var_15 = ((var_9 + ((max((arr_8 [i_4]), (arr_8 [i_4]))))));
        arr_14 [13] = ((arr_10 [i_4] [i_4] [i_4] [i_4]) == (((((arr_4 [i_4] [i_4]) ? 14099987263040683068 : var_7)) / var_5)));
        var_16 = var_3;
    }
    var_17 *= var_6;
    #pragma endscop
}
