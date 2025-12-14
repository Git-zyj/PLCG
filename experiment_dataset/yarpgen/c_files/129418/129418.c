/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (min((((0 ^ var_8) ^ ((~(arr_1 [i_0 - 1]))))), -4575657221408423936));
        var_18 = (max(var_18, (arr_1 [i_0 - 1])));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            arr_11 [i_1] = ((var_15 ? 1 : 10285831899259817785));
            arr_12 [i_1] = (-822044962 & 17508550003756499);
        }
        var_19 = 822044961;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    arr_18 [i_1] [i_1] [i_1] [i_1] = ((((1783424311012430335 ? -663482965 : var_10)) - (arr_13 [i_1])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_20 = (~var_7);
                                arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_3] &= (((((1 > (arr_21 [i_1] [i_1] [i_1] [i_1])))) << ((((0 ? -6015749183474091235 : 2562412166906312011)) - 2562412166906312003))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
