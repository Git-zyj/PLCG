/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_10 += (arr_0 [4] [6]);
        arr_2 [6] = (min(((((arr_1 [i_0 + 3]) ? -49645 : (arr_0 [i_0] [i_0])))), (arr_0 [i_0 + 2] [i_0 - 2])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                var_11 = (arr_0 [1] [i_1]);
                var_12 = var_3;
            }
            var_13 += 1;
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_11 [i_3] |= (arr_10 [i_3] [16]);
        arr_12 [i_3] = (arr_9 [i_3]);
        var_14 = (arr_9 [i_3]);
        var_15 = (arr_8 [i_3]);
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 7;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 8;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    {
                        var_16 = -1;
                        var_17 = ((((-(arr_16 [1] [1] [i_6]))) >= ((((arr_22 [i_4 - 1] [i_5] [10] [i_7]) ? (arr_14 [i_7]) : (arr_7 [18] [i_5]))))));
                    }
                }
            }
        }
        var_18 = (min(var_18, (arr_23 [i_4 + 2] [i_4] [i_4] [i_4 - 2])));
    }
    var_19 *= var_4;
    var_20 = (((~var_6) ? ((49645 ? var_4 : var_7)) : var_0));
    #pragma endscop
}
