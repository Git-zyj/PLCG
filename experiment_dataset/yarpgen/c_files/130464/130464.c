/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (-2147483647 - 1)));
    var_14 = ((-((-var_1 - (max(9223372036854775807, 16352))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_2 [i_0] [i_0]));
        var_15 -= (((arr_0 [i_0] [i_0]) ? var_3 : (arr_0 [i_0] [i_0])));
        arr_4 [i_0] = -617168990596815037;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    {
                        var_16 = 31;
                        var_17 = (arr_15 [i_4 - 1] [i_4] [i_4] [i_2]);
                    }
                }
            }
        }
        arr_16 [i_1] = ((0 ? var_3 : (max(2330099777, 1))));
    }
    var_18 = (var_2 ? (~var_2) : (max((var_4 / 49323), (max(var_6, var_11)))));
    #pragma endscop
}
