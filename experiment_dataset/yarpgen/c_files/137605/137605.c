/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_5 <= var_1);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = (~var_8);
        var_12 ^= (((((-(~var_7)))) ? ((((var_9 - var_8) ? (arr_1 [i_0]) : (((!(arr_2 [i_0] [i_0]))))))) : ((~(~var_6)))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_12 [14] [i_3] [i_2] [i_3] [i_0] = (13 & 2197994730);
                        arr_13 [i_3] [i_2] [i_1] [i_3] = (~2096972566);
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] [i_4] = ((1 ? 0 : -48));
        var_13 = (((((arr_14 [i_4] [i_4]) % (arr_14 [i_4] [i_4]))) >= -20));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
    {
        var_14 = (((((10526 ? -2104007346635286382 : 20))) ? (2914051428999501077 + var_2) : (!2914051428999501077)));
        var_15 = (arr_3 [i_5]);
        var_16 = var_1;
    }
    #pragma endscop
}
