/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_1 * ((var_2 ? 255 : 246))))) - ((-5709535680919212012 ? (max(var_13, -5709535680919212012)) : (min(var_8, -5709535680919211998)))));
    var_17 = ((var_13 ? (((((5709535680919212012 ? var_3 : var_12))) & (5709535680919212012 / 7431826237019552601))) : ((((((var_6 ? -5709535680919212011 : 8388607))) ? (1 % 116) : var_9)))));
    var_18 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = 34;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 -= (~((((7431826237019552601 > (arr_2 [1] [i_2]))) ? ((-5709535680919212039 ? 244 : (arr_1 [11] [i_1]))) : (1240685231 - 1))));
                                var_21 = (max(var_21, (arr_3 [i_1] [i_2] [i_2])));
                                var_22 = (max(var_22, 1));
                            }
                        }
                    }
                }
                var_23 = ((0 & ((((1 ? (arr_5 [i_0]) : (arr_9 [i_0] [i_0] [i_1] [1]))) - 4026531840))));
                arr_13 [i_0] [i_1] = ((((1 != (((arr_12 [i_0] [i_1] [i_1] [i_1]) * 4026531840)))) ? (((((5709535680919212012 ? 1 : 217))) ? ((((arr_3 [i_1] [i_1] [i_0]) ? 25459 : -5709535680919212012))) : ((-16970 ? 424062715 : 10045713832951894500)))) : (arr_10 [i_0] [15] [i_0] [i_1] [i_1])));
            }
        }
    }
    var_24 = (((((((((var_15 + 2147483647) >> (244 - 214)))) ? ((-2638630908230105726 ? var_14 : var_10)) : (var_10 == 5214705444420119932)))) ? var_11 : -var_2));
    #pragma endscop
}
