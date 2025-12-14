/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = 2;

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_20 = (min(-1, ((~(11251 > 31)))));
            arr_5 [i_0] [i_1] = (((~var_15) << (((((-1174 + 2147483647) << (71 - 71))) - 2147482460))));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_21 += (~-11);

            for (int i_3 = 4; i_3 < 21;i_3 += 1)
            {
                var_22 = (0 / 11242);
                arr_13 [i_0] [i_0] [i_0] = ((~(max(-var_7, ((-1 ? var_17 : -1))))));
            }

            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_22 [i_4] = ((~((max(-62, 67)))));
                            var_23 *= ((!((max(0, -30543)))));
                        }
                    }
                }
                var_24 = (max(24, (~-2)));
            }
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                var_25 -= ((!(((~((min(-106, 233))))))));
                arr_25 [i_0] [i_2] [i_7] &= ((((60 ? (!16368) : 27)) & (((167 || (~-42))))));
                var_26 = (72 + 32767);
            }
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                var_27 = ((14848 ? 30553 : 88));
                var_28 *= ((((max(88, 60))) != ((min(32767, -1)))));
                var_29 = ((((((((-23 ? var_10 : 75))) ? ((~(-127 - 1))) : 1))) ? var_11 : ((((max(29, var_10))) / 41))));
            }
            var_30 |= ((-(max((~85), var_15))));
            var_31 = (max(var_31, (((-(!var_5))))));
        }
    }
    var_32 = (max(((max(var_4, var_10))), var_14));

    for (int i_9 = 1; i_9 < 17;i_9 += 1)
    {
        var_33 = ((-((((~-19177) < (17288 / var_8))))));
        var_34 = (((-117 / 103) || (1 == -1)));
        var_35 *= 30;
        var_36 = (~var_12);
    }
    var_37 = (~var_14);
    var_38 = (!var_18);
    #pragma endscop
}
