/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    var_18 = var_0;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = (var_1 | 7605);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] = (min(65535, 2410190253));
                    arr_12 [i_1] [i_1] = (max((max(18446744073709551614, (max(8372224, 4294967281)))), (var_6 / var_5)));
                    var_19 = (max(var_19, ((max(var_1, (max(var_11, var_7)))))));
                }
            }
        }
    }
    for (int i_3 = 3; i_3 < 16;i_3 += 1)
    {
        arr_15 [i_3] = (max((((max(var_1, 13179039537970315972)) + var_5)), var_3));
        arr_16 [i_3] = ((((var_8 ? var_14 : var_14))) ? (var_12 % var_0) : (((max(var_1, var_5)))));
    }
    var_20 = (max(var_20, ((((((min(5267704535739235634, var_15)) >= -15385)) ? var_0 : (((max(var_9, var_6)))))))));
    #pragma endscop
}
