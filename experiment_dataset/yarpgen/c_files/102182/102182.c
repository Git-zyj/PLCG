/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!210);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 = (arr_3 [i_2 + 1]);
                    var_20 = (arr_2 [i_0]);
                    var_21 = var_12;
                    var_22 = (arr_4 [i_0] [i_0] [5]);
                }
            }
        }
        var_23 = (((!2686559425) | ((-(arr_3 [i_0])))));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            var_24 = var_4;
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_25 = -var_13;
                            var_26 = 48254;
                            var_27 = (!var_11);
                        }
                    }
                }
            }

            for (int i_8 = 3; i_8 < 18;i_8 += 1)
            {
                var_28 = (arr_10 [4] [i_8 - 3] [i_3]);
                var_29 *= (arr_15 [i_4 + 1] [i_8 - 1] [5] [i_8 - 3] [i_3] [i_8]);
                var_30 = (max(var_30, 8330));
                var_31 = (!17281);
            }
            for (int i_9 = 1; i_9 < 18;i_9 += 1)
            {
                var_32 += 48241;
                var_33 = (((arr_15 [i_9 + 1] [i_3] [i_4 - 1] [i_3] [i_3] [i_3]) ? ((48264 ? (arr_13 [i_3] [i_3] [i_4 + 1] [i_3]) : -59)) : -50));
            }
            var_34 = ((50 ? 3012751684 : (arr_17 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 + 1])));
        }
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
            {

                for (int i_12 = 1; i_12 < 16;i_12 += 1)
                {
                    var_35 = 69;
                    var_36 += var_7;
                }
                var_37 = -39;
            }
            for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
            {
                var_38 = (arr_24 [11] [i_10]);
                var_39 *= (((((25555 ? (((arr_16 [i_3]) << (((var_8 + 137) - 17)))) : ((-(arr_10 [12] [i_10] [i_13])))))) ? (((((max(1, (arr_18 [i_3] [i_3])))) || (((var_6 ? var_1 : var_16)))))) : ((((~-25) || (((arr_21 [i_3] [i_3] [i_3]) < var_7)))))));
                var_40 = ((var_13 / (((((~(arr_25 [1])))) ? (((max((arr_24 [i_3] [i_10]), var_14)))) : var_10))));
                var_41 = (max(var_41, (arr_21 [i_3] [i_10] [i_10])));
            }
            var_42 = (min(var_42, (max(((var_3 ? (arr_2 [i_10]) : (arr_2 [i_3]))), var_14))));
            var_43 = (((-32615 + 2147483647) << (4288115889427691388 - 4288115889427691388)));
        }
        var_44 = (((~23418) ? ((((!(var_9 == var_6))))) : (((min(3012751687, (arr_17 [i_3] [i_3] [i_3] [8] [i_3] [i_3]))) | (arr_14 [i_3] [i_3] [i_3])))));
    }
    #pragma endscop
}
