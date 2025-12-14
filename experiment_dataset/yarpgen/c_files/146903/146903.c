/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((var_1 ? var_9 : (max((min(var_6, var_7)), var_4)))))));
    var_15 = ((2147483622 ? (((!(1 || 235)))) : var_3));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_16 ^= (arr_0 [i_0]);
        arr_2 [i_0] = ((-(arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = -149;
        var_17 = (min(-1317, 17));
        var_18 = ((-(min((arr_3 [i_1]), 36))));

        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            arr_8 [i_1] [i_2] = ((((~(arr_7 [i_2 + 1] [i_2 + 1]))) % (max((arr_7 [i_2 + 1] [i_2]), 17))));
            var_19 = ((-(576460752303423486 + 65535)));
        }
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_20 = (1299 >> 17179860992);
        var_21 = var_13;
        var_22 &= ((-((~(var_8 + var_10)))));
        var_23 = (((var_6 != var_11) * (arr_0 [i_3])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_24 = 11944911319568616620;
        var_25 = (((arr_7 [13] [i_4]) <= (arr_3 [i_4])));
        var_26 = ((var_8 ? ((57974 ? 1565493614 : 235)) : (-2147483647 - 1)));
        var_27 *= (-7920230729795832336 > -17179860993);
    }
    #pragma endscop
}
