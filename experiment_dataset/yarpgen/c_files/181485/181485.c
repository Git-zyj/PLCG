/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 *= ((-var_1 ? ((+((((arr_0 [i_0]) <= (arr_3 [i_2] [i_0])))))) : ((-((var_12 ? var_4 : (arr_1 [i_2])))))));
                                arr_11 [i_3] [i_3] [i_2] = (max(-1100228014, ((~(-2147483647 - 1)))));
                                arr_12 [i_3] [i_1] [i_2] [i_3] [i_4] = (((min((arr_3 [i_3 + 1] [i_3 + 1]), var_12))));
                                var_16 = (min(var_16, (((var_0 ? (arr_7 [i_0] [i_1] [i_0] [i_4]) : (((((arr_5 [i_0]) != var_1)))))))));
                            }
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_0] = (arr_5 [i_0]);
            }
        }
    }
    var_17 = ((((((~var_4) ? (((var_10 ? var_6 : var_13))) : ((var_9 ? var_10 : var_5))))) ? (((!var_8) ? (((var_3 ? var_0 : var_13))) : var_8)) : ((((var_5 % var_7) ? ((var_5 ? var_5 : var_12)) : (((0 ? (-2147483647 - 1) : 58))))))));
    #pragma endscop
}
