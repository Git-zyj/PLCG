/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~var_3);
    var_12 &= -var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) - (arr_1 [i_0])));
        arr_3 [i_0] = var_6;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_13 = (((-2147483647 - 1) ? (-2147483647 - 1) : (-2147483647 - 1)));
            arr_8 [i_1] [i_2] = ((+((((arr_0 [i_1]) && var_7)))));
        }
        var_14 = (((arr_7 [i_1]) > ((var_4 ? (-2147483647 - 1) : 18446744073709551615))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = (((arr_1 [i_3]) ^ var_4));
        var_15 = ((-(max(-6602304079083953455, ((((-127 - 1) && var_8)))))));
    }
    #pragma endscop
}
