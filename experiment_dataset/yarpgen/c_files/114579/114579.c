/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max((max(var_1, (min(var_15, var_14)))), (max((max(24625007, var_2)), var_4)));
    var_18 = var_13;

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_19 = (max(var_19, ((min(((max((arr_3 [i_0 - 1]), var_7))), (max((arr_2 [i_0 - 2]), -24625007)))))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_8 [17] [i_1] = (min((min((arr_2 [i_0 - 3]), 24625007)), (max(((min(var_5, 0))), (max(var_10, 21193))))));
            var_20 = (max((max(var_1, (arr_5 [i_0 - 3] [i_0] [i_0 + 1]))), ((max((arr_5 [i_0 - 3] [15] [i_0 + 1]), (arr_1 [i_0] [i_0 + 1]))))));
            var_21 = max((min((max((arr_1 [14] [14]), var_15)), (arr_6 [i_0 + 1] [i_0 - 3] [i_0 + 1]))), ((min((arr_4 [i_0 + 1] [i_0 - 3]), var_3))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_22 = 29462;

            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                var_23 = (min(var_23, 548852034));
                arr_13 [i_0] [i_0] = 65513;
                var_24 = 24624991;
                var_25 = 51449;

                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    var_26 = 7;
                    var_27 = (min(var_27, 2147483647));
                    arr_17 [i_0] [i_0] [15] [i_0] = 182;
                }
                for (int i_5 = 3; i_5 < 18;i_5 += 1)
                {
                    var_28 = (max(var_28, -30432));
                    var_29 = 14080;
                    arr_20 [i_3] [i_5 - 1] = 30791;
                }
                for (int i_6 = 3; i_6 < 18;i_6 += 1)
                {
                    arr_25 [i_0] [5] [i_3] [i_6] = 2147483647;

                    for (int i_7 = 4; i_7 < 17;i_7 += 1)
                    {
                        arr_28 [i_6] = 215;
                        var_30 = (max(var_30, 3));
                    }
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_31 = 33777;
                        arr_31 [i_2] [i_2] [i_6] [i_8] = -29098;
                    }

                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        arr_36 [i_0 - 2] [i_6] [i_3] [i_6 - 1] [i_9] = 42;
                        var_32 = 250;
                    }
                    for (int i_10 = 3; i_10 < 16;i_10 += 1)
                    {
                        arr_41 [i_2] [i_2] [i_2] [i_6] [i_2] = -24625018;
                        var_33 = -30786;
                    }
                }
            }
        }
        var_34 *= (max(((min((max(18096, (arr_15 [i_0 - 2] [i_0] [i_0] [i_0 - 3] [i_0 - 3]))), ((min(250, (arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [14]))))))), (max((max(24625009, 29274)), (max(var_2, (arr_40 [i_0] [i_0 - 1] [6] [i_0] [i_0] [i_0] [i_0])))))));
    }
    var_35 = max(var_15, (min(var_8, var_12)));
    #pragma endscop
}
