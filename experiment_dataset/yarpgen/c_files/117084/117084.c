/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    var_18 = -7493067564238755421;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            arr_7 [i_1] [i_1] = (3176294133 * 5943536799507277747);
            var_19 ^= (~var_7);
            arr_8 [i_1] = (((arr_2 [i_1 + 1] [i_1 + 1]) << (14388003697579917784 - 14388003697579917733)));
        }

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_20 *= (((!var_13) > var_6));
            arr_11 [i_2] [i_0] [i_0] = var_16;
            var_21 = ((((-9223372036854775807 - 1) && var_12)) ? 4196334027962200502 : (arr_3 [13] [i_0] [13]));
        }
        arr_12 [14] = (((arr_10 [i_0]) ? var_11 : (!4294967295)));
        var_22 ^= (!var_14);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_15 [i_3] = var_1;
        arr_16 [i_3] = ((-(arr_9 [i_3])));
    }
    var_23 = var_1;
    #pragma endscop
}
