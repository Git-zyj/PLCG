/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_20 |= (!(-var_6 / 3846163465));
        arr_2 [i_0] = 3846163467;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_21 ^= (!var_12);
            arr_10 [i_2] = (arr_0 [i_1]);
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_22 ^= ((arr_13 [i_1] [i_3] [i_1]) | 448803831);
            var_23 *= (!448803831);
            var_24 &= (arr_5 [5]);
            arr_15 [i_3] = var_14;
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_25 ^= (((arr_16 [i_1] [i_4] [i_1]) + (!var_14)));
            var_26 = var_18;
            var_27 += (((arr_16 [i_4] [i_4] [i_1]) ? (arr_3 [i_1] [i_1]) : (arr_12 [i_4] [i_1] [i_1])));
        }
        arr_19 [i_1] &= (arr_8 [i_1] [i_1] [i_1]);
        var_28 = (((arr_3 [i_1] [i_1]) ? (arr_3 [1] [i_1]) : (arr_7 [i_1] [i_1])));
    }
    var_29 = ((((min(var_13, (var_16 + var_4)))) ? (((((!var_4) > 448803831)))) : (((1 * 3846163459) ? -3349638553270926194 : var_7))));
    #pragma endscop
}
