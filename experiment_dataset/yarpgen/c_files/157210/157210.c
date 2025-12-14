/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((8388607 ? ((max(var_15, var_0))) : ((((max(8825254660741628405, 8388589))) ? (~var_4) : ((max(60, var_11))))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 += (((var_11 * var_9) / ((var_5 << (2993650252 - 2993650227)))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_19 = var_14;
                    arr_9 [i_2] [i_0 - 1] [i_1] [i_0 - 1] = ((((((var_3 ? var_16 : var_1)) + 9223372036854775807)) >> (14975 - 14940)));
                }
                var_20 = ((var_0 ? (max(1511785586, 6426091166070832942)) : (!var_0)));
            }
        }
    }
    #pragma endscop
}
