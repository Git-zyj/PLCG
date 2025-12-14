/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((!var_10) > (~-99))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_15 -= (((arr_3 [i_0] [i_1] [i_2]) % (arr_3 [i_0] [i_1] [i_2])));
                    var_16 = ((18446744073709551615 != (((var_4 ? var_13 : var_5)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = ((1 ? 65531 : (!59968)));
                                var_18 = (max(var_18, (arr_6 [i_3] [i_1] [i_3] [i_4])));
                            }
                        }
                    }
                }
                var_19 = max(var_3, (arr_5 [i_1] [i_0] [i_0]));
                arr_12 [i_0] [i_0] [i_0] = (min((min((arr_5 [i_0] [i_1] [i_0]), (arr_5 [i_0] [i_0] [i_1]))), -var_2));
                var_20 += (arr_3 [i_0] [i_1] [i_1]);
            }
        }
    }
    var_21 -= (~0);
    #pragma endscop
}
