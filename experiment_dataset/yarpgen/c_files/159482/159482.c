/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((4843683016062986596 ? (max((~-5038998369739908581), ((((-9223372036854775807 - 1) >= 1))))) : var_2));
    var_11 = (min(var_11, ((var_5 && (((((max(-7479835865870147975, 61749))) ? (95 >= -4306261569449103896) : ((max(96, 160))))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 += min(((-4122757630224848419 >= (1 << var_9))), (((max(224, -4122757630224848416)) >= (var_2 && var_0))));
                    var_13 = ((((2551013431 ? 1 : 1))) ? ((min(((min(var_7, 159))), 65535))) : (((127 >= 71) ? -1 : (2534644330 && 1))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] [18] [18] = (~7295972676219401933);
                        arr_12 [i_0 - 1] [i_0] [21] [17] |= (((2080374784 & var_1) >= 3377699720527872));
                        var_14 = var_8;
                    }
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        var_15 = ((((((1 && 4261412864) ? -20650 : 63921))) && 7479835865870147974));
                        arr_15 [i_0] [i_0] [i_2] [i_4] [i_1] = (!7806107394656145049);
                        arr_16 [i_0 - 2] &= var_2;
                        var_16 = (((((var_7 >= -1) && (127 && 1))) && (152 && -644304287)));
                    }
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_17 = (~1603502468);
                        var_18 = (~1);
                        var_19 ^= (((max(-1, (min(var_8, 4848508794421587292))))) && (4676943955305076465 >= var_3));
                    }
                }
            }
        }
    }
    var_20 = -151619096;
    #pragma endscop
}
