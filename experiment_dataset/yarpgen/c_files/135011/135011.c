/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((min(-1, -1)) ? (var_11 / 27645) : var_7))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] = ((~((16776192 ? 23257 : var_7))));
                    var_16 = (min(-2138416463, ((min((arr_5 [i_1 - 3] [i_0] [i_1 + 2]), (arr_5 [i_1 - 3] [i_0] [i_1 + 2]))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_17 ^= (((arr_11 [i_3]) ? (arr_11 [i_3]) : 177720052));
        arr_13 [i_3] [i_3] = (~var_8);
        var_18 = (arr_6 [i_3]);
    }

    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {
                            arr_26 [i_4] [i_4] [i_4] [i_6] [i_7] [i_6] = (!-var_3);
                            var_19 = ((((var_13 == (-1314004821 / -16776172)))) ^ 16352);
                            var_20 = (((max(1023, (((0 ? -16352 : 1))))) <= 1));
                            var_21 = -3671574888325037354;
                            arr_27 [i_4] [i_4] [i_7] [i_8] = -2;
                        }
                    }
                }
            }
            arr_28 [i_4] = 37891;
        }
        arr_29 [i_4] = 9223367638808264704;
        var_22 = ((((min((16366 + 16776211), 1))) ? 2048 : 25));

        for (int i_9 = 2; i_9 < 20;i_9 += 1)
        {
            var_23 = (min(var_23, ((((((2681040742 ? 0 : var_14))) && ((((arr_30 [16]) ? (arr_14 [12]) : (arr_19 [i_4] [i_9] [i_9])))))))));
            var_24 *= (((123 | 4294967295) > (((arr_25 [i_9 + 2] [0] [i_9 + 2] [i_9] [0]) % (arr_25 [i_9 - 1] [i_9 - 1] [16] [i_9 - 1] [4])))));
        }
    }
    #pragma endscop
}
