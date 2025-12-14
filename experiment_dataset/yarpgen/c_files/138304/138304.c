/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 *= (((~var_12) * (arr_2 [i_0])));
                var_19 -= (arr_1 [i_0]);

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_6 [i_0] = (max(((-((9223372036854775807 ? 44848 : 9031860954055740438)))), 370940242));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = (arr_5 [i_2] [i_0] [i_2]);
                                var_21 = 20703;
                                var_22 = ((((!(arr_9 [i_0] [i_3] [i_4] [i_3] [i_4 - 1] [i_0]))) ? ((((arr_9 [i_0] [i_2] [i_4] [i_3] [i_4 - 1] [i_1]) <= (arr_9 [i_0] [i_0] [i_4] [i_3] [i_4 - 1] [i_2])))) : (((arr_9 [i_2] [i_1] [i_4] [i_3] [i_4 - 1] [i_1]) / (arr_9 [i_0] [i_1] [i_4] [i_3] [i_4 - 1] [i_0])))));
                            }
                        }
                    }
                    var_23 = (max(var_23, (((((((2000693476 == 44) != (min(1, 2000693476))))) % var_8)))));
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_24 = (arr_12 [i_1] [i_1] [i_5]);
                    var_25 = (arr_3 [i_0]);
                    var_26 = (arr_0 [i_0]);
                }
            }
        }
    }
    var_27 += max((var_6 != var_15), 44860);
    var_28 ^= ((var_11 ? var_3 : (1 != 84)));
    #pragma endscop
}
