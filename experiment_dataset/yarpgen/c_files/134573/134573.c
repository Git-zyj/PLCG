/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (min((~32), (arr_6 [i_0] [i_1] [i_2] [i_2])));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_11 [i_3] [i_1] = (2 < 16678193274925358872);
                        arr_12 [i_3] [i_2] [i_0] [i_3] = 0;
                        var_18 = (min(var_18, ((!(!4294967295)))));
                        var_19 = (0 / 686713670);
                        var_20 = (!12616);
                    }
                    for (int i_4 = 1; i_4 < 15;i_4 += 1)
                    {
                        arr_17 [i_4] [i_4] [i_2] [10] [i_0] [0] &= ((((min(1, ((-(arr_8 [i_4 + 1] [i_2] [i_2] [16])))))) / (min(-16612, 560750930165760))));
                        arr_18 [i_0] [i_0] = (!0);
                        var_21 = ((!((min(((((-115 + 2147483647) << (6924877862559520554 - 6924877862559520554)))), (min(20, 12272540327904581633)))))));
                        var_22 += (127 ^ 2362036211);
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_23 = (min((arr_0 [i_5] [i_0]), (min((arr_9 [i_1]), 1))));
                        var_24 = -2663374016;
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_24 [i_2] [i_1] [i_1] [i_2] &= ((!(1 > 9983)));
                        arr_25 [i_0] [i_0] [i_6] [i_0] = 2013;
                    }
                    var_25 = 51201;
                }
            }
        }
    }
    var_26 += 127;
    var_27 = 0;
    #pragma endscop
}
