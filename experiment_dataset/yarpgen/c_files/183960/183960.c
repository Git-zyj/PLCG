/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] = ((min((((arr_0 [i_0]) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))), 576320014815068160)));
                                var_19 = var_15;
                            }
                        }
                    }
                    var_20 ^= ((-576320014815068161 != (arr_9 [i_0] [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    var_21 = (((((min(576320014815068158, var_7))) ? (max(var_8, var_4)) : ((min(var_17, 576320014815068160))))));
    var_22 = (((var_10 ? ((var_3 ? var_12 : var_18) : -56118))));
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                {
                    var_23 *= (((arr_21 [i_5] [i_5 + 3] [i_7 + 2] [i_7 + 2]) ? (arr_21 [i_5] [i_5 + 2] [i_7 + 2] [i_5 + 2]) : (((arr_21 [i_5] [i_5 + 3] [i_7 - 1] [i_7 - 1]) ? -576320014815068161 : (arr_21 [i_5] [i_5 + 4] [i_7 + 3] [i_5])))));
                    var_24 = (((arr_15 [i_5]) ? -576320014815068161 : -576320014815068159));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_25 = (!-576320014815068170);
                                arr_29 [i_5] [i_7] [i_5] [i_7] [i_5] = (arr_25 [i_8] [i_8] [i_7] [i_8] [i_8] [i_8] [i_8]);
                                var_26 = (-32755 >= 32761);
                                var_27 &= (arr_20 [i_5] [i_5] [i_5] [i_9 - 2]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
