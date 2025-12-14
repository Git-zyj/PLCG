/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (max(var_7, 3999614315909142074));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 *= (arr_1 [i_0] [i_0]);
        var_15 = (min(var_15, (arr_0 [i_0])));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_16 *= (max((((arr_3 [8]) ^ var_7)), (arr_3 [6])));
        var_17 = (max(var_17, (arr_3 [2])));
        arr_4 [i_1] [2] &= ((((max(((max(var_11, (arr_3 [4])))), 16327))) ? (((min(-12668, 11)))) : ((~((24443 ? (arr_3 [2]) : var_2))))));
        var_18 *= var_10;
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_19 -= (((arr_6 [3] [i_2]) * ((((var_10 < (arr_3 [2])))))));
        var_20 = (max(var_20, 40));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                {
                    var_21 *= 11652;
                    var_22 -= (~var_9);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        var_23 = (max(var_23, ((((arr_15 [i_5 - 2]) ? 24 : (var_1 || var_0))))));
        var_24 *= 4294967250;
        var_25 *= ((var_5 == ((((!(arr_14 [i_5] [i_5])))))));
        var_26 = (max(var_26, ((((((arr_14 [i_5 + 1] [i_5 - 1]) + 2147483647)) << (((((arr_14 [i_5 + 1] [i_5 - 1]) + 114)) - 13)))))));
    }
    #pragma endscop
}
