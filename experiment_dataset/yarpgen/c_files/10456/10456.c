/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!((!(!var_11)))));
    var_19 = -var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_16 [i_0 - 1] [i_1] [4] [i_0 - 1] [i_0] = ((!((((~(arr_11 [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 2] [i_0] [i_0])))))));
                                var_20 = ((-(((!(!1))))));
                            }
                        }
                    }
                }
                var_21 = ((-(~-var_11)));
                var_22 = (!1);
                arr_17 [0] |= ((-(~var_4)));
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_26 [i_0] [i_1] [i_5] [10] [i_1] [9] = ((~(~-var_13)));
                                arr_27 [i_0 - 1] [i_5] [i_5] [6] [10] [i_0] [i_6] &= ((!((!((!(arr_0 [i_0] [i_1])))))));
                                var_23 = (min(var_23, (((!(((-(~43237)))))))));
                                var_24 = (max(var_24, (+-22299)));
                                var_25 *= ((!(~1)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
