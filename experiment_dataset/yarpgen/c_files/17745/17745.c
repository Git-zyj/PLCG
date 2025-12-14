/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_0] [i_0] = (~1937418555);
                    arr_9 [i_0] [i_0] [i_0] = (-32767 - 1);
                    var_12 *= -71;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 19;i_5 += 1)
                {
                    {
                        var_13 = ((~(~15)));
                        arr_19 [i_0] [i_3] [i_4] = 71;
                        arr_20 [i_0] [i_0] = 1937418541;
                        var_14 = (!1937418543);
                    }
                }
            }
        }
        arr_21 [i_0] = 62;
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_15 = -274877906943;
        arr_24 [i_6] = ((-(((!(!255))))));
    }
    var_16 = var_10;
    var_17 *= var_6;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            {
                arr_31 [i_7] [i_8] = (!1937418543);
                arr_32 [i_7] = (--1937418543);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 23;i_10 += 1)
                    {
                        {
                            arr_38 [i_7] = 1937418562;
                            arr_39 [i_8] [i_7] [i_8] [i_8] = (-32767 - 1);
                            var_18 = (!0);
                            arr_40 [i_7] [i_7] [i_7] = 0;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
