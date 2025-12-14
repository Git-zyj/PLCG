/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(0, 4));
    var_21 = (max((~var_0), var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((-(arr_1 [i_0] [i_0])));
        var_22 = (arr_0 [i_0] [i_0]);
        var_23 *= var_19;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    {
                        var_24 = ((4 ? (arr_12 [1] [i_4 - 3] [i_1] [i_1]) : (arr_12 [i_1] [i_4 - 3] [i_4 - 3] [i_4 + 2])));
                        var_25 = (((arr_14 [i_1] [i_2] [i_1] [i_1]) - -1));
                    }
                }
            }
            var_26 += (((arr_4 [i_1] [i_1]) ? 65526 : (arr_16 [i_1])));
        }
        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            var_27 = 1;
            var_28 = (max(var_28, ((((arr_16 [i_1]) & (arr_16 [i_1]))))));
            arr_19 [i_1] [i_1] [i_5 - 2] &= 4;
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_29 = (min(var_29, 65526));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        {
                            var_30 = 2147483647;
                            var_31 = (max(var_31, ((((arr_7 [i_1] [i_8]) ? (arr_7 [i_7] [i_1]) : (arr_7 [i_1] [i_1]))))));
                            arr_30 [i_1] [i_6] [i_6] [i_7] [i_8] [i_9] = (((((6 ? 65526 : (arr_16 [i_6])))) ? 0 : ((~(arr_26 [i_6] [i_6] [i_7])))));
                            var_32 = ((~(arr_25 [i_7] [i_9])));
                        }
                    }
                }
            }
        }
        var_33 = (arr_26 [i_1] [i_1] [18]);
    }
    for (int i_10 = 1; i_10 < 23;i_10 += 1)
    {
        var_34 *= ((((((max(var_4, 1778178435)) & (((1778178435 ? -21748 : 4)))))) ? (min((arr_33 [8]), (arr_33 [16]))) : ((((-9223372036854775807 - 1) ^ 0)))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                {
                    var_35 = (min(var_35, (arr_36 [i_11])));
                    var_36 = (-127 - 1);
                    var_37 = (min(((((((arr_32 [i_10]) || var_16)) ? ((1 ? -634134014 : -32743)) : -26918))), (min(-22, 2621598175))));
                }
            }
        }
        arr_42 [i_10] = (arr_34 [i_10] [i_10 + 1] [i_10 + 1]);
    }
    var_38 = ((~(((max(1, 0))))));
    #pragma endscop
}
