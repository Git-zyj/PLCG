/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((max(((((var_6 && 1) == ((max(var_17, -58)))))), (max((~var_17), (48 ^ var_18))))))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0 - 1] = (((((~(((arr_1 [i_0]) ? (arr_0 [i_0]) : var_6))))) ? (((arr_0 [i_0 - 2]) ? var_10 : 1)) : (arr_0 [i_0])));
        var_21 = ((!(arr_1 [i_0 - 2])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_22 = (min(var_22, (((((arr_1 [i_1]) ? (arr_7 [i_1]) : 1)) == -30782))));
        arr_8 [i_1] [i_1] = (((((!(arr_5 [i_1])))) << (((arr_0 [i_1]) - 48295))));
        arr_9 [i_1] = ((1 ? ((var_9 >> (((arr_7 [i_1]) - 92)))) : (-111 % 48)));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_23 = (max(var_23, var_11));

        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            arr_15 [i_2] [i_2] |= 71;
            var_24 = (min(var_24, (((((max((arr_14 [i_2] [i_3] [i_2]), -3))) << (((((arr_10 [i_2]) ^ (((arr_12 [i_2]) | (arr_13 [i_2] [1]))))) - 46158)))))));
            var_25 = ((1 ? ((-10 ? (((arr_14 [i_2] [i_2] [i_3]) ^ 32552)) : ((max((arr_14 [i_2] [i_2] [i_3]), var_12))))) : (~var_19)));
            arr_16 [i_2] [i_3] = arr_13 [i_2] [i_2];
        }
        arr_17 [i_2] = ((!(((-((max(1, (arr_11 [i_2] [i_2])))))))));
    }
    #pragma endscop
}
