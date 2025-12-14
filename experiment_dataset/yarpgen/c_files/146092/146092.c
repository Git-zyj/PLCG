/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((min(((21312 / (arr_4 [i_1] [i_1]))), (((-(arr_0 [i_0])))))) * (((min((arr_2 [18] [i_0] [i_0]), var_14)) / var_11)));
                arr_6 [i_0] [i_0] [18] |= -268435455;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_19 *= (arr_1 [i_0 - 2]);
                            var_20 = (max(var_20, (((arr_10 [i_1] [i_1] [i_0]) - ((57 << (((arr_0 [2]) + 8910))))))));
                            var_21 = (min(var_21, (((((((!((!(arr_7 [i_0] [i_1] [i_2] [i_3]))))))) <= var_14)))));
                            arr_13 [18] [i_1] [i_2] [18] [i_0] = (max((((arr_3 [i_0]) << (var_15 - 30573))), (((arr_0 [i_0]) * (arr_3 [i_0])))));
                        }
                    }
                }
                var_22 &= (((-(-32767 - 1))));
            }
        }
    }
    #pragma endscop
}
