/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = ((((min((!10172), ((146 ? -4077294694058845584 : -4594434315119440117))))) || (((var_9 ? (min(var_12, var_7)) : ((-93003523 ? 1078531683471012132 : -93003515)))))));
        arr_4 [i_0] = ((((!(!var_6))) ? ((((var_9 || (var_2 || var_8))))) : ((-((2047 ? 2047 : 3826718369))))));

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    {
                        var_13 = (((((-(max(var_1, var_6))))) ? (((var_6 ? var_12 : var_1))) : (min((min(var_10, var_12)), (~var_10)))));
                        arr_17 [i_3] [i_3] [i_2] [i_3] = (min(-28, -93003523));
                    }
                }
            }
            var_14 |= (((~2930502753308618025) | (min((var_0 | var_4), ((min(var_10, var_1)))))));
        }
        arr_18 [i_0] = (((max(((var_3 ? var_4 : var_0)), (~var_8)))) ? (((!var_5) | var_3)) : (~3104372583532753505));
    }
    var_15 ^= var_2;
    var_16 = (((((((max(var_12, var_11))) ? (var_4 | var_4) : (var_11 | var_2)))) ? ((var_11 ? (var_1 || var_12) : ((var_2 ? var_0 : var_6)))) : (max(var_11, (~var_1)))));
    #pragma endscop
}
