/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((max(var_15, (!3826))));
    var_21 = var_6;
    var_22 = ((((max(32130, (max(35184372088768, var_12))))) ? 1016203951093246510 : -13149));
    var_23 = ((4294967275 ? (max((~var_9), var_15)) : (0 == -17)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_24 = (min((max((max(-3377603885782880261, (arr_5 [i_0] [i_1] [i_2] [i_2]))), (((!(arr_5 [i_0] [i_0] [i_0] [i_2])))))), ((max((-9223372036854775807 - 1), -77)))));
                    arr_7 [i_0] [i_2] [i_2] = var_6;
                    var_25 |= max((--238259479), (arr_2 [i_2]));
                }
            }
        }
    }
    #pragma endscop
}
