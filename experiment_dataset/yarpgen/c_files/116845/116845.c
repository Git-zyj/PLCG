/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [12] |= (min(((var_8 - ((var_0 ? var_2 : (arr_0 [14]))))), (((arr_3 [i_0] [i_1]) | 1))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((var_7 ? ((((65535 > 32344) >= 1105563200))) : var_2));
                    var_11 = ((!((min(var_8, (arr_6 [i_1] [i_0]))))));
                    arr_9 [i_0] = (1 * 127);
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    var_12 = (min(var_12, ((((((arr_0 [i_3]) * var_3)) > 63550)))));
                    var_13 = ((((max(((-105 * (arr_7 [i_1] [i_1] [i_0]))), (!48)))) ? (arr_0 [i_0]) : -3047039697925107587));
                    var_14 = ((var_3 ? ((-((min(16243, var_3))))) : var_9));
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_0] = (min((arr_6 [15] [15]), var_2));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] = ((~(((!(arr_18 [i_0] [i_1] [i_0] [i_0] [i_6]))))));
                                arr_22 [i_0] [9] [i_0] [i_5] [i_0] = ((~((-127 ? (arr_10 [i_1]) : (arr_12 [i_0] [i_4])))));
                            }
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    var_15 &= -119;
                    var_16 = ((min((~6448248979175530326), -1)));
                    var_17 = (arr_11 [i_0] [i_1]);
                    var_18 ^= 1986;
                }
            }
        }
    }
    #pragma endscop
}
