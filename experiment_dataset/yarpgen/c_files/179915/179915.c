/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((32256 ? ((((min(var_3, var_4)) != (var_8 & 124)))) : (~var_6)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_15 = 203;

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_3] [i_2] [i_2] = ((((((arr_9 [i_0] [i_1 + 1] [i_1 - 1] [i_1 - 1] [18]) && ((max(-1205834056, 4294934528)))))) >= (max(((max((arr_6 [i_3] [i_0] [17] [i_0]), var_4))), ((~(arr_2 [i_1])))))));
                        var_16 = min((((((arr_5 [i_3] [i_2] [1] [i_0]) ? (arr_8 [i_0]) : (arr_0 [i_0]))))), var_8);
                    }
                }
            }
            var_17 = (max(21, (arr_5 [i_0] [i_1 + 1] [i_1] [11])));
        }
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    {
                        var_18 -= ((1 ? 115 : -1205834056));
                        arr_21 [i_5] [i_5] = var_3;
                        arr_22 [i_5] [i_6] [i_5] [i_5] = (max(2147483647, (((arr_5 [i_4] [i_4] [i_4] [i_4]) ? (arr_5 [i_4] [i_5 - 1] [i_6 + 3] [i_7]) : -1205834043))));
                        var_19 -= ((min(var_1, ((1205834033 ? (-9223372036854775807 - 1) : 1264802091)))));
                    }
                }
            }
        }
        arr_23 [i_4] &= 0;
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] = var_13;
        var_20 = var_0;
    }
    var_21 = (var_12 / var_11);
    var_22 &= var_1;
    #pragma endscop
}
