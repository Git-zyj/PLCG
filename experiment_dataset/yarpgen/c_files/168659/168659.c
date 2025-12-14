/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_15;
    var_21 = (var_6 - 255);

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_22 = 0;
                    arr_10 [i_2] [i_1 - 1] = ((((min((arr_6 [9] [i_1 - 1] [i_2]), (arr_7 [i_0] [i_2])))) ? (arr_8 [i_0] [i_1 + 1] [i_2] [2]) : 255));
                    arr_11 [i_2] [i_2] [i_0] = var_6;
                }
            }
        }
        var_23 = ((min(255, 620384494)));

        for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
        {
            var_24 = ((~(min((min(-821665024, 1)), (((arr_6 [i_3] [i_0] [i_0]) ? var_2 : 0))))));
            var_25 ^= var_7;
            arr_15 [i_0] = ((((((((4 ? var_12 : 766643525))) ? 1 : ((((arr_1 [6]) || 8)))))) ? (arr_8 [i_0 - 1] [1] [1] [1]) : (((arr_5 [i_0 + 3] [i_3]) - 13075))));
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
        {
            var_26 = min(var_7, 20417);
            var_27 ^= ((-((min(239, (arr_5 [i_0 - 1] [i_0 + 3]))))));
            var_28 = (((arr_17 [i_0 - 1]) ? (arr_0 [i_4]) : (min((arr_9 [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0 + 1]), ((min(115711119, (arr_14 [i_0]))))))));
        }
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {
                        arr_27 [i_0 + 1] [i_5] [i_6] [11] = ((((((((arr_9 [i_0 + 3] [i_0] [i_0 + 2] [i_0 + 3]) ? var_9 : var_4))) ? 0 : 47719)) - var_16));

                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_29 = 0;
                            var_30 = ((63 & (arr_9 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_5 + 1])));
                        }

                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_31 = ((0 ? -10 : (((((16731 ? -15732 : 0))) ? -174 : 1))));
                            var_32 = (min(((-(arr_6 [i_5 - 1] [i_5 + 1] [i_5 - 1]))), -1));
                        }
                        var_33 = (max(var_33, var_0));
                    }
                }
            }
            arr_32 [14] = (min(var_6, (((arr_3 [i_5 + 1] [i_5]) & var_6))));
            var_34 = ((0 - ((min((arr_22 [i_0 - 1] [i_0] [i_5 + 1]), 1)))));
        }
        var_35 = (max(var_35, (((arr_7 [i_0 + 1] [i_0 + 1]) & (max((arr_7 [i_0 + 1] [i_0 - 1]), (arr_7 [i_0 + 2] [i_0 - 1])))))));
    }
    var_36 *= var_18;
    #pragma endscop
}
