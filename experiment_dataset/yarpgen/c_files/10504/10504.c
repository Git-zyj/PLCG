/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [2] [2] [i_0] = ((!(~-19786)));
                arr_6 [i_0] = (min(((max((arr_1 [7]), (var_7 > var_7)))), (arr_2 [i_0] [i_1])));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_11 [12] [i_0] [i_0] = -177;
                    arr_12 [i_0] = 177;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_15 = (min(var_15, ((((var_0 | var_7) < (!70))))));
                    arr_16 [i_0] [i_0] = (~var_9);
                }
                var_16 = max(((var_8 ? (arr_3 [i_0] [i_1]) : (arr_7 [i_0] [i_1] [i_1] [5]))), var_1);
            }
        }
    }
    var_17 = min(((-((177 ? var_9 : var_11)))), (389 ^ 70));
    #pragma endscop
}
