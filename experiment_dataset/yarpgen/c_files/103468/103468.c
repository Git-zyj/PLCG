/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (min((((arr_1 [i_0 - 1]) ? var_1 : (((arr_1 [i_0 - 2]) | 1)))), ((max((arr_1 [i_0 + 1]), 64723)))));
        var_20 = 1;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_21 -= (((((arr_6 [i_2] [i_2]) << (((arr_1 [i_1]) - 72)))) & (((~(max(var_5, var_16)))))));
            arr_9 [i_2] [i_1] = (min(3763, (((arr_3 [7]) / (arr_3 [i_1])))));
            var_22 = (arr_5 [i_2]);
            arr_10 [i_2] = (((((~(var_6 & var_3)))) ? ((((~(arr_4 [i_1]))))) : ((((((arr_6 [i_2] [i_1]) & var_8))) ? ((min((arr_1 [i_2]), (arr_0 [i_1])))) : (((arr_7 [i_1] [i_2] [i_2]) | (arr_4 [i_1])))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            arr_15 [i_1] = (((arr_1 [i_1]) | var_2));
            arr_16 [i_1] |= (~var_19);
        }
        for (int i_4 = 4; i_4 < 12;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_23 ^= ((((((var_3 | 4294967295) ? (8 - 2301339409586323456) : var_14))) ? (min(-7487379273568070622, ((min((arr_11 [i_7] [i_4] [i_1]), var_7))))) : ((((-1187641018 ? var_19 : (arr_5 [i_7]))) | var_17))));
                            var_24 = (min(((-9223372036854775789 ? 19710 : (!var_4))), ((var_14 ? (var_7 >= 0) : 45825))));
                        }
                    }
                }
            }
            arr_28 [i_1] = (arr_8 [i_1]);
        }
        arr_29 [i_1] = ((-(min(105, var_0))));
    }
    var_25 += ((max(var_2, (var_13 <= var_19))));
    var_26 &= (3760 | var_1);
    #pragma endscop
}
