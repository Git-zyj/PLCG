/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (((arr_0 [i_0] [i_0]) ? 82523441 : 57017));
            var_15 = ((10670354301599703937 != (arr_0 [i_0] [i_0])));
            var_16 = (max(var_16, 1204871536));
            var_17 = (arr_4 [1]);
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                var_18 = (((arr_2 [i_3 + 1] [i_0]) + (arr_2 [i_3 + 1] [i_0])));
                var_19 = 1294407830;

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        var_20 = -1294407828;
                        var_21 = ((((2202 << (var_1 - 6682969862345904316))) << ((((((-1294407827 ? (-32767 - 1) : 62557)) + 32791)) - 13))));
                        var_22 -= (((arr_14 [i_0 - 2] [i_0 - 2] [i_2 + 2] [i_3 + 1] [i_3 + 1]) / -1));
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        var_23 = arr_13 [i_0 - 3] [i_0 - 3] [i_0] [i_0 - 3] [1] [i_0 - 2] [i_0 - 2];
                        var_24 ^= (~-8438872761620035817);
                    }
                    var_25 = ((-(arr_13 [i_2] [i_2 - 1] [i_2 - 1] [i_4] [i_4] [i_4] [i_4])));

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_26 = (arr_8 [i_2 - 1] [i_3 + 1] [i_0 - 3]);
                        var_27 |= (arr_17 [i_0] [i_2] [i_3] [i_4] [i_7]);
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        var_28 -= ((var_3 * (arr_21 [i_3 + 1] [7] [i_3 + 1] [i_3] [i_3] [i_2 - 2] [i_2])));
                        var_29 = (min(var_29, (0 || 1)));
                    }
                }
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_30 = (arr_2 [i_0] [i_0]);
                var_31 = arr_15 [i_0] [i_0 + 1] [i_2 + 1] [i_2 + 2] [i_9];
                var_32 = (((arr_12 [i_9] [i_9] [i_2 - 1] [i_2] [i_0] [i_0]) - ((((arr_17 [i_0 - 3] [i_0] [i_9] [i_0] [11]) & (arr_21 [i_9] [i_9] [i_9] [i_9] [i_2] [i_2 + 2] [i_0]))))));
            }
            var_33 = (arr_9 [i_0]);
            var_34 = -31;
        }

        /* vectorizable */
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            var_35 = (arr_24 [i_0] [i_0] [i_0 - 3]);
            arr_28 [i_0] = ((~(arr_2 [i_0 - 3] [i_0])));
        }
        var_36 = -10093;
        var_37 = ((0 ? 1294407826 : 10670354301599703957));
    }
    var_38 = (~var_8);
    var_39 = min((!var_13), 8191);
    var_40 = ((((min(-10093, var_10))) == var_4));
    var_41 = (min(var_41, (!1294407847)));
    #pragma endscop
}
