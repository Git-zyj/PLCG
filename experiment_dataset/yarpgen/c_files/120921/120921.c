/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (~-65);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((!((-var_1 < (arr_1 [i_0])))));
        var_17 = ((((max(-22, var_3))) == (arr_0 [i_0] [i_0])));
        var_18 -= (((max((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))), (arr_0 [i_0] [i_0]))) >= (arr_0 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_3] = arr_1 [i_1];
                                arr_16 [i_4] [12] [i_0] [i_0] = (max((arr_6 [i_0]), ((((56 << (((arr_10 [0] [i_1] [0] [i_2] [i_1] [i_4]) + 34))))))));
                            }
                        }
                    }
                    arr_17 [i_2] [i_2] [i_2] = (arr_3 [i_0]);
                }
            }
        }
        var_19 = (~(((((arr_1 [i_0]) && (arr_14 [i_0] [5] [i_0] [i_0]))) ? (((arr_0 [i_0] [i_0]) ? 56 : var_6)) : 56)));
    }
    #pragma endscop
}
