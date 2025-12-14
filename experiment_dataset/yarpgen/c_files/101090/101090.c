/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (((arr_0 [i_1] [11]) || ((min((((arr_1 [i_0]) & var_19)), ((((arr_2 [i_0] [i_0] [i_1]) <= (arr_3 [i_1] [22] [i_0])))))))));
                arr_4 [i_0] [i_1] = (max((max((1325530417 & var_12), (min(var_1, (arr_2 [i_0] [i_1] [22]))))), 18446744073709551615));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] = var_17;
                                var_22 = ((((-12337 ? (arr_12 [i_4] [i_2 + 2] [i_0]) : (arr_5 [i_1] [i_2 + 2] [i_4]))) / ((((arr_12 [i_3] [i_2 + 2] [i_1]) * (arr_0 [i_2 - 1] [i_2 + 1]))))));
                                arr_15 [i_1] [i_1] [i_1] [i_1] [i_3] = -12356;
                            }
                        }
                    }
                }
                var_23 = ((((((1 >> (-12324 + 12333))) << (((arr_6 [i_1]) - 26232)))) / (((var_5 * (arr_1 [i_0]))))));
                arr_16 [i_0] [i_1] = ((~(((arr_6 [i_1]) << (((-12324 + 12353) - 17))))));
            }
        }
    }
    #pragma endscop
}
