/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((max((((var_10 ? -2147483641 : var_5))), (~var_6)))) ? ((((var_8 == (~231))))) : ((var_18 ? (min(var_15, var_7)) : var_16))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_0] [i_0] = 1756857509;
                    arr_9 [i_0] = ((!(!238)));
                    var_20 = (max(((((~var_9) ^ ((min(var_15, var_16)))))), (((((arr_2 [i_0] [i_1]) && (arr_3 [i_0] [i_0] [i_0]))) ? ((((!(arr_3 [i_0] [i_0] [i_0]))))) : (arr_5 [0] [0] [i_2])))));
                    var_21 = ((6646197273248578146 ? 8 : 18446744073709551615));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_22 = arr_10 [16];
        arr_12 [i_3] = (((((-((-(arr_11 [i_3] [i_3])))))) ? ((((8 ? var_8 : 243)))) : ((-var_9 ? 243 : (((arr_10 [i_3]) ? var_11 : (arr_10 [i_3])))))));
    }
    for (int i_4 = 2; i_4 < 13;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 14;i_6 += 1)
            {
                {
                    var_23 = ((+(((arr_14 [i_4 + 3]) ? ((4255028997 ? 4255028997 : 18446744073709551593)) : var_17))));
                    var_24 ^= (((-((248 ? var_15 : (arr_17 [i_4] [14] [i_6 + 1]))))));
                }
            }
        }
        var_25 = (min((((arr_16 [i_4 + 2]) ? (arr_14 [i_4 + 2]) : (((var_5 << (255 - 232)))))), ((((((arr_11 [i_4] [i_4]) ? var_16 : (arr_17 [i_4] [i_4 + 1] [i_4])))) ? (((arr_16 [4]) ? (arr_19 [i_4] [i_4] [i_4 + 3] [i_4]) : var_8)) : (arr_14 [i_4 + 2])))));
        var_26 = (min(var_26, ((((!247) ? ((((arr_10 [i_4]) >= (arr_20 [i_4])))) : ((((((247 ? 247 : 547608330240))) ? ((-(arr_16 [i_4]))) : (((arr_21 [i_4]) ? (arr_21 [3]) : var_14))))))))));
    }
    #pragma endscop
}
