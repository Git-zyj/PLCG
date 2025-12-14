/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (16451498368974138289 == 0);
    var_19 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = var_3;
        var_21 = (max(var_21, (1381997884 <= 2029928451)));
        var_22 &= (((-32767 - 1) ? 1265495951 : 32757));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_23 -= (-32758 & 1);
                    var_24 += (49143 == 49171);
                    arr_9 [i_0] [i_1] [i_1] [i_2] = (arr_7 [i_2] [i_1] [i_0] [i_0]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_25 = var_1;
        var_26 = (min(var_26, ((1 ? -1381997885 : 16381))));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_27 = var_8;

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            arr_23 [i_4] [i_6] [1] [i_4 - 1] [i_3] [i_3] [i_4] = 2147483647;
                            var_28 = (0 ? -263170135 : -15196);
                            var_29 &= var_0;
                            var_30 = 0;
                            arr_24 [i_4] [i_4] = 32765;
                        }
                        for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                        {
                            var_31 = ((+((((220 + 32756) <= (arr_10 [i_3]))))));
                            var_32 = (((max(1, ((0 >> (43470 - 43440))))) / 133));
                            var_33 = (~1995245704735413326);
                        }
                        for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                        {
                            var_34 = (max(var_34, (((-1097679127 + 2147483647) >> (65535 - 65512)))));
                            arr_31 [i_4] [i_4] [i_5] [i_6] [1] = 5475007385801998911;
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_35 = (1 && 16364);
                            var_36 ^= -1372527472;
                            var_37 -= (!1);
                            arr_35 [i_4] = ((~((((arr_17 [i_10]) > 4194304)))));
                            arr_36 [i_3] [i_4 - 1] [i_5] [10] [i_4] = 4027141398;
                        }
                        var_38 ^= ((0 ? -5576734666598765772 : 104));
                        var_39 -= (13239290370493363297 + -5576734666598765774);
                    }
                }
            }
        }
        var_40 = (max(1381997899, 1520139357));
        var_41 &= (-32760 + 4);
    }
    for (int i_11 = 3; i_11 < 10;i_11 += 1)
    {
        var_42 |= (31 || 16451498368974138284);
        var_43 = (65516 && 13239290370493363297);
    }
    #pragma endscop
}
