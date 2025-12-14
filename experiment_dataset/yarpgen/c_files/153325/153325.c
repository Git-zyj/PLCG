/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0] = var_15;
        var_19 -= ((((0 * ((min(var_8, 16383))))) >= (((((max(var_6, (arr_1 [3] [i_0])))) ? (7 && 993702351) : -var_3)))));
        arr_3 [i_0] = 65519;

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_20 = (((((3 ? var_18 : var_13))) * (((((var_4 ? (arr_0 [6] [i_1]) : var_1))) ? 2878981953 : var_3))));
            arr_7 [i_0] [i_1] = (min(1, ((18446744073709551615 ? 18531 : 7))));

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {

                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    arr_14 [i_3 + 2] [i_0] [i_1] [i_0] [i_0] = (!(((arr_11 [i_0 - 1] [i_1] [i_3 + 2]) && var_6)));
                    var_21 *= var_1;
                }
                var_22 |= (~var_11);
                var_23 = var_17;
                var_24 += (((((47003 ? var_14 : 47004))) ? ((((max(18532, 4294967295))) ? (((arr_4 [i_0 - 3] [i_0 - 3]) ^ var_0)) : 6136058419215320234)) : (max(19, ((18548 ? -610155514 : 109))))));
                var_25 = 13495650187254419876;
            }
            var_26 *= (min((min(1397555170647325024, -1747431139)), 16383));
            var_27 = (min(((-413668401 ? -826090347 : (var_17 < var_11))), 201326592));
        }
    }
    var_28 = ((((((!(((18446744073709551615 ? 347630105 : 1747431138))))))) >= (min((max(-9223372036854775802, var_1)), var_11))));
    #pragma endscop
}
