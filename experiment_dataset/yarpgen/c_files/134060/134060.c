/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_10 = (i_1 % 2 == 0) ? (((~(((((var_4 << (((arr_3 [i_1]) - 3523232540))))) ? (arr_3 [i_1]) : (max((arr_1 [i_0]), (arr_2 [i_1])))))))) : (((~(((((var_4 << (((((arr_3 [i_1]) - 3523232540)) - 842278335))))) ? (arr_3 [i_1]) : (max((arr_1 [i_0]), (arr_2 [i_1]))))))));
                arr_4 [i_1] = var_7;
                var_11 = (min((!var_3), (max(-22008, 0))));
                arr_5 [i_1] [i_1] = ((((arr_3 [i_1]) * (min(var_0, (arr_3 [i_1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                var_12 += ((((((arr_7 [i_2]) << (((arr_8 [i_3]) + 77))))) != var_3));
                var_13 = ((((((((arr_8 [i_2]) - (arr_9 [i_2]))) * (arr_7 [i_2])))) ? 0 : (arr_9 [14])));
                var_14 = (max(((var_4 % (arr_6 [i_2]))), ((((var_7 ^ var_7) ? (arr_9 [i_2]) : (((((arr_9 [i_2]) + 9223372036854775807)) << var_6)))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_15 -= -260777071673555153;
                            var_16 = var_8;
                        }
                    }
                }
                arr_14 [i_3] = ((min(0, -21680)));
            }
        }
    }
    var_17 = (((var_0 * var_2) ? var_2 : -var_2));
    var_18 = (((var_8 >= var_0) && 191));

    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_19 = arr_12 [12] [i_6] [16] [12];
        var_20 = (((((((arr_0 [i_6]) ^ var_1)))) ? (((arr_16 [i_6] [i_6]) ? 1926278387 : (arr_11 [i_6] [i_6] [i_6] [i_6]))) : ((min(-0, var_5)))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_21 = (min((min(((((-9223372036854775807 - 1) ? (arr_18 [i_7] [i_7]) : (arr_2 [i_7])))), ((var_5 & (arr_13 [i_7] [i_7] [22] [i_7] [i_7] [i_7]))))), ((8868677613288930992 ? -14 : 2368688908))));
        var_22 = var_3;
        var_23 = (arr_0 [i_7]);
        var_24 = ((~(((min((arr_17 [i_7]), var_7)) % (((260777071673555152 << (((arr_2 [i_7]) - 3046477389)))))))));
    }
    #pragma endscop
}
