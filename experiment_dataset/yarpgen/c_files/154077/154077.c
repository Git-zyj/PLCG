/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 2847088253;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_4] [1] [i_2 + 1] = var_13;
                            arr_16 [i_2 + 3] [i_1] [i_2 + 1] [i_0] [i_4] [17] [17] = var_5;
                            arr_17 [i_3] = 0;
                        }
                        arr_18 [12] [i_0] [i_1] = (max((((((var_4 ? var_4 : var_8))) ? 1979593563 : ((var_1 ? 14 : -12)))), (!-1582709535280411630)));
                        arr_19 [i_0] [i_1] [i_1] = (((max(62, var_3))) ? 3192783143 : ((max(-1979593554, 68))));
                    }
                    for (int i_5 = 4; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        arr_23 [i_0] [13] [i_2 + 2] [i_0] = var_10;
                        arr_24 [i_2 + 2] [i_0] [i_2 + 1] [i_1] = 102;
                    }
                    for (int i_6 = 4; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        arr_27 [i_6] [i_1] [i_2 + 3] [i_0] = -24;
                        arr_28 [i_0] [i_0] [i_1] [i_0] [i_2 - 1] [i_6 - 2] = (((((var_6 ? var_7 : 4294967283))) ? ((8178011627714945970 ? 3608141402 : var_0)) : -1034831878));
                    }
                    arr_29 [i_0] [i_1] [i_1] = var_12;
                    arr_30 [i_0] [i_0] [14] = (min(((var_7 ? ((var_0 ? -2147483618 : var_7)) : 8184)), (min(var_13, -1866935907))));
                }
            }
        }
    }
    var_15 = -var_5;
    var_16 = var_5;
    #pragma endscop
}
