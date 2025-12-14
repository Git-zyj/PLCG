/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = (((arr_1 [i_0]) ? (arr_2 [i_0]) : -540119623));
        arr_4 [i_0] = ((15681 + (~var_17)));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_21 = (arr_0 [i_1]);

            for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
            {
                var_22 = (max(var_22, (((1346108034 ? (arr_13 [i_1] [i_2] [i_3] [i_3]) : -49854)))));
                var_23 = arr_12 [i_1] [i_1] [i_2] [i_1];

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_24 = -46;
                    var_25 = (~22668587535000789);
                    var_26 *= -117;
                }
            }
            for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
            {
                var_27 += 63;
                var_28 = ((-((-((61 ? (arr_18 [3] [i_1] [6]) : 14365))))));
                var_29 = (max(var_29, (((~(((((~(arr_8 [i_2] [i_2] [i_2])))) ? var_9 : 63)))))));
                var_30 = ((((((arr_19 [i_2]) + (arr_5 [i_2]))))) ? ((var_11 ? var_8 : -var_7)) : 5758242);
                var_31 = var_10;
            }
            var_32 = var_11;
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
        {
            var_33 = (min(var_33, var_1));
            var_34 = (min(var_34, var_0));
            var_35 = (min(var_35, (arr_17 [i_6])));
        }
        var_36 ^= ((-(1 > var_14)));
        var_37 = (min(var_37, (~-var_4)));
        var_38 = var_12;
        arr_22 [i_1] = (((-((~(arr_0 [i_1]))))));
    }
    var_39 = -var_18;
    #pragma endscop
}
