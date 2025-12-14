/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((max(((((var_7 > var_1) ^ var_6))), ((((var_6 ? var_2 : var_1)) & (min(var_10, var_6)))))))));
    var_12 = (((((var_3 ? 17371215800204169655 : 1075528273505381961)))) ? var_4 : ((((((~var_5) + 2147483647)) << (((var_0 + 32) - 23))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 &= (((arr_1 [i_2]) ? 15 : 1));
                    arr_7 [i_2] [i_0] [i_0] = ((!(arr_0 [i_1 - 2])));
                    var_14 = (min(var_14, (((~var_0) >= 2344131877))));
                    arr_8 [i_0] [i_0] [i_2] [i_1] = (arr_2 [i_1 - 3]);
                }
            }
        }
        arr_9 [8] |= (arr_1 [i_0]);
        var_15 = (((((17178 ? var_6 : (arr_6 [i_0] [i_0] [i_0])))) ? (~72) : (arr_2 [i_0])));
    }
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        var_16 = ((((max((arr_10 [i_3]), var_5))) - (min((arr_10 [i_3]), var_4))));
        var_17 = (((36566 <= var_7) >= (max((238 <= 65535), (((arr_11 [i_3]) ? var_5 : (arr_11 [i_3 - 1])))))));

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_18 *= (((((arr_12 [i_3 + 2] [i_3 + 2] [i_3 + 2]) % 12)) << ((((-(max(3107464602, (arr_13 [i_3] [i_3]))))) - 1187502681))));
            var_19 ^= ((-(((((17371215800204169631 ? 33553408 : var_10))) ? (~1075528273505381979) : var_9))));
            var_20 = (((!var_5) | ((max((arr_11 [i_3 + 1]), var_5)))));
            arr_15 [i_3] = ((!((max((var_9 ^ 65305), var_10)))));
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            arr_18 [i_3] [i_3] = ((((((min((arr_12 [i_5] [i_5] [6]), (arr_14 [i_3])))) ? ((var_7 ? var_1 : 58709)) : 34559)) * var_7));
            var_21 = ((((((max((arr_12 [7] [i_3] [i_3]), (arr_13 [19] [i_5])))) ? 4776835916297073331 : var_5)) * ((min(0, ((min(var_5, (arr_17 [i_3])))))))));
        }
        var_22 = (((((131 ? 6849 : (~var_10)))) ? ((((min((arr_13 [i_3] [i_3]), var_6))) ? ((min(var_8, 952828523))) : (var_8 ^ var_0))) : (((((min(var_8, var_5)))) | var_0))));
    }
    var_23 = ((~(max((16638154489048144562 >= var_1), (var_6 / 156)))));
    #pragma endscop
}
