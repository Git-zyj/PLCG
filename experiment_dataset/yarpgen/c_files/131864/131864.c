/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(!4)));
    var_14 = ((((max(-5477617779645750396, -83)) ^ var_11)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_15 = ((((((arr_2 [i_3 + 2] [i_3 - 1] [i_3 - 2]) ? (((arr_8 [i_3]) << (192 - 173))) : ((((!(arr_4 [i_0] [i_1] [i_2])))))))) || ((min((max((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0]))), (arr_1 [i_2]))))));
                            arr_10 [i_0] [i_1 + 1] &= ((-(arr_0 [i_3])));
                            var_16 = (max((arr_6 [i_3 - 1] [i_3 - 3] [i_1 + 1] [i_3 - 3]), (arr_8 [i_3])));
                            var_17 = -83;
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_13 [i_0] [i_0] [i_4] [i_4] = ((((min((arr_12 [1] [10] [i_1 + 1]), (arr_11 [i_1] [i_1] [i_1] [i_1])))) && ((((arr_11 [13] [i_0] [i_0] [i_0]) ^ (arr_12 [i_0] [i_0] [i_1]))))));
                    var_18 ^= (max(23, 0));
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_19 = (max(var_19, (arr_0 [i_5])));
                    var_20 = arr_8 [i_0];
                    var_21 = (min(var_21, ((((min((arr_15 [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1]), (arr_2 [i_1] [i_1] [i_1 - 1])))) ? (((arr_2 [i_0] [i_1 + 1] [i_1 - 1]) ? var_1 : 75)) : (((arr_2 [i_1] [8] [i_1 + 1]) ? (arr_2 [i_0] [i_1] [i_1 - 1]) : 33604))))));
                    var_22 -= (-(arr_4 [i_0] [i_1] [1]));
                }

                for (int i_6 = 1; i_6 < 12;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_23 -= (((((min((arr_21 [i_0] [i_1] [i_6 + 2] [i_7] [i_8]), (arr_6 [i_0] [i_1 + 1] [i_6 + 1] [i_8]))))) ? (((!(((-127 - 1) <= 24029))))) : 239));
                                var_24 = (min(var_24, (((((max(255, 38))) ? var_3 : ((((arr_4 [i_0] [i_0] [i_0]) >= (arr_15 [i_0] [i_1] [i_6] [i_7])))))))));
                                var_25 = ((((min(8092602809453995873, 33604))) ? (((arr_3 [i_7]) ^ (arr_3 [i_0]))) : (arr_3 [i_6 - 1])));
                                arr_22 [i_8] [i_1] [i_0] [i_1] [i_8] &= max(((max(-11, -11))), (min((min((arr_20 [6] [6] [i_6 - 1] [6] [13] [i_8]), 2982570184)), 75)));
                            }
                        }
                    }
                    var_26 = (((arr_2 [i_0] [i_1] [4]) ? ((((-1 + 2147483647) << (((-83 + 112) - 29))))) : (((arr_5 [i_1 - 1] [i_6 - 1] [3]) << (var_1 - 125)))));
                    var_27 -= (max((max(15734, (min((arr_18 [i_0] [i_1] [4] [i_1 - 1]), (arr_9 [i_0] [i_1 - 1] [i_6] [i_0] [i_0] [i_6]))))), (arr_1 [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
