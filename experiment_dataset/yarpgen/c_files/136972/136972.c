/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    var_17 = (((((var_15 | (var_16 ^ 2147483647)))) && 8));
                    var_18 ^= (var_16 < ((-2147483633 ? (-1609158220347867823 && 32512) : ((var_4 ? var_9 : 2147483647)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_12 [i_2 + 1] &= 1;

                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            var_19 = (~var_3);
                            arr_15 [i_0 - 1] [i_1] [17] [i_3] [i_4] = 2147483647;
                            var_20 = (max(var_20, ((((var_10 ^ var_4) ? var_15 : (~var_12))))));
                            arr_16 [i_0] [i_1] [i_1] [i_2] [i_4] [i_1] [i_4 + 1] = (1 ^ var_10);
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_21 += 1709959287;
                            var_22 = ((((1 ? -32513 : 1)) == (32512 > 65)));
                        }

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            arr_23 [i_3] [i_2] = (((!var_11) == (-1609158220347867823 / var_5)));
                            var_23 = (min(var_23, (-5990 >= var_8)));
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_27 [i_0] [i_0] = (var_2 >> (248 - 240));
                            var_24 = (4294967292 >= 4982);
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_25 = var_4;
                            var_26 += ((((var_4 ? var_15 : var_8)) << (var_10 - 5009287984342941041)));
                            var_27 = ((15250643494918591643 != (~var_13)));
                        }
                    }
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        var_28 = ((0 + (-31384 + 3196100578790959973)));
                        arr_32 [i_0] [i_9] [i_9] [i_9] = (((var_1 - var_13) + ((((max(-1, 4))) ? ((74 ? -15856 : var_10)) : (var_3 + var_3)))));
                    }
                    var_29 = (max(var_29, 15250643494918591643));
                    var_30 = ((~(max((min(var_14, var_4)), var_12))));
                }
                var_31 = (min(var_31, 23767));
                arr_33 [10] [i_1] = -4982;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 18;i_12 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        var_32 += ((-((var_10 ? var_8 : var_12))));
                        var_33 = ((1174007570 ? (-5243 % var_7) : (var_15 && 0)));
                    }
                    var_34 -= -32512;
                }
            }
        }
    }
    var_35 = ((3352509233 ? var_11 : (min(var_9, (~0)))));
    #pragma endscop
}
