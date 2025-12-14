/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        var_13 = var_0;
                        var_14 = (max(var_14, (5818536216286367920 > var_3)));
                        arr_10 [i_0] = (65535 >= 17563);
                    }
                }
            }
        }
        var_15 = var_9;
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_16 *= 33904;
        var_17 = ((((arr_12 [i_4]) == 65535)));
        arr_13 [i_4] [24] = (17563 > 1);
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 19;i_5 += 1)
    {
        var_18 = (arr_11 [i_5 - 1]);
        arr_16 [i_5] [i_5 - 1] = -32746;
    }
    var_19 = ((((((47972 ? 17563 : 4294967295)) < var_4)) ? var_5 : (max((min(var_4, 5012808866616995599)), var_6))));
    #pragma endscop
}
