/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((~((max(var_17, var_13)))));
    var_21 = (!((max(136, (min(0, var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [10] [10] [10] |= var_5;

                for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    var_22 ^= 8191;

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        arr_10 [i_0] [i_3] &= (arr_9 [i_0] [i_2] [i_2] [i_3] [i_3]);

                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            var_23 = 303554029;
                            arr_13 [9] [9] [i_0] [i_3] = 54847;
                            arr_14 [3] [i_0] [3] [i_3] [13] [8] = var_14;
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            arr_17 [i_0] [i_0] [i_3] [i_3] = var_17;
                            var_24 = (min(var_24, (arr_2 [14] [14])));
                            var_25 = (arr_8 [i_0] [i_0] [i_3] [i_5]);
                        }
                    }
                    for (int i_6 = 3; i_6 < 22;i_6 += 1)
                    {
                        arr_20 [1] [i_0] [i_0] = ((((min(var_9, (arr_15 [i_6 + 1] [i_6] [i_2] [i_1] [i_1] [i_0 - 1])))) ? (~-3572742682788990149) : (~819)));
                        var_26 |= var_14;
                        arr_21 [i_6] [i_0] [i_0] [i_0] = (min(((min((arr_3 [i_0] [i_0]), 8191))), var_11));
                        arr_22 [i_0] [i_2] [i_6] = (((~20) ? (min((~var_8), (~var_10))) : ((((min(576475233, (arr_4 [i_0] [i_0] [i_0]))) ^ (arr_12 [i_6] [i_2] [i_6] [i_2] [i_6]))))));
                        var_27 += (((var_13 ^ var_7) * ((-(arr_12 [6] [i_6 + 2] [i_6 + 1] [i_6 + 1] [i_6 + 1])))));
                    }
                }
                for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                {
                    var_28 = (max(var_28, (((((arr_25 [i_0 - 2] [i_1] [i_1] [i_1]) ? var_9 : var_13))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                arr_31 [i_0] [i_1] [i_7] [4] [i_9] [i_8] [i_9] |= (((((arr_11 [i_0] [i_1] [i_7] [i_7] [i_8] [3]) - (arr_29 [i_0] [18] [i_7] [i_8] [i_7] [i_8] [i_8]))) << ((((-var_6 ? -29261 : (((arr_27 [i_8] [i_8] [i_0] [i_0] [i_0]) ? (arr_7 [i_9] [20] [i_7] [i_9]) : 1016)))) - 18446744073709522345))));
                                var_29 -= (var_6 != var_15);
                                var_30 = 1612345848;
                            }
                        }
                    }
                }
                var_31 += max(0, ((min((arr_9 [i_0 - 1] [i_1 + 1] [i_1 - 1] [i_0 - 3] [2]), ((min(var_19, 64519)))))));
            }
        }
    }
    #pragma endscop
}
