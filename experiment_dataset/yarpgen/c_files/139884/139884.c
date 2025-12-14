/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_6 ? (((2147483647 <= var_9) ? var_3 : ((var_6 ? var_5 : 590213086)))) : ((var_11 ? ((var_10 ? var_7 : 3704754209)) : 3704754209))));
    var_13 = var_1;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_14 = (((-1643456842 ? var_4 : 3704754182)));
            arr_4 [i_1] = ((3704754200 | (~18446744073709551615)));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_9 [i_0] [20] = (min(((1136956099 ? 590213095 : 590213092)), ((3704754200 ? 6060 : 590213117))));
            var_15 = ((((-1 + 9223372036854775807) >> (var_8 + 1709022117))));
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    var_16 = (((((var_6 & var_6) ? ((((var_0 + 2147483647) << var_6))) : ((-123 ? 1 : 3126202361))))) | ((-1 ? 3704754179 : 2521610377541943210)));
                    var_17 = (((((1168764934 < 3704754209) || -2954144244310472948)) && (((-1 ? 1168764935 : 3704754210)))));
                }
            }
        }
        var_18 = ((((1023 >= var_7) ? ((2923866431 ? 1168764934 : 590213096)) : var_7)));
    }
    #pragma endscop
}
