/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((~((-(~var_7))))))));
    var_13 = var_0;
    var_14 = (((var_2 * (((!(-127 - 1)))))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_15 = (max(var_15, ((min(-1, var_6)))));

        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 9;i_3 += 1)
                {
                    {
                        var_16 = var_2;
                        var_17 = ((!((min(((((arr_6 [i_1] [i_1] [i_2]) / (arr_1 [i_0])))), (((var_8 + 9223372036854775807) >> (((arr_4 [3] [5]) + 4390510443140658359)))))))));
                        var_18 -= (4096 / 4123);
                        arr_10 [1] [i_3] [i_1 - 4] [i_3] [7] = (min((arr_3 [i_3] [2]), var_10));
                    }
                }
            }
            var_19 = (max(var_19, var_2));
            var_20 = (arr_3 [i_0 + 1] [i_0 - 1]);
            var_21 += (!-4096);
        }
        var_22 = var_9;
        var_23 *= ((arr_1 [10]) ? (((!((((((arr_4 [i_0] [i_0 - 1]) + 9223372036854775807)) << (var_4 - 6050192824488892258))))))) : -1);
    }
    #pragma endscop
}
