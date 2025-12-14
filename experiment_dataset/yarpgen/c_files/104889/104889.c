/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = min(((-(max(4294967291, (arr_1 [i_0]))))), 0);
                var_15 = (arr_0 [i_0]);
                arr_4 [i_1] [i_1] = ((min((arr_3 [i_1]), ((min((arr_2 [i_0]), (arr_2 [i_1])))))));
                var_16 = ((min((((var_0 ? 0 : var_5)), ((4294967281 ? (arr_3 [i_1]) : 4294967295))))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_17 = (arr_6 [i_2]);
        arr_7 [1] &= (!27951);
        var_18 = ((!((!(arr_6 [i_2])))));
    }
    for (int i_3 = 3; i_3 < 20;i_3 += 1)
    {
        arr_10 [13] = min((arr_9 [i_3]), (((!4) ? (!var_2) : (arr_9 [i_3]))));
        arr_11 [i_3] = ((-(arr_9 [i_3])));
        arr_12 [i_3 - 1] = (min(0, 18));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    {
                        var_19 = ((((min((arr_8 [i_4] [i_5]), (arr_9 [i_6])))) ? (~var_5) : ((((min(72733170, (arr_19 [i_6 - 1] [i_4] [i_4] [4])))) ? (((~(arr_17 [i_4] [i_6])))) : (max(3628223510, 4294967271))))));
                        var_20 = (min((((~(~var_12)))), ((5743835474026843943 ? (~18446744073709551610) : var_0))));
                        var_21 = (max(var_21, ((min(7051218433518792144, 5)))));
                        arr_21 [i_3] [i_3] [i_5] [i_4] = var_8;

                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            arr_24 [i_6] [i_6] [i_7] [i_6] [i_4] [i_5] = -9026470072792970708;
                            arr_25 [i_3] [i_4] [i_5] [i_4] [i_3] = (arr_17 [i_4] [1]);
                        }
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            arr_28 [i_3] [i_4] [i_4] [i_5] [i_4] [21] [17] = (arr_9 [i_3]);
                            arr_29 [i_4] [i_4] [i_5] [i_4] [i_4] = (min(18446744073709551610, (((!(arr_8 [i_5 + 2] [i_3 - 3]))))));
                            var_22 = (min((arr_16 [0] [0]), ((!((min(4294967290, 255)))))));
                        }
                    }
                }
            }
        }
    }
    var_23 = (max(var_23, ((max((((var_0 ? var_6 : 6216213665872359803))), (((~(min(var_1, var_5))))))))));
    #pragma endscop
}
