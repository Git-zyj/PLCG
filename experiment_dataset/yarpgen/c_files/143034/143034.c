/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((55107 <= var_2) ? (((!(var_11 / -1136323772)))) : var_9));
    var_17 = (max((min((min(83, 1695111521)), 0)), 32753));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((max(var_2, 4294967295)))));
                arr_5 [i_0] = (max(((var_7 ? ((min(224, var_8))) : ((var_6 ? -41 : var_7)))), ((-(9223372036854775807 > 14)))));
                arr_6 [i_0] = -32733;

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_10 [i_0] = ((((18335 ? -32755 : 2290263222)) - ((max(var_9, 65535)))));

                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        var_19 *= max(((((((max(32742, 1)))) <= 2004704074))), (max(var_14, (var_2 / var_1))));
                        arr_14 [i_0] [i_1] [i_0] = (((268435455 >= 124) + ((min(var_10, var_6)))));
                        arr_15 [i_0] [i_0] = 2290263222;
                    }
                }
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    var_20 &= ((((max(((max(var_1, var_11))), (min(0, 2290263203))))) ? ((((((min(91, var_6)))) <= ((-3714 ? var_8 : var_5))))) : (!var_9)));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] = ((1028437842955638640 ? 174 : 0));
                                arr_23 [1] [i_1] [i_4] [i_5] [i_0] = ((((max((min(10424088463358438853, 32732)), 1081328049))) ? var_2 : 42474));
                                var_21 = ((((min(4294967295, -1))) ? 27 : ((min(var_1, var_14)))));
                                var_22 = (~1);
                            }
                        }
                    }
                    var_23 -= (~var_5);
                    arr_24 [i_0] [i_0] [i_4] [i_4] = 0;
                }
            }
        }
    }
    #pragma endscop
}
