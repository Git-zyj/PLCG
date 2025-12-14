/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_12 == (-18981 ^ 101));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_15 -= (min(((((min((arr_3 [i_2]), var_10))) ? (arr_7 [i_3] [i_0] [i_0]) : ((max(1325091575, 101))))), (arr_8 [i_2 + 1] [i_1 + 1])));
                        var_16 = ((var_6 ? (((15480 ? 105 : (arr_6 [i_2 - 1] [i_1] [i_2 + 2] [i_2 + 2])))) : ((+(max((arr_3 [i_2]), (arr_8 [i_3] [i_1])))))));
                        arr_12 [i_2 + 1] [i_1] [i_0] = (0 + var_2);
                    }
                }
            }
        }
        var_17 = (max(var_17, ((((((((arr_11 [i_0] [i_0] [i_0]) & 203)))) ? (((arr_8 [i_0] [i_0]) + -360536810)) : (((((192 * (arr_2 [i_0] [i_0]))) - (max(1, -913163994))))))))));
        var_18 += ((-22084 | (arr_1 [i_0])));
    }
    #pragma endscop
}
