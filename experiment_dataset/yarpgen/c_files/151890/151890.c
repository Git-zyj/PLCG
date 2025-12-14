/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_10 = (min(var_10, ((min(var_7, var_6)))));
                var_11 = (max(var_11, ((max((((((var_6 ? var_2 : var_0))) ? (((var_9 ? var_3 : var_6))) : var_4)), ((((-23 + 2147483647) >> (4059679764423119557 - 4059679764423119542)))))))));

                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    var_12 *= var_9;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 &= (var_3 & var_7);
                                var_14 = (min(((((-32767 - 1) == 26306))), (var_9 * -8)));
                                var_15 = var_8;
                                var_16 = (max((max(var_6, (max(var_9, var_8)))), ((var_3 ? var_7 : ((var_9 ? var_1 : var_4))))));
                            }
                        }
                    }
                    var_17 = (((var_0 & var_1) < (min(var_7, var_8))));
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                {
                    var_18 = var_1;
                    var_19 = var_4;
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                {
                    var_20 = (max(var_20, var_2));
                    var_21 = (max(var_21, (min(-1473756862, (14387064309286432058 ^ 4059679764423119557)))));
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    var_22 &= (min((((var_1 ? ((var_3 ? var_0 : var_8)) : (var_7 / var_5)))), var_4));
                    var_23 ^= var_2;
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            {
                                var_24 += (((((max(26306, 8)))) | (max(((max(var_6, var_7))), var_9))));
                                var_25 = (min((min((min(var_4, var_9)), (var_4 & var_9))), var_4));
                                var_26 = (((max((max(var_8, var_4)), (var_3 & var_6))) + ((((min(var_8, var_9))) ? (min(var_9, var_9)) : (((var_9 ? var_7 : var_2)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 -= (((((min(var_2, var_9)) << (var_2 + 577274405)))) ? (((((((var_2 ? var_4 : var_0))) && ((max(var_7, var_2))))))) : ((var_1 ? (((var_8 ? var_6 : var_7))) : ((var_1 ? var_4 : var_9)))));
    #pragma endscop
}
