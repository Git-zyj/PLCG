/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    var_21 = ((((max(-1089077273, 2964701035))) + (var_15 - 255)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = var_11;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_22 = (arr_0 [i_0]);
            var_23 = (max(var_23, (~64)));
            var_24 = ((191 || (((var_12 ? var_7 : 67)))));
            var_25 = (((arr_4 [i_0] [i_1]) ? var_10 : (arr_1 [i_1])));
            var_26 += ((-16646144 ? ((((191 && (arr_3 [i_1]))))) : (var_4 * -5824909397184276025)));
        }
        for (int i_2 = 3; i_2 < 19;i_2 += 1) /* same iter space */
        {
            arr_8 [i_2] [i_2] [2] = 182;
            var_27 += ((!((!(arr_5 [0] [0])))));

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                var_28 = (max(var_28, ((((arr_1 [i_2 + 1]) ? (arr_1 [i_2 - 3]) : 182)))));
                var_29 |= ((213 ? 4057405040 : 192));
            }
        }
        for (int i_4 = 3; i_4 < 19;i_4 += 1) /* same iter space */
        {
            arr_16 [14] = (((!var_8) & (arr_9 [i_4] [i_0])));
            arr_17 [0] = (((arr_7 [i_4 - 2] [i_4 + 1] [i_4]) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_0])));
            var_30 = ((~(!var_4)));
        }
        var_31 += (0 - 0);
        var_32 = var_7;
        var_33 = ((5824909397184276025 * 67108800) ? (arr_9 [i_0] [i_0]) : (arr_4 [i_0] [i_0]));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_20 [i_5] [i_5] = var_18;

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_34 |= (min((min((arr_18 [i_5]), ((-(arr_21 [i_5] [i_5]))))), 222));
            arr_23 [i_6] = (((((4294967295 ? ((var_17 ? var_19 : 1989442541)) : (max((arr_19 [12]), 4204534759))))) ? ((183 ? 3961656896 : 2147483647)) : (((arr_19 [i_5]) ? var_9 : (arr_22 [19] [i_6] [i_6])))));
        }
        for (int i_7 = 2; i_7 < 21;i_7 += 1)
        {
            var_35 = (~(min(251, ((var_3 ? var_12 : 136)))));
            var_36 = ((((arr_21 [i_5] [i_7 + 1]) ? var_17 : (arr_21 [i_7] [i_7 + 1]))));
        }
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            var_37 = (max(var_37, 90432541));
            var_38 = ((~(max(128, var_11))));
        }
        var_39 += ((!((!(arr_19 [i_5])))));
    }
    #pragma endscop
}
