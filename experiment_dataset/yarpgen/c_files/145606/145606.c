/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            var_19 = ((-var_0 ? (~var_9) : (12952 ^ 2147483643)));
            var_20 = (~var_13);
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_21 = (max((arr_3 [i_2] [i_0] [i_0]), ((-((170412530 & (arr_1 [i_2])))))));
            var_22 = ((((min(var_10, var_6)) & (min(-2654229563960795958, 9223372036854775807)))));
            arr_6 [i_0] [i_0] [14] = 511;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        var_23 = (arr_8 [i_4 - 1]);
                        arr_13 [i_3] [i_4] = (((arr_4 [i_4] [i_3] [i_0]) - (arr_5 [i_0] [i_4 - 1])));
                    }
                }
            }
            var_24 = ((var_1 && (((-(arr_3 [i_0] [14] [i_3]))))));
        }
        arr_14 [i_0] = (~4611686018426863616);
        var_25 = var_10;
    }
    for (int i_6 = 1; i_6 < 12;i_6 += 1)
    {
        arr_17 [i_6] = (min(((((arr_12 [i_6 + 2] [i_6 + 1] [i_6 + 1] [i_6 + 2]) == (arr_12 [i_6 + 2] [i_6 + 2] [i_6] [i_6 + 3])))), (((arr_12 [i_6 + 3] [i_6 + 3] [18] [i_6 + 2]) ? (arr_12 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1]) : var_1))));
        var_26 = ((+(max((~var_12), -6149))));
        arr_18 [i_6] = (2 + 1);
    }
    var_27 = var_14;
    #pragma endscop
}
