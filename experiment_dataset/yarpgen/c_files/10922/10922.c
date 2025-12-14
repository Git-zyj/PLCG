/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((min(var_3, (!14283)))), var_12));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (max((arr_1 [i_0] [i_0]), ((((!var_9) || var_10)))));
        var_15 = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_16 = (min(var_16, (arr_10 [i_1] [i_1] [6])));
                    var_17 = (i_1 % 2 == zero) ? ((((((14283 ^ -112) + 2147483647)) << (((arr_6 [i_1]) - 1273672012))))) : ((((((14283 ^ -112) + 2147483647)) << (((((arr_6 [i_1]) - 1273672012)) - 369732064)))));
                }
            }
        }
        arr_11 [i_1] = (arr_8 [i_1] [i_1] [i_1]);
        var_18 |= ((-(var_4 < var_0)));
        var_19 = (((arr_0 [i_1]) / var_6));
    }

    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        var_20 &= (((((((arr_13 [i_4 - 1]) != ((((!(arr_14 [i_4]))))))))) != var_7));
        var_21 = (min((min(((((arr_14 [i_4]) > var_5))), (arr_14 [i_4 + 1]))), (arr_13 [i_4 + 2])));
        arr_15 [i_4] = ((+((((((arr_12 [i_4 + 4]) ? var_1 : (arr_12 [i_4 - 1])))) ? -997671211314656221 : ((((var_8 <= (arr_12 [i_4])))))))));
        arr_16 [i_4] = ((+((-(((arr_13 [i_4]) % (arr_13 [i_4])))))));
        var_22 ^= (((((arr_12 [i_4]) + ((max(-1276340837, 2147483624)))))) ? ((8263566131711906085 ? (min(var_6, (arr_14 [i_4]))) : (min((arr_12 [i_4 + 4]), var_1)))) : (!var_11));
    }
    var_23 = ((min((max(var_5, var_6)), var_6)));
    var_24 += (((((((min(var_9, var_10))) ? var_10 : var_3))) / var_11));
    #pragma endscop
}
