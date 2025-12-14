/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_11;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (min(var_21, ((((143 << (((arr_2 [4]) - 108))))))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_0] [i_0] = (((-28720 - var_17) - ((103 ? var_9 : var_12))));
                    var_22 = ((3915401482 > var_3) & (~var_3));
                    var_23 = ((((-28720 ? var_10 : var_18)) << (((arr_6 [i_0 + 1] [i_0 - 1] [1]) + 2501794220741709083))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    arr_12 [0] [i_0] = -28720;
                    arr_13 [i_0] = 51229;
                }
                var_24 = var_7;
                var_25 = ((((max(((28726 ? 28723 : 22)), (~-78)))) ? ((((14306 ? -28714 : 1111590709)))) : ((((((min(20357, (arr_7 [i_0] [i_0] [i_1])))) + 2147483647)) >> (((((arr_6 [i_1] [i_1] [i_0]) | (arr_10 [i_0 + 2]))) + 2501794220741709081))))));
            }
        }
    }

    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        arr_17 [i_4] = ((((-14783 + (((2559949408961350375 != (arr_15 [5])))))) & (arr_16 [i_4 + 1])));
        var_26 = (min((((~var_17) ? var_4 : (!2954251689))), ((((20373 * 0) | (arr_15 [5]))))));
        var_27 = (max((!21), (arr_14 [i_4 - 1])));
        arr_18 [7] = (max(7943487669744955419, (((3101444575501267133 ? (arr_14 [i_4 + 1]) : -16384)))));
    }
    #pragma endscop
}
