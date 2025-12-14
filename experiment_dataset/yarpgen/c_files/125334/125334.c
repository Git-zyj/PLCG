/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = var_0;

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 = (4 >> 0);
                    var_13 -= ((76 ? 0 : -46674472));
                    var_14 = (max(var_14, (((~(((!((min(-4, -257286710)))))))))));
                }
            }
        }
        var_15 = (((~13239) + (min((arr_0 [i_0] [i_0 + 1]), (arr_0 [i_0] [i_0 + 1])))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_16 = (!-46674472);
        var_17 ^= ((~(((!(arr_0 [14] [i_3]))))));
        arr_10 [i_3] = ((((((((!(arr_0 [14] [i_3]))) ? 17887 : (min(var_6, (arr_0 [8] [i_3]))))) + 9223372036854775807)) >> ((((var_1 ? (arr_2 [10]) : -4)) + 21912))));
        var_18 = (arr_4 [1] [i_3]);
        var_19 ^= ((32256 - ((min(382464239, var_0)))));
    }
    for (int i_4 = 3; i_4 < 15;i_4 += 1)
    {
        var_20 = (max(var_20, ((min(-1, -51)))));
        var_21 = ((((min(((1 ? var_1 : 4)), (536870911 || 27403)))) ? (((var_3 ^ (arr_11 [i_4])))) : ((((arr_12 [i_4] [i_4]) >> (6755399441055744 - 6755399441055698))))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        var_22 = ((-(arr_17 [i_5 - 1])));
        arr_19 [i_5] [i_5] = ((!(arr_11 [i_5 - 1])));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    var_23 -= ((536870911 ? 0 : 4));
                    arr_25 [i_6] [i_6] [i_6] = ((~(arr_7 [i_5] [i_5] [i_5 + 1] [i_7])));
                    var_24 = ((4 << (((((-32767 - 1) + 32797)) - 18))));
                    var_25 = (min(var_25, ((((~2066375428011941080) ? (((arr_24 [i_6] [i_7]) ? var_0 : (arr_16 [1] [i_7]))) : ((((((arr_21 [2] [i_6] [i_7]) + 2147483647)) >> (((((-2147483647 - 1) - -2147483620)) + 31))))))))));
                }
            }
        }
    }
    #pragma endscop
}
