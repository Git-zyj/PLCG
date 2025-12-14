/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_8 != ((var_11 ? var_12 : (((1 ? 1 : 2018081508)))))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0 + 2] = ((0 - ((var_9 ? (((arr_1 [i_0 + 1]) - 13667907744210168978)) : (arr_1 [i_0])))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_21 = -24642;
            arr_5 [i_0 + 2] [15] [i_0] = (((arr_0 [i_1]) + var_18));
            var_22 ^= (arr_0 [i_0 - 2]);
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_23 ^= ((-19548 != (arr_7 [i_0 + 2] [i_0 + 2] [i_2] [i_0 - 2])));
                            arr_14 [i_4] [3] [3] [i_3] [i_4 + 2] = (arr_1 [i_4]);
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_24 = (arr_10 [i_0 - 1] [i_5]);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 15;i_7 += 1)
                {
                    {
                        var_25 = (min(var_25, (174 > 0)));
                        var_26 = 0;
                        arr_25 [i_5] [14] = ((var_3 == ((27 ? (arr_1 [i_6]) : var_2))));
                    }
                }
            }
        }
        var_27 |= ((-(min(((min(36811, 140))), (((arr_22 [i_0] [i_0 - 1] [i_0] [i_0 - 1]) ? 23 : var_13))))));
    }
    for (int i_8 = 1; i_8 < 18;i_8 += 1)
    {
        var_28 = 30995;
        arr_29 [i_8] = (max(((~((min(var_11, -99))))), 0));
        var_29 = (min((arr_27 [i_8] [i_8]), (arr_27 [i_8 + 1] [i_8 + 1])));
        var_30 = (((arr_27 [i_8 - 1] [i_8 - 1]) & (~21)));
    }
    var_31 = (((max((((204 ? var_14 : -1112967400))), ((var_18 ? var_18 : 3954707723)))) * (var_14 / 42351)));
    #pragma endscop
}
