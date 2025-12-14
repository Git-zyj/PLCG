/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_11;
    var_16 = (((-13 ? 25049 : 36)) < ((var_1 ? var_9 : ((16214876594914518386 ? 64 : var_12)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = ((7960760444956386055 ? (((((-680000670 ? 7960760444956386055 : -7960760444956386055))) ? 68719476672 : (((min(0, 36)))))) : ((((-7960760444956386055 <= (arr_2 [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, ((min(var_12, ((((53226 ? -94 : 2097151)) * (arr_4 [i_3] [i_3 - 2] [i_3 - 2] [i_3 + 1]))))))));
                                var_19 = (min(var_19, ((((((arr_7 [i_0] [i_0] [i_3 + 1] [i_3] [5]) ? (arr_10 [i_0] [i_0] [i_3 - 1] [i_2] [i_1] [i_0] [i_2]) : (arr_10 [i_4] [i_3] [i_3 + 1] [i_2] [1] [i_4] [i_4]))) <= (((((!(arr_4 [i_0] [i_0] [4] [i_3]))) || (((var_12 ? 12310 : 0)))))))))));
                                var_20 += (min((((((0 ? 127 : 30720)) != (min((arr_5 [5] [i_3 - 1]), -30721))))), (((224 / 9223372036854775807) | -68719476683))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_12;
    var_22 &= (68719476685 || 9223372036854775807);
    #pragma endscop
}
