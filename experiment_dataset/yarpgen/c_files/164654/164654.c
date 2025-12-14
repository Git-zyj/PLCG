/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((min(var_9, var_6)))));
    var_16 *= var_13;
    var_17 = (!var_12);

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-((((var_12 >= (arr_0 [15]))) ? 2147483647 : (892885039 + -1061022086)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_9 [i_2] [i_1] = ((((((1025473820 <= -892885039) ? (var_4 > 892885038) : var_8))) ? var_11 : (var_8 + 67104768)));
                        arr_10 [i_3] [i_2] [i_3] [i_2] [i_2] [i_0 - 2] = ((~(((arr_6 [i_2] [18] [i_3 - 2] [i_3]) + (arr_5 [i_0 - 3] [i_1] [i_3 + 1] [i_2])))));
                    }
                }
            }
        }
        var_18 = (((((arr_6 [i_0] [i_0 - 4] [i_0 - 3] [i_0]) ? (min(var_4, (arr_6 [i_0] [i_0 + 1] [i_0] [i_0]))) : ((((var_11 >= (-9223372036854775807 - 1))))))) < (((((min(-892885057, 43185))) ? ((892885038 ? 1344673557 : 1)) : -1696628687)))));
        var_19 = ((var_3 / ((184701659 ? 18446735277616529408 : 480))));
    }
    var_20 = (max((var_4 + var_6), ((min((535746026 != var_1), var_4)))));
    #pragma endscop
}
