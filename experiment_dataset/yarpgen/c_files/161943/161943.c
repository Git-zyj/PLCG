/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((((2301579532 ? ((217 ? var_7 : -16)) : 153))), var_14));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_21 -= (((max((min(var_15, var_5)), ((((arr_1 [i_0]) ? 3221225472 : (arr_2 [14])))))) >= ((((arr_1 [i_0]) ? var_7 : 89)))));
                    var_22 = (max(var_22, ((min((arr_5 [i_1] [i_1 - 3] [i_1 - 3] [i_1 - 3]), 238)))));
                    var_23 = var_15;

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_24 = 4186329731;
                        var_25 = (((5 ^ 4026131844) == ((((((arr_6 [i_0]) ? var_9 : 4088)) | 249)))));
                        var_26 = (arr_0 [i_1 - 1] [i_1 - 1]);
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_27 = 5423071199937269614;

                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            arr_15 [i_0] = (arr_2 [i_0]);
                            var_28 = (min(var_28, (((!(((var_15 ? 5 : (arr_2 [i_4])))))))));
                            var_29 ^= var_8;
                            var_30 = (arr_6 [i_0]);
                            var_31 = var_19;
                        }
                        var_32 = (max(var_32, (~268835454)));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_33 = (((2368141289 * ((153 ? var_16 : 3975874925727748357)))));
                                var_34 = (((((((((arr_4 [i_0] [i_2]) ? var_11 : 4))) ? ((((arr_5 [i_7] [i_7] [i_2] [i_2]) ? var_13 : var_13))) : (max(var_0, var_19))))) ? (!6) : 0));
                                var_35 ^= (arr_13 [i_0] [i_1 - 2] [10] [18] [i_7]);
                                var_36 = (min(var_36, -2347219125973689653));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
