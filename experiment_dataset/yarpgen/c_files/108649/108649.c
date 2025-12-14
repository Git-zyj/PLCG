/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min((1 >= 0), ((250 ? var_8 : var_2))))) ? ((((1421972661 <= -1) < var_10))) : var_11));
    var_15 = ((-((var_9 ? ((min(127, var_8))) : var_13))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = 1;
        var_17 = (arr_1 [i_0]);
        var_18 = ((-(arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_19 = (min(var_19, ((max((min(1, -1327658601)), (((!(arr_3 [i_1])))))))));

        for (int i_2 = 4; i_2 < 13;i_2 += 1)
        {
            arr_10 [i_2] = (max(-17, (0 < -1327658602)));
            var_20 = (max(var_20, (max((max(-120, (arr_7 [i_2] [i_2] [i_2 - 3]))), (min((((!(arr_9 [i_1])))), ((~(arr_7 [i_1] [i_1] [i_1])))))))));
        }
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_14 [i_3] = ((-(min(((max(5, 255))), (arr_3 [i_3])))));
        var_21 = (arr_3 [i_3]);
        arr_15 [i_3] = (((((((max(1138966873, 18446744073709551595))) ? (((arr_8 [6]) - (arr_11 [i_3] [i_3]))) : 12))) * (arr_12 [i_3] [i_3])));
        var_22 = (min((!-3), (~var_8)));
        var_23 = ((172 ? -5080 : 6144));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_24 = ((-0 & (~12)));
        var_25 = 123746758;
        arr_20 [i_4] |= (arr_18 [i_4] [i_4]);
    }
    var_26 ^= (max(var_2, (max(12, var_4))));
    #pragma endscop
}
