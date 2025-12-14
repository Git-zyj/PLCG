/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min(-9126, var_0);
    var_21 = ((((min(-24564, var_12))) + 12198));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_22 = ((-4012 ? ((((max(24573, -18369))) ? (~var_19) : ((31289 ? var_1 : (arr_1 [i_0] [i_0]))))) : ((var_8 + ((min(var_11, (arr_3 [i_0]))))))));
        var_23 = ((-2857 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = var_12;
        var_24 = arr_0 [i_1] [i_1];
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = (min((arr_1 [i_2] [14]), (((arr_4 [2]) ? 13515 : (arr_1 [i_2] [8])))));
        var_25 = (32765 != -16325);

        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            arr_15 [i_2] = var_16;
            var_26 = (max((max(((var_8 ? 16 : (arr_14 [i_2] [i_2] [i_2]))), (((!(arr_12 [3] [3] [i_3])))))), ((max(var_14, (min((arr_13 [i_2]), (arr_12 [12] [i_3] [i_3]))))))));

            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                arr_18 [i_2] [i_2] [i_2] [9] = (min((arr_2 [i_2] [i_2]), (((min((arr_2 [i_2] [i_2]), 15730))))));
                arr_19 [i_2] = ((((-12181 ? (arr_8 [i_2] [i_2]) : var_17)) * (((!(arr_8 [i_2] [i_2]))))));
            }
        }
        var_27 = (((((arr_14 [i_2] [2] [i_2]) + 2147483647)) >> (((((max((arr_4 [16]), var_10)))) - 6790))));
    }
    var_28 = ((((((max(13517, var_10))))) ? (((var_15 ? -28510 : var_3))) : (~var_17)));
    #pragma endscop
}
