/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(~var_5)));
    var_18 = (var_4 * 32640);
    var_19 = (((min(480899034329661065, (var_10 * 50168))) % (32651 % var_0)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [0] = ((~(arr_2 [i_0])));
                    arr_7 [18] [18] [12] [18] = ((var_14 ? 32883 : (arr_2 [i_1])));
                }
            }
        }
        arr_8 [i_0] [0] = 32882;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = (arr_11 [i_3] [i_3]);
        arr_13 [8] = 2500936763300603676;
        arr_14 [i_3] [i_3] = 32658;
    }
    #pragma endscop
}
