/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_10 ? ((-30999 ^ ((10601 ? 250 : var_7)))) : (!-10601)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_13 &= (((arr_4 [i_1 + 1] [i_1]) >= (var_1 || var_5)));
                    var_14 += (((arr_3 [i_1]) | 30999));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [i_1] [i_1 - 2] [9] [i_4] = var_6;
                            var_15 = (min(var_15, (((var_2 ? -30999 : ((max((arr_5 [i_1]), 1))))))));
                            var_16 = ((~((((30999 ^ (arr_11 [i_0] [i_1] [i_3] [i_0] [i_1] [i_4])))))));
                        }
                    }
                }
                arr_15 [i_0] = ((((((arr_8 [i_0]) ? (arr_8 [i_0]) : (arr_8 [i_0])))) ? ((30999 ? -11578 : (arr_8 [i_0]))) : ((-(arr_8 [i_0])))));
                var_17 ^= -0;
            }
        }
    }
    var_18 = (-var_5 - var_7);
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 16;i_6 += 1)
        {
            {
                var_19 = (((arr_20 [i_6] [i_6]) ? ((10579 * (arr_19 [i_5 + 1] [i_6] [1]))) : 10601));
                arr_22 [i_6] = var_7;
                arr_23 [i_5 - 2] [i_6] = 4958190017654122601;
                var_20 = (max(var_20, (((!(((var_10 ? 10579 : var_8))))))));
            }
        }
    }
    var_21 += (((((-(19262 || 1416069317)))) ? var_2 : (((((1416069320 ? var_5 : var_9)) + -10579)))));
    #pragma endscop
}
