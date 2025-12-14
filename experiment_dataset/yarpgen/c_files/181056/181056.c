/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((max((((var_10 << (var_3 + 44)))), 391442322612660114))) && ((min(-1574286887, -1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_14 *= var_1;
                                var_15 = var_9;
                                arr_10 [i_1] [i_1] [i_1] &= (min((((((var_3 ? (arr_6 [i_0]) : -32761))) ? (arr_7 [0] [0] [i_2 - 3] [3]) : (arr_4 [i_3 - 1]))), (((8778541872615437325 ? (min(8778541872615437325, 8543261446990489159)) : -605598675)))));
                                var_16 = (min(var_16, -8778541872615437313));
                            }
                        }
                    }
                }
                var_17 = (max(((min(1437784952, 1815))), (max(((8778541872615437344 ? 8914218015107919118 : var_6)), -8778541872615437328))));
            }
        }
    }
    var_18 = ((!(((-8543261446990489148 ? var_11 : 1)))));
    #pragma endscop
}
