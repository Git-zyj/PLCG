/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((max(((((max(var_5, var_14))) >> (var_17 - 1345009471))), (((((((-60 + 2147483647) >> 8))) && var_11))))))));
    var_21 = (min(var_21, ((min((((~(~-9)))), 482517809)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_22 = var_16;
        var_23 = (min(var_23, (arr_1 [21])));
        var_24 = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_6 [i_0] = 343974505;
            var_25 = (var_13 & (((arr_4 [i_0] [i_0] [i_0]) & (arr_3 [i_0] [i_0]))));
            arr_7 [i_0] = (((((arr_1 [i_1]) - 3318152476)) * (arr_3 [10] [i_0])));
        }

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_26 = (((((-30566 == (arr_0 [i_2])))) != 39294));

            for (int i_3 = 1; i_3 < 23;i_3 += 1)
            {
                arr_13 [i_0] [i_2] = ((5885237373327619688 ? 8210636670113485880 : 3303689817));
                var_27 = (min(var_27, (~var_4)));
                arr_14 [i_0] [i_0] [i_0] = ((arr_2 [i_0] [i_3]) ? (arr_2 [i_0] [i_3]) : var_6);

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_28 = ((~(arr_5 [i_3 - 1] [i_0] [i_3 - 1])));
                    var_29 = ((arr_16 [i_0] [i_2] [i_3 - 1] [i_4]) ? (arr_16 [i_0] [i_0] [i_3 - 1] [i_4]) : (arr_16 [i_0] [i_2] [i_3 - 1] [i_2]));

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_30 = (min(var_30, (((arr_16 [i_5] [i_4] [i_2] [i_0]) / 38518))));
                        var_31 = (((arr_16 [i_3 + 1] [i_2] [i_2] [i_3 + 1]) ? ((var_12 ? 49803 : var_14)) : (arr_17 [i_3 - 1] [i_3] [i_3 + 1] [i_3] [i_3 + 1])));
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        arr_23 [i_6] [i_0] [i_0] [i_2] [i_0] = ((-((-(arr_0 [i_4])))));
                        var_32 = (((arr_22 [i_0] [i_2] [i_3] [i_4] [i_0]) > var_3));
                        var_33 = (var_0 && var_19);
                        var_34 = var_11;
                    }
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        arr_26 [i_2] [i_2] [i_0] [i_2] = ((arr_15 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_0]) * 1533);
                        var_35 = (min(var_35, -var_2));
                        var_36 += 5885237373327619688;
                        var_37 = (arr_8 [i_0]);
                        var_38 = (min(var_38, (arr_8 [i_4])));
                    }
                    var_39 = ((60247 ? 3635206053 : 4433230883192832));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        var_40 = ((464984429 ^ (arr_24 [i_8] [i_8] [i_8] [i_8] [5])));
        var_41 = (arr_17 [i_8] [i_8] [i_8] [i_8] [i_8]);
    }
    /* vectorizable */
    for (int i_9 = 3; i_9 < 10;i_9 += 1)
    {
        var_42 = (((arr_25 [i_9] [i_9 - 3] [i_9 - 1] [2] [i_9 + 1]) || -9));
        var_43 = arr_9 [i_9];
    }
    #pragma endscop
}
