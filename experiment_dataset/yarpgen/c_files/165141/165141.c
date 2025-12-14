/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = 0;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_17 = (((var_1 & var_7) | (~var_4)));
                            var_18 = (var_16 < -16);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_19 = -var_6;
                                var_20 = max(var_0, var_8);
                                arr_22 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0] = (((max(var_6, var_8)) >= var_13));
                                var_21 = (max((((var_3 + 9223372036854775807) << (var_4 - 1259479122084663666))), 6100961431600344848));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        {
                            arr_29 [i_0] [i_0] = ((((((var_1 ? (var_12 | var_13) : (var_0 != var_2))) + 2147483647)) << (((((var_15 + var_6) ? var_4 : var_11)) - 114))));
                            var_22 = (((var_16 ? var_11 : var_11)));
                        }
                    }
                }
            }
        }
    }
    var_23 = ((var_13 / (var_5 || var_4)));
    var_24 = var_12;
    #pragma endscop
}
