/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        var_13 = 20705;
                        var_14 = (((var_7 < 2572683991) ? (var_3 | var_10) : (!44807)));
                    }
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        var_15 = (min(var_15, ((((((20705 ? (arr_4 [i_0 + 1] [1] [i_0 + 2]) : 13140152805987852423))) && ((min(((2118788589 ? var_0 : 668333196)), 20728))))))));
                        var_16 |= (~((-2118788590 ? (!var_5) : (min(7, var_6)))));
                        var_17 = (max(var_17, 2118788589));
                    }
                    var_18 = (arr_7 [1] [i_1] [i_2] [i_0]);
                    var_19 -= (arr_6 [i_0] [6] [i_2 + 1] [4]);
                    var_20 = (6389442866248391416 || var_10);
                }
            }
        }
    }
    var_21 = ((-((5587203068319943105 ? 2572684009 : ((((var_4 + 2147483647) >> (-8329 + 8330))))))));
    #pragma endscop
}
