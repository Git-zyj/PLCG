/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (33168 | 46719);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_16 = (max(var_16, ((((((24676 ? (arr_5 [12] [i_1 - 1] [i_1]) : (arr_0 [i_2])))) ? (!40854) : (arr_0 [i_2]))))));
                        var_17 = (i_0 % 2 == zero) ? (((var_0 << ((((var_8 ? (arr_4 [i_0] [i_2]) : 33168)) - 34008))))) : (((var_0 << ((((((((var_8 ? (arr_4 [i_0] [i_2]) : 33168)) - 34008)) + 6329)) - 17)))));
                        var_18 *= (65535 || 33165);
                    }
                }
            }
        }
        var_19 = 24540;
        var_20 *= (((((44825 ? (arr_6 [i_0 - 1] [i_0 + 1] [i_0 + 1]) : (arr_1 [0])))) ? var_4 : (arr_1 [6])));
        var_21 *= ((~((var_2 ? (arr_7 [i_0 + 1] [i_0] [15] [i_0]) : (arr_1 [6])))));
    }
    #pragma endscop
}
