/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = (((((((arr_0 [i_0]) ^ var_7)))) ? 6794553697451041358 : (~var_9)));
        var_18 = (((((((var_7 ^ (-127 - 1)))) ? (((-32767 - 1) ? -17383 : var_12)) : var_15)) >= ((((15211302017603901015 ? var_10 : (arr_0 [3])))))));
        arr_3 [i_0] = (((((arr_2 [i_0]) | 57344)) + var_6));
        var_19 = (arr_1 [2]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_20 = (var_11 - 17383);
                        arr_10 [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] = var_11;
                        arr_11 [i_3] [i_3] [i_3] [i_0] = 16;
                        arr_12 [i_0] [i_1] [i_3] = ((-(arr_4 [i_2 + 1] [i_2 - 2])));
                    }
                }
            }
        }
    }
    var_21 = (((var_10 ? (-6 ^ 1) : var_1)));
    var_22 = var_9;
    var_23 = (((((-32767 - 1) && var_4)) ? (15211302017603901011 + var_6) : (((((((-16966 + 2147483647) << (var_3 - 270608394558385783))) == var_16))))));
    var_24 = (var_0 + -4319331439565108957);
    #pragma endscop
}
