/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] = ((7615 ? (min(((-7613 ? -1567258633 : 134)), ((128 ? var_14 : var_14)))) : (arr_2 [i_0])));

        for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_19 *= ((((min((var_6 && -690275369), (max(var_10, (arr_11 [i_0] [i_0] [i_1 + 1] [i_2] [i_3] [i_4 - 1] [i_4 + 1])))))) && (!14)));
                            arr_13 [i_1] [i_1] = 254;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        var_20 = var_15;

                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_21 = (arr_5 [i_0] [i_0]);
                            var_22 |= ((~((((3533761132 && (arr_10 [i_5]))) ? (arr_11 [i_0] [i_5 + 2] [i_0] [i_6] [i_1 + 1] [i_1 + 3] [i_6]) : (!-7615)))));
                            var_23 *= (((arr_22 [i_7] [i_0] [i_6] [i_5 + 2] [i_1] [i_0] [i_0]) ? (max((arr_11 [i_0] [i_1 - 1] [i_5 + 3] [i_6] [i_7] [i_6] [i_1]), 109)) : (((((min(11109, 69))) && (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                            arr_25 [i_0] [i_1] [i_5 - 1] [i_6] [i_7] = (min(((!((min(1269456492, var_14))))), ((!(((6 << (18005 - 18002))))))));
                        }
                        var_24 += ((((min((((arr_7 [i_5]) * 0)), (arr_5 [i_0] [i_1 + 2])))) && ((min(1170430434, ((149 >> (var_4 + 987716273))))))));
                    }
                }
            }
            arr_26 [i_1] [i_0] [i_1] = (min((max(((0 ? 21796 : var_12)), -1385439620)), (arr_14 [i_0] [i_0] [i_0])));
            arr_27 [i_0] [i_0] |= 2;
        }
        for (int i_8 = 1; i_8 < 22;i_8 += 1) /* same iter space */
        {
            var_25 = (max(var_25, ((max(((((max(var_3, (arr_11 [i_0] [i_8 + 2] [i_0] [i_0] [i_8 + 2] [i_8] [i_0])))) * (max(var_5, (arr_18 [i_0]))))), (((((var_15 ? 22 : -309710336)) > (!2552)))))))));
            arr_31 [i_0] [i_8 + 3] = (min(((1567258632 ? (max(15656, var_2)) : 690275346)), var_13));
        }
    }
    var_26 += var_7;
    var_27 = (max(var_27, ((min((((~((var_3 ? var_18 : 28))))), 4294967295)))));
    var_28 = (max((((((min(23, var_0))) && var_12))), (~var_15)));
    #pragma endscop
}
