/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_18 *= (((arr_2 [i_0 + 1]) >= ((~(arr_2 [i_0 + 1])))));
        arr_4 [i_0 + 1] = arr_3 [i_0];
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            {
                arr_9 [i_1] [i_2] [i_1] = var_3;

                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    arr_14 [i_1] = (arr_5 [i_1]);
                    arr_15 [i_1] [i_2] = (((min((arr_7 [i_3]), var_3)) * (min((16 * 11751124427745831767), (arr_7 [i_1])))));
                    var_19 = (arr_7 [i_1 + 2]);
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    var_20 = ((!(660533040 + var_5)));

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_22 [8] [i_1] [i_4] [i_4] = ((var_14 % -660533040) == (((var_4 || (arr_13 [i_1 + 1] [i_1 + 1])))));
                        var_21 = ((var_0 / (~660533040)));
                    }
                }
            }
        }
    }
    var_22 -= ((3794117522478137129 ? 1 : 714025967));
    #pragma endscop
}
