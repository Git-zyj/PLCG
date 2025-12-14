/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = (!4905267356975918008);
        var_19 ^= ((var_5 ? (arr_1 [i_0]) : (((arr_1 [9]) * 0))));
        var_20 ^= (((34 != (arr_2 [i_0]))));
    }
    for (int i_1 = 4; i_1 < 15;i_1 += 1)
    {
        var_21 += (max(((max(730448746, (arr_6 [i_1 - 2] [i_1])))), (arr_8 [i_1 - 1])));
        var_22 = (min(var_22, (arr_7 [i_1 - 4])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = (1839145094974501677 | 1839145094974501677);

        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            arr_14 [1] [1] |= ((!((((arr_8 [9]) ? 16607598978735049925 : (arr_6 [i_2] [0]))))));
            var_23 |= -1839145094974501677;
            var_24 = arr_8 [13];
        }
        arr_15 [i_2] = (((arr_7 [1]) == (arr_7 [i_2])));
        var_25 = var_9;
    }
    #pragma endscop
}
