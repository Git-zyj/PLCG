/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_3;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
        {
            var_16 *= var_14;
            arr_7 [i_0] [i_1 + 3] = ((~((~(((arr_0 [i_0]) ? var_3 : (arr_0 [i_0])))))));
            var_17 = (max(var_17, (((!(((35184372056064 ? 0 : -112738299))))))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 21;i_2 += 1) /* same iter space */
        {
            arr_12 [i_0] [i_0] = (((var_11 <= 195) ? (arr_10 [i_0]) : ((41899 & (arr_8 [6] [6])))));
            var_18 *= ((var_13 ? 27252 : (arr_5 [i_2 + 3])));
        }
        arr_13 [i_0] [i_0] = ((!((((((arr_4 [i_0] [i_0] [i_0]) > -27253)) ? ((~(arr_10 [i_0]))) : ((((arr_10 [i_0]) == -35184372056089))))))));
        arr_14 [i_0] = 7377917908725560487;
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_19 *= (arr_2 [i_3]);
        var_20 = (((29621 ? (arr_1 [1]) : 41892)));
    }
    #pragma endscop
}
