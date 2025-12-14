/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = 24;

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            var_15 = var_6;
            arr_7 [i_0] [i_1] [i_0] = ((((((arr_5 [3] [3] [i_0]) ? (arr_5 [i_0] [i_1] [i_0]) : (arr_4 [i_1 + 1] [i_1 + 1] [i_0]))) + (arr_1 [i_1 + 1] [i_1 + 2]))));
        }
        var_16 = (min(var_16, 1));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_11 [i_2] = (((arr_10 [i_2]) ? (!-32764) : ((min((arr_5 [i_2] [i_2] [i_2]), 34)))));

        for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
        {
            arr_15 [i_2] [i_2] = (max((((arr_8 [i_3]) ? (arr_3 [i_3]) : ((((arr_14 [i_3]) || 228))))), ((max((arr_13 [i_2] [i_2]), var_3)))));
            arr_16 [i_2] [i_2] = (min((arr_13 [i_2] [i_3]), ((((((57308 ? (arr_0 [i_2]) : var_9))) ? (arr_9 [5]) : 2782753479)))));
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
        {
            arr_21 [i_2] [6] [i_2] = ((max((arr_3 [i_4]), 252)));
            var_17 = (33 ? 198 : 63693);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
        {
            var_18 = ((((2147483647 ? 1 : (arr_3 [i_5]))) + 8226));

            for (int i_6 = 3; i_6 < 6;i_6 += 1)
            {
                arr_27 [i_5] [i_5] [i_2] = ((-2147483653 + 9223372036854775807) >> (7310326217940142307 - 7310326217940142251));
                var_19 = ((-(arr_8 [i_6 + 4])));
                var_20 = ((!(((var_4 % (arr_18 [i_2] [i_5] [i_2]))))));
                var_21 = 1502249523577000382;
                var_22 = (arr_6 [i_6 + 1] [i_6 - 2] [i_6 + 4]);
            }
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                var_23 ^= 76;
                var_24 ^= (((arr_5 [8] [8] [i_7]) ? (arr_5 [i_7] [i_5] [i_7]) : (arr_5 [i_5] [12] [i_7])));
            }
        }
        arr_30 [i_2] [i_2] = ((!((((((1 ? 26 : 6915848918799827004))) ? ((((arr_19 [i_2]) ? var_6 : 199))) : 131170398750412254)))));
        var_25 = (((((min(63, 3303124282738944980)))) <= ((((max(1728187, 102))) ? (arr_22 [i_2] [i_2]) : (arr_29 [i_2] [i_2] [i_2] [i_2])))));
    }
    var_26 = ((((((((-680 ? var_1 : var_8))) ? (min(5060671697112599754, -25087)) : (((183 ? 55763 : var_11)))))) ? ((var_11 ? var_9 : (min(55762, var_0)))) : (((((1932037484879788247 ? var_10 : -866075092))) + (~var_13)))));
    #pragma endscop
}
