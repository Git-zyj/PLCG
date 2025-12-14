/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(34313, ((8 ? 22 : var_17))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_2] = (min(14934601488241695113, (arr_6 [i_0])));
                    var_19 = (((arr_6 [i_2]) ^ 26));
                }
            }
        }
        arr_8 [10] = ((~(((!3587965536453321052) ? (min(var_7, var_4)) : (arr_6 [i_0])))));
        var_20 ^= (((((-(!var_8)))) ? ((((-(arr_4 [i_0]))) - 576160591)) : 117440512));
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 19;i_3 += 1)
    {
        var_21 = ((arr_9 [i_3 - 4]) | (arr_9 [i_3 - 4]));

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_22 ^= ((16515 ? (arr_11 [i_4] [i_3]) : 2047));

            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                var_23 = ((65434 ? (((arr_11 [i_4] [i_3]) & var_8)) : (arr_9 [i_3 - 2])));
                var_24 ^= ((((((arr_10 [i_3] [i_3]) != 53))) - (arr_11 [i_3 - 1] [i_3 + 2])));
            }
            var_25 = (max(var_25, (-13062 == var_17)));
            arr_15 [i_3 - 4] [i_3] [i_3 - 2] = (((arr_9 [i_3 - 4]) ? (-2147483647 - 1) : 3587965536453321047));
            arr_16 [i_3] [i_4] = 117440489;
        }
        arr_17 [i_3] [i_3] = (((arr_13 [0]) ? ((16780 ? 16500 : 38569)) : ((~(arr_10 [20] [20])))));
    }
    var_26 = ((1918 != (!24576)));
    #pragma endscop
}
