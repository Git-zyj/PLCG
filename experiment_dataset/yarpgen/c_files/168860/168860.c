/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_7;
        var_10 = (var_7 == (var_3 / -671303777));
        arr_5 [i_0] = (arr_2 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 9;i_3 += 1)
                {
                    {
                        var_11 = (((~-4609) ? 14979018009099663362 : 1208478953));
                        var_12 = (min(var_12, (((arr_10 [i_0] [i_0] [i_3 - 1] [i_3 - 2]) / (arr_10 [1] [i_1] [i_3 - 1] [i_3 - 2])))));
                    }
                }
            }
        }
        arr_13 [i_0] [i_0] = ((17684672750390064902 ? 112022960 : -4609));
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 6;i_5 += 1)
        {
            {
                var_13 = (min(var_13, (((~(((((min(var_9, (arr_17 [i_5]))) + 2147483647)) >> (((arr_0 [i_4]) - 1825849254)))))))));
                var_14 &= var_6;
            }
        }
    }
    var_15 = var_8;
    #pragma endscop
}
