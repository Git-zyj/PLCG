/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_15 != (((82 != ((max(57, var_0))))))));

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        var_19 ^= var_16;
        var_20 -= ((-(((((-92 ? 92 : var_11))) ? var_12 : var_4))));
        arr_4 [i_0] = (!var_10);
        var_21 = (((!(((var_4 ? var_10 : var_12))))) ? var_6 : var_16);

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_22 = 17183940356073874738;
            var_23 = (~var_5);
            arr_8 [i_0] [8] = (((((var_1 ? ((var_3 ? var_10 : var_16)) : (((3189 ? var_2 : 23)))))) ? ((((!65519) >> ((((var_12 ? var_3 : 39)) - 13766))))) : 9223372036854775807));
            var_24 = (((~1262803717635676870) ? (((-var_13 + 2147483647) << (((var_5 | 1262803717635676893) - 1262803717635676927)))) : (((!(1856498781118296427 > -99))))));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            arr_12 [i_0] [i_2] = ((!(((var_2 ? 228 : var_11)))));
            var_25 = ((6583762142678949118 ? 10850228913018525107 : 7596515160691026491));
            var_26 = 7;
            var_27 = (50698 == var_12);
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_28 = (max(var_8, ((var_12 ? 15743639907045414654 : ((7596515160691026493 << (2881713238173907315 - 2881713238173907311)))))));
        var_29 = 245;
    }
    #pragma endscop
}
