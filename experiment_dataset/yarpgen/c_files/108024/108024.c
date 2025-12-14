/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = ((7326166146707262099 ? -9223372036854775805 : -203));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_21 = (((!((((-32767 - 1) ? -6215950367120214413 : -18752))))));
                    var_22 *= ((~(arr_8 [14] [i_2] [i_2])));
                }
                /* LoopNest 3 */
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_23 = (((var_6 ? (arr_3 [i_3 + 2] [i_3 + 2]) : (arr_4 [i_5]))));
                                var_24 = ((((arr_6 [i_0] [i_0]) <= (arr_6 [i_1 - 1] [i_3 + 1]))));
                                arr_16 [i_0] [i_3 + 2] [i_1] [i_0] |= ((-((-((var_2 ^ (arr_7 [i_0])))))));
                                arr_17 [i_0] [i_0] [i_1] [12] [i_1] [i_4] [4] = (max(((-(arr_8 [i_5] [i_1] [i_3 - 1]))), (arr_6 [i_3 + 2] [i_1 - 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 ^= var_7;
    var_26 = ((0 || (((var_18 ? (!var_7) : ((var_19 ? var_6 : var_15)))))));
    var_27 = ((var_12 ? (((var_15 ? -7326166146707262101 : var_12))) : ((((var_14 / var_15) ? var_8 : (~var_15))))));
    #pragma endscop
}
