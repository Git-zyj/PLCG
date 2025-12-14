/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, 2227569305));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [3]);
        arr_3 [i_0] = 1366453997;
        var_17 = (max(var_17, ((((2067397990 + 2227569305) ? ((var_6 ? ((175 ? (arr_1 [i_0]) : 18446744073709551596)) : 18446744073709551606)) : var_5)))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_18 = (max(var_18, (((((((!9) ? (min(1421364919, (arr_5 [i_1] [i_1]))) : 51548))) ? var_5 : (18446744073709551603 / var_9))))));
        arr_6 [i_1] [i_1] = (min(((2032 ? -2015 : var_7)), var_12));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        arr_9 [7] = (((~(59087 * var_4))));
        var_19 = ((~((18446744073709551606 ? (2227569328 >= var_9) : (min(33021, 4294967295))))));
        arr_10 [i_2] [i_2] = var_6;
        arr_11 [i_2] = 13273747289590785557;
        var_20 = (min(var_20, 50));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        var_21 = (((arr_4 [0]) * (arr_5 [i_3] [i_3])));
        var_22 = (min(var_22, ((((arr_5 [4] [i_3]) ? var_0 : (arr_13 [i_3]))))));
    }
    #pragma endscop
}
