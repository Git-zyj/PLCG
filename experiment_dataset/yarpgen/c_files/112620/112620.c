/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0 + 3] = (8927058791699132705 && 424048736);
        var_16 = (arr_0 [i_0 + 3]);
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_5 [i_1] = (((arr_3 [i_1 - 1]) % (((arr_3 [i_1 + 1]) | (arr_4 [i_1 + 2])))));
        var_17 = 10448247646720236738;
        var_18 -= (max(((min((((arr_3 [i_1]) > (arr_4 [i_1 - 1]))), (-1167447092 <= 1)))), (min((max((arr_3 [i_1]), var_12)), ((((arr_3 [i_1]) != var_14)))))));
        arr_6 [i_1] = (((max((arr_4 [i_1]), (min(564256949, var_4)))) * (arr_3 [i_1])));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_19 ^= max(((max((max(var_1, var_12)), (arr_7 [i_2])))), (min((arr_7 [i_2]), (8370298117768320001 * 3245865051))));
        var_20 = (max(((((69 || 1) / 1))), (arr_9 [i_2] [i_2])));
        var_21 = ((var_1 << (895325505 - 895325505)));
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 8;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                arr_14 [i_3] [i_3] = var_14;
                arr_15 [i_3] = (arr_4 [i_3]);
                arr_16 [i_3] [i_3 - 1] = max(((((arr_13 [i_4] [i_4] [i_3]) <= -1183311069))), (min(var_10, 1)));
            }
        }
    }
    #pragma endscop
}
