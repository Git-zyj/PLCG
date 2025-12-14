/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 ^= 1846734312232283085;
        arr_4 [1] = -1846734312232283082;
        arr_5 [1] [i_0] = (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_2] [i_3] [i_4] = ((!(((-(arr_16 [12] [i_0] [i_0] [i_1] [1] [0] [i_0]))))));
                                arr_18 [i_0] [i_0] [i_0] [3] [i_4] = -1436653578751705186;
                                var_20 = (((arr_12 [i_4] [i_4] [i_1 - 4] [i_1 - 4]) ? -1846734312232283082 : -530591935));
                            }
                        }
                    }
                    var_21 *= (var_14 - (arr_3 [i_1 + 2] [i_1 - 4]));
                }
            }
        }
        arr_19 [i_0] [i_0] = (4294967295 - (arr_2 [i_0]));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_22 = (arr_11 [i_5] [9] [i_5] [19]);
        var_23 = var_11;
        arr_23 [15] = (~var_2);
        arr_24 [4] = ((!((((((14786 / (arr_16 [i_5] [i_5] [6] [1] [i_5] [6] [9])))) ? 1846734312232283082 : 1846734312232283097)))));
        var_24 *= (min(973868485, (arr_6 [i_5] [i_5] [i_5])));
    }
    #pragma endscop
}
