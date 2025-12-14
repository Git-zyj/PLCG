/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((!var_11) ? ((18446744073709551615 ? 0 : 13)) : ((0 ? 18446744073709551602 : var_3))))) ? var_5 : -var_7));
    var_19 = (((((-11813 ? (var_2 || var_13) : -var_0))) ? 4387113382468535571 : var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((((min(0, -795429235))) ? 8618 : ((var_7 ? 244 : var_6)))))));
                var_21 = ((12288 ? var_3 : 84));
                var_22 = (max(var_22, ((((((max(12288, 18446744073709551611)) ^ 12672)) > (((53248 ? 65535 : (var_10 > 1)))))))));
            }
        }
    }
    var_23 = (((((-240724410 ? var_10 : 53248))) ? (((var_15 > (!-1156584713)))) : ((var_1 ? var_11 : (max(-240724402, -79))))));
    var_24 = (max((((!(((48057 ? -1156584713 : var_15)))))), (var_12 + 12288)));
    #pragma endscop
}
