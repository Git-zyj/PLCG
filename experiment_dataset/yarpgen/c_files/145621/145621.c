/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_6 >= ((~(var_9 + 0))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            arr_4 [i_0] [i_1 - 1] = (((((arr_0 [i_0 + 1] [i_1]) ? (arr_3 [i_0 + 1] [i_0 - 1]) : (((arr_2 [i_0 + 1] [i_0]) % 1)))) != var_5));
            arr_5 [i_0] = 1;
            var_11 ^= (max((var_1 + var_9), ((((arr_0 [7] [i_1 - 1]) && (arr_3 [i_0 + 1] [i_0 + 1]))))));
            var_12 = (max(var_12, var_9));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_13 = ((max((1 + var_4), -5747)));
            var_14 = (((((~(1 < var_2)))) ? (max(1, ((1 ? 1 : 1)))) : var_1));
        }
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            var_15 -= -25679;
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_16 = (max(var_16, (((((arr_0 [i_4 - 1] [i_0 - 1]) ^ var_8))))));
                            var_17 = -13170;
                        }
                    }
                }
            }
        }
        var_18 = ((+((var_0 ? (arr_9 [i_0 + 1] [i_0 + 1] [i_0]) : var_6))));
        arr_16 [i_0] = (!var_3);
        arr_17 [i_0] = ((((((min(var_0, 1))) ? ((max((arr_12 [i_0]), var_2))) : 1)) - (!1)));
    }
    for (int i_7 = 4; i_7 < 17;i_7 += 1) /* same iter space */
    {
        var_19 = (min((arr_18 [1]), ((1 ? 1 : (arr_18 [i_7 + 2])))));
        arr_21 [18] [8] = var_7;
    }
    for (int i_8 = 4; i_8 < 17;i_8 += 1) /* same iter space */
    {
        var_20 = ((1 ? (var_3 > var_0) : (((arr_20 [i_8]) & -var_3))));

        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            var_21 = (((max(1, 0))));

            /* vectorizable */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        {
                            var_22 = 1;
                            var_23 = (max(var_23, (((-(arr_30 [i_9] [i_8 + 3] [i_9] [i_11 - 2] [i_11 - 2]))))));
                            var_24 = (0 * 13905);
                        }
                    }
                }
                var_25 = (min(var_25, (((1 << (var_4 + 9377))))));
            }
        }
    }
    var_26 = var_4;
    var_27 = var_7;
    #pragma endscop
}
