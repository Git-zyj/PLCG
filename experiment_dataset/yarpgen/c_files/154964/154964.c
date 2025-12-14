/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max(1785616753, var_11))) ? (max(var_1, var_11)) : var_11));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_21 ^= ((((max(30381, (((!(arr_1 [i_0]))))))) ? (arr_0 [i_0]) : (min(((((arr_2 [i_0]) == var_7))), (max(var_4, (arr_0 [i_0])))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 22;i_3 += 1)
                {
                    {
                        var_22 = (((!0) - (arr_10 [i_3] [8] [i_2] [i_1] [i_0 - 1])));
                        arr_11 [i_0] [i_2] [i_0] [i_0] [21] = ((var_14 ? (arr_8 [i_0 + 1] [i_0 - 1]) : (~9168)));

                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            var_23 = (((((116 ? -121 : 83))) ? ((var_19 ? 162 : 88)) : (arr_5 [i_0 + 1] [i_0])));
                            var_24 = (min(var_24, (((-var_8 ? 203 : 75)))));
                        }
                        var_25 = ((-var_9 % (arr_5 [i_0 - 1] [i_1])));
                    }
                }
            }
            var_26 *= (((((var_1 ? (arr_0 [i_0]) : var_19))) ? (var_12 && 173) : ((-(arr_10 [i_0] [i_0] [i_0 - 1] [i_0] [i_0])))));
        }
        var_27 ^= (min((!-23), 197237965));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_28 ^= ((171 ? (arr_1 [i_5]) : (arr_1 [i_5])));
        var_29 = (arr_3 [i_5] [i_5] [i_5]);
        var_30 = 1;
    }
    #pragma endscop
}
