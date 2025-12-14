/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 *= (arr_1 [i_0] [1]);
        var_16 = min(13068997135031464330, var_1);
        var_17 = (4 ? 65517 : 769927318);
    }
    var_18 *= (min(((!(((532676608 ? 532676608 : 65517))))), 1));
    var_19 = var_3;
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_20 += (max(-28647, ((var_1 ? (arr_9 [i_1] [i_2] [i_3] [6]) : (arr_9 [12] [i_2] [i_2] [12])))));
                    arr_10 [i_3] [6] [i_2] [i_3] = ((4 ? ((max((min(65519, 0)), 23602))) : var_7));
                    var_21 ^= (-532676609 % 23611);
                }
            }
        }
    }
    #pragma endscop
}
