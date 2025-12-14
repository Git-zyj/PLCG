/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            arr_4 [i_0] [i_1 + 1] = (((arr_3 [i_1 + 1]) - 492581209243648));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_12 |= ((18446744073709551607 ? (arr_1 [i_2]) : 41713));
                        var_13 = (((arr_2 [i_1] [i_1 + 1] [i_1 + 1]) ? (arr_9 [i_1] [i_0] [i_1 + 1] [i_1] [i_0]) : (((!(arr_7 [i_1] [i_2] [i_2]))))));
                        arr_10 [i_3] [i_1] [i_3] [0] [i_2 + 1] [i_0] = (arr_2 [i_1 + 1] [i_2 + 1] [i_2 - 1]);
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            arr_13 [i_0] = ((((min((min((arr_9 [i_0] [i_0] [i_0] [i_4] [i_0]), (arr_12 [i_0] [i_4] [i_0]))), 1))) ? ((67 ? (arr_9 [i_0] [i_0] [i_0] [i_0] [8]) : (arr_7 [i_0] [14] [21]))) : var_3));

            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_14 = (max(var_14, -1));
                var_15 = (((3256565392049633459 ? 18446251492500307955 : 1)));
            }
        }
        var_16 = (max(var_16, (!var_7)));
    }
    var_17 = (((((~(~var_10)))) ? (~-1002389189) : (((((var_7 << (((-1294915420 + 1294915440) - 13))))) ? var_2 : 97))));
    var_18 = var_0;
    var_19 ^= (var_4 ? var_11 : ((min(var_2, var_11))));
    #pragma endscop
}
