/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((-(~1)));
    var_11 = (((var_8 / (~var_4))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_11 [i_4] [i_1] [i_1] [i_1] [i_1] [i_1] [i_4] = ((((~var_2) >= ((var_1 ? var_7 : var_7)))));
                                var_12 = (max(var_12, ((((((((~(arr_6 [i_0] [i_1] [i_2] [i_3])))) + var_9)) < (!var_3))))));
                                arr_12 [i_0] [i_0] [i_4] [i_3] [i_4] = ((!((((((var_9 ? var_7 : var_2))) ? (~var_3) : var_9)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_13 = (((((~(arr_15 [i_5 + 1] [i_5 + 1] [i_2] [i_6 - 1] [i_6 - 1])))) ? ((var_8 / (arr_0 [i_0] [i_0]))) : (((!(arr_16 [i_6] [i_1] [i_2] [i_5 - 1] [i_6]))))));
                                arr_17 [i_0] [i_1] [i_1] [i_6] [i_6] [i_2] = ((((((!(var_1 % var_5))))) < (arr_6 [i_0] [i_1] [i_2] [i_5 - 1])));
                                var_14 = (((((~(arr_10 [i_0] [i_1] [i_2] [i_2] [i_0])))) ? var_4 : (((((-2839255721909424023 ? 665868596 : -1))) ? var_3 : (arr_15 [i_5 - 1] [i_1] [i_1] [i_5 - 1] [i_6])))));
                                arr_18 [i_0] [i_0] [i_6] = (!var_1);
                            }
                        }
                    }
                    var_15 = (max(var_15, (((var_3 <= ((-((var_8 ? (arr_3 [i_0] [i_1] [i_2]) : (arr_3 [i_0] [i_1] [i_2]))))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_16 = var_7;
                                var_17 = var_8;
                                var_18 = (max(var_18, ((((~var_7) ? var_6 : var_2)))));
                                var_19 = (((max(var_4, (18886 & 9223372036854775807))) != var_3));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
