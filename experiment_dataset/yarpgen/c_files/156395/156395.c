/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -10013;
    var_17 = -var_1;
    var_18 = (max(((min(var_8, var_14))), (~var_8)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 -= (min((!0), (~var_3)));
        arr_4 [i_0] [i_0] = (max((((!((((arr_3 [i_0]) ^ var_11)))))), (arr_0 [i_0])));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_20 = (max(var_20, var_10));
        var_21 ^= (max(var_9, ((max((~var_5), (((arr_6 [i_1]) ? 32759 : var_4)))))));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            var_22 = (((arr_5 [i_1 - 1] [i_2 + 1]) ^ 2863241257));
            arr_10 [i_1] [i_2 - 1] [i_2] = ((-19 ? (arr_9 [i_1]) : (arr_6 [i_1])));
            var_23 = ((-(arr_7 [i_2 + 1] [i_2] [i_2])));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_13 [i_3] [i_3] = ((~(((!(arr_11 [i_3]))))));
            arr_14 [i_3] [i_3] = (!var_9);
        }
    }
    var_24 = ((-((-((2863241257 ? 1 : (-127 - 1)))))));
    #pragma endscop
}
