/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((((max(var_18, var_17))) * var_4)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = (max(var_20, (arr_0 [i_0])));
        arr_2 [i_0] = (max((arr_1 [i_0]), (max(41600, -1))));

        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            var_21 = max(var_16, ((((arr_4 [i_1 - 4] [i_1 - 2]) == var_13))));
            var_22 -= ((((var_17 ? (((min((arr_3 [i_0] [i_0] [i_0]), var_3)))) : var_7)) > (arr_4 [i_0] [i_0])));
            var_23 = (arr_1 [i_0]);

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_24 = (max(var_24, (((min(((1599640542 ? -2162101126800504884 : -12), (arr_3 [i_0] [i_0] [i_0]))))))));
                var_25 |= (((arr_3 [i_1 - 1] [i_1 + 4] [1]) << ((var_0 / (arr_5 [i_0] [i_0] [i_2])))));
            }
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                arr_11 [i_0] [i_0] [i_3] = (arr_5 [11] [i_1 + 4] [i_3]);
                arr_12 [i_3] [11] [17] [0] = (arr_1 [9]);
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
            {
                var_26 = var_2;
                var_27 = (((((arr_14 [i_0] [i_1 - 3] [17]) ? var_12 : (arr_5 [i_0] [i_1] [19]))) & var_2));
            }
            for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
            {
                arr_18 [i_0] = (min(var_11, ((max((min((arr_0 [i_0]), var_4)), (arr_15 [i_1 + 1]))))));
                arr_19 [i_0] [i_1 + 1] [i_5] |= ((var_17 ? ((((arr_16 [i_1 - 3] [i_1 + 3] [i_1]) <= (arr_0 [i_5])))) : (!var_5)));
                arr_20 [i_0] [i_1] [i_5] [i_5] = var_10;
                arr_21 [i_0] &= (((arr_8 [i_0] [i_1 + 2]) / ((-12 ? 7202174530557200104 : 7026))));
                var_28 *= (((((arr_17 [i_0] [i_1] [i_5]) >= (arr_17 [i_0] [i_1] [i_5]))) ? ((((min(var_9, var_6))))) : (arr_5 [i_1 - 4] [i_1 + 4] [i_1 - 4])));
            }
            var_29 += (((arr_5 [i_1] [i_0] [i_0]) >= (arr_10 [12] [i_1 - 3] [12])));
        }
        var_30 = (max(((var_6 ? (arr_9 [20] [i_0]) : (arr_9 [i_0] [i_0]))), (arr_9 [i_0] [i_0])));
        var_31 = (min(var_31, ((max((!var_17), (arr_9 [i_0] [i_0]))))));
    }
    var_32 = var_12;
    #pragma endscop
}
