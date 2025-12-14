/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = (var_6 % 650169491);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (((((!(((1 ? 4992371177402044040 : var_3))))) ? (max(var_4, 27337)) : (arr_8 [i_1] [i_1]))))));
                    var_15 = (max((((((1 ? 1 : 31567))) ? 1 : 2137516463)), var_12));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = ((((var_12 ? (arr_11 [i_3] [0]) : var_6))) ? 1 : (~1));
        var_16 -= ((arr_11 [i_3] [i_3]) ? (arr_11 [i_3] [i_3]) : (arr_11 [i_3] [i_3]));
        var_17 = (arr_11 [i_3] [i_3]);
        arr_13 [i_3] [i_3] = (((var_2 ? -20276 : 13454372896307507566)));
    }
    var_18 = max(((32088 ? var_0 : (!1))), var_3);
    #pragma endscop
}
