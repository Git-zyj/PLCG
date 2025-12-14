/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((((max(((1 ? 8110812187272971141 : -780768303)), 780768314))) ? var_7 : (((var_2 + 2147483647) >> (!-10082)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0 + 2] = (arr_0 [i_0 + 2]);
        var_14 *= (((arr_1 [i_0 + 2]) * (arr_0 [i_0 + 2])));
        arr_3 [i_0 + 1] = -2052927827;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (((((max((arr_4 [i_1]), 986717551508141574)) >= (arr_4 [i_1]))) ? -18505 : (arr_5 [i_1])));
        arr_7 [i_1] &= ((-(((~(arr_5 [i_1]))))));
        var_15 = min(-780768310, 65535);
        var_16 += (arr_5 [i_1]);
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        var_17 ^= (min(((~(arr_9 [16] [i_2 + 3]))), (min((((arr_8 [i_2 + 1] [i_2 - 1]) ? var_12 : var_6)), (!var_10)))));
        var_18 = (min(var_18, ((((((((arr_9 [16] [i_2 + 2]) ? 10767 : 11373)) + ((max((arr_9 [0] [i_2 + 2]), (arr_8 [i_2 + 1] [i_2 + 2])))))) != 81)))));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_19 = (min((((((var_8 ? (arr_11 [i_4] [i_4]) : 918220493671240805))) ? (arr_13 [i_4] [i_3 - 3] [i_3 - 2] [i_3 - 1]) : 16)), (arr_8 [i_2 + 3] [i_2 + 2])));
                    var_20 = ((-((-780768303 ? (arr_9 [i_2] [i_3 + 1]) : (arr_8 [i_2 - 1] [i_2 - 1])))));
                }
            }
        }
        var_21 = (arr_11 [i_2 + 1] [i_2 + 2]);
    }
    var_22 = var_7;
    var_23 = var_1;
    var_24 = (var_8 & 51825);
    #pragma endscop
}
