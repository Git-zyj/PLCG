/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_2 >> 1);
    var_18 -= var_5;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = 49152;

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_20 = var_16;
                        var_21 = (((((arr_11 [i_0] [8] [i_0] [i_0]) - var_8))) ? ((-((8 - (arr_8 [i_0] [i_0] [i_2 + 1]))))) : ((min(var_5, (((!(arr_11 [i_0] [i_1 + 1] [i_0] [i_3]))))))));
                        arr_14 [i_0] [i_2] [i_1 + 2] [i_0] = (((arr_6 [2]) ? ((min(245, -0))) : var_1));
                    }
                }
            }
            var_22 = ((((!((max(var_6, var_8))))) ? (((var_2 + 9223372036854775807) << (var_14 - 1))) : (((min(((((arr_0 [i_0]) || var_14))), var_15))))));
        }
        var_23 = (((((-(arr_2 [i_0])))) ? -var_9 : (((-((1 ? 1 : 1)))))));
    }
    #pragma endscop
}
