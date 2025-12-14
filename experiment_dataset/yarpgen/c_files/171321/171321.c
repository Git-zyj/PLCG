/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_11;
    var_19 = ((~(min((~8882645668696234714), (~var_7)))));
    var_20 = (max(((max(178, var_10))), ((-var_1 - (max(var_1, var_8))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_21 = (max(var_21, var_12));
        var_22 = ((~(arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = -var_11;
        var_23 = ((((((max(var_4, 0))) ? (~var_7) : var_13)) * ((-0 & (max(67108862, (arr_3 [i_1])))))));

        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_24 &= (var_2 & var_6);
            arr_7 [i_1] [i_1] [i_1] = (((((arr_3 [i_1]) == var_3)) ? ((((arr_6 [i_1]) << (-900119219 + 900119249)))) : (((arr_0 [i_2]) ? var_2 : (arr_0 [i_1])))));
            arr_8 [i_1] [i_1] = (min(((var_13 == (0 / var_2))), (arr_6 [i_2])));
            var_25 = (393738234 && -21338);
            arr_9 [i_1] [i_1] = ((var_9 * ((((((var_0 ? var_0 : -112))) ? -1460242586 : (arr_1 [i_1]))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
        {
            arr_13 [i_1] [13] [13] = (~var_11);
            var_26 = (((arr_6 [i_3]) << (arr_6 [i_1])));
            var_27 ^= 105;
            var_28 = ((~(arr_11 [i_1] [i_1] [i_1])));
        }
        arr_14 [i_1] [i_1] = (!-14377);
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_29 = (((((!(arr_10 [i_4])))) & ((3403 ? (arr_0 [i_4]) : (arr_0 [i_4])))));
        arr_18 [i_4] [i_4] = (+((min((arr_17 [i_4] [i_4]), 71))));
        arr_19 [i_4] [i_4] = ((((max((arr_15 [i_4]), (arr_15 [i_4])))) / ((max((arr_15 [i_4]), (arr_15 [i_4]))))));
    }
    var_30 = var_5;
    #pragma endscop
}
