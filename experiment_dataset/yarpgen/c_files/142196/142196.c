/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1 - 1] [i_1] [i_0] = ((((-127 - 1) || (arr_5 [i_1 + 2] [i_1 + 1] [i_1 - 1]))) || ((max((arr_5 [i_1 + 3] [i_1 - 1] [i_1 + 1]), (arr_5 [i_1 - 1] [i_1 + 2] [i_1 - 1])))));
                            arr_10 [i_1] [i_1] [i_1] [i_1] = (arr_3 [i_1 + 1] [9] [i_2]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_20 *= ((((0 ? (arr_7 [i_1] [i_1] [i_5 + 1] [4]) : (arr_7 [i_0] [i_0] [i_5 - 1] [i_5 - 1])))) ? 119 : ((~(arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1]))));
                            var_21 = (max(var_21, (arr_8 [i_4 - 1] [i_4 - 1] [i_4 - 1])));
                            arr_18 [i_5] [i_5] [i_4] [i_5] = (((((((arr_6 [i_0]) == 12239110802042822686)) ? (~-121) : (arr_4 [i_5 - 1] [i_4] [i_1 + 2]))) << ((((~(arr_12 [i_4 - 1] [i_4 - 1] [i_1 - 1]))) + 13))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            arr_25 [i_0] [i_0] [i_7] [i_7] = ((!(arr_13 [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_0])));

                            for (int i_8 = 0; i_8 < 0;i_8 += 1)
                            {
                                var_22 |= (arr_8 [i_0] [i_1 + 3] [i_8]);
                                arr_29 [i_0] [i_8] [i_6] = (0 / 760827632);
                                var_23 = (((((126 << (255 - 246)))) >= ((-(arr_13 [i_8 + 1] [i_1 + 3] [i_0] [i_0])))));
                                var_24 = (max(var_24, ((((((~(arr_16 [i_8 + 1] [i_1 + 1] [i_1 + 1] [i_0])))) ? ((((arr_3 [1] [i_7] [i_1 + 3]) ? -4645477744241327026 : (arr_3 [i_7] [i_7] [i_1 + 2])))) : (arr_16 [i_7] [i_0] [i_1 + 2] [i_0]))))));
                            }
                        }
                    }
                }
                arr_30 [i_0] [i_0] = ((((((arr_14 [i_1 + 2] [i_1 - 1]) ? (arr_28 [12] [i_1 + 1]) : (arr_15 [i_0])))) ? (((arr_26 [12] [12] [i_1 + 1] [i_1 + 3] [i_1]) ? ((-(arr_28 [14] [i_1]))) : -2147483636)) : (arr_12 [i_0] [i_0] [i_0])));
            }
        }
    }
    var_25 = var_8;
    #pragma endscop
}
