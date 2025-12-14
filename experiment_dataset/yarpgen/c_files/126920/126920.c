/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 += ((~(((~-32762) ? ((32014 ? var_4 : -38)) : (var_9 != var_3)))));
                arr_6 [i_0] = ((((((arr_3 [i_0]) < (((max((arr_1 [i_1]), 32755))))))) ^ 32024));
            }
        }
    }

    for (int i_2 = 3; i_2 < 10;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((!(((65535 >> (((var_5 + 2147483647) >> (var_15 + 16162))))))));
        var_17 = (max(-1, (arr_7 [i_2])));
    }
    for (int i_3 = 3; i_3 < 10;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = ((((var_5 ? (arr_10 [i_3 + 2]) : -32023)) % ((4294967279 ? (!0) : 32742))));
        arr_15 [i_3] [i_3] = ((((min(((~(arr_12 [i_3]))), (~var_10)))) ? (arr_5 [i_3] [i_3]) : ((((-6242 ? 18446744073709551615 : -92)) + var_12))));
        arr_16 [i_3] [i_3 + 2] = (max((((-(arr_9 [i_3])))), (arr_13 [i_3])));
    }
    var_18 = (min(var_18, (6 * var_8)));
    var_19 = ((var_10 ? (((!var_11) | var_9)) : var_9));
    #pragma endscop
}
