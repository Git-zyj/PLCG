/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-22892 - (!24331)));

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_21 = (min(var_21, (((-8832918789434497364 ? 24360 : -2958544839)))));
        arr_3 [i_0] = 1;
        var_22 = -85037838;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        var_23 = (max(var_23, 3099868860881364946));
                        var_24 = (((-((min(1, 22))))));
                        var_25 = 14;
                        arr_16 [i_1] [18] [i_3] [i_3] [19] [i_4] = var_12;
                        arr_17 [i_1] [i_2 - 1] [20] = arr_15 [i_1] [i_1] [1];
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            arr_21 [i_1] [i_1] [i_5] &= var_16;
            arr_22 [6] [i_5] = ((((max(4294967295, (arr_15 [i_1] [i_1] [i_1])))) ? 154 : (min(763625921, 634481831))));
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_26 = 0;
                            arr_30 [i_8] [i_1] = (1135415742 - 85037838);
                            var_27 += 144114913197948928;
                        }
                    }
                }
            }
        }
        for (int i_9 = 2; i_9 < 20;i_9 += 1)
        {
            var_28 = ((34 ? 1075385453 : 4764627351454547046));
            arr_33 [i_1] [i_9 + 2] [i_9] &= (((min(((7264 ? 1543242351 : 0)), ((min(150, var_6))))) / 48030));
        }
        var_29 = (min(var_29, (((var_3 >= (arr_26 [9] [9] [i_1] [9]))))));
        var_30 = 1;
    }
    var_31 += (min(3946693106, 168594542));
    #pragma endscop
}
