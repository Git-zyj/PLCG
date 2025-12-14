/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 = arr_2 [i_0];

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_14 = 42;
                    var_15 += (arr_7 [i_0] [i_0] [i_0] [i_2]);
                    arr_9 [i_1] [i_1] [9] = 1730;
                    var_16 = (max(var_16, (arr_5 [i_1] [i_1])));
                }
            }
        }
    }
    var_17 = ((((1089455239 | (0 < -9044)))) ? (var_12 || 1631131547) : -1815489899);
    var_18 = min((((2769584059 ? (125 + 221) : (min(var_0, var_9))))), var_4);
    #pragma endscop
}
