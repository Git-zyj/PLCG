/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((max(4571362258286437467, 645961030))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = 1118369310251387919;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] = min((max(9223372036854775807, 9223372036854775807)), (max(1, 9223372036854775801)));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((max(9223372036854775807, 15)));
                                arr_15 [i_0] [i_0] [i_0] [i_0] = -645961030;
                                var_14 ^= -9223372036854775807;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_15 = 0;
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = 10910318530379586038;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_16 ^= min(1125899906842620, (max(1, 9223372036854775807)));
                                arr_38 [i_7] [i_7] |= (max((min(-109, 18445618173802708996)), 91));
                                var_17 = 9223372036854775802;
                                arr_39 [i_7] |= max((max(1125899906842620, 1460878398385082170)), 99);
                            }
                        }
                    }
                }
                arr_40 [i_7] = (max(((max(1625917869, 3275070799637886099))), (max((max(18445618173802708996, 4147719520672866660)), -9223372036854775807))));
                var_18 = (min((max(1125899906842620, 4033500614718159937)), -6658443348961678794));
            }
        }
    }
    #pragma endscop
}
