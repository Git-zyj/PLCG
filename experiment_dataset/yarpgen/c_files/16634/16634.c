/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_3 ? -var_10 : (!var_14))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (((var_3 ? (min(var_11, ((max(588543993, var_9))))) : (((((var_4 << (((((arr_0 [0]) + 172)) - 60))))))))))));
                    var_17 = ((((min(var_0, -106))) ? (max(var_8, var_4)) : (arr_5 [i_0] [i_1] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] = (arr_9 [i_3 - 2] [i_3 - 3] [i_3] [i_3 + 2]);
                                var_18 = (-4524473204271858133 > var_13);
                                var_19 = ((((min(-4524473204271858140, var_7))) ? (min((~var_5), var_2)) : 1));
                                var_20 = (min((((arr_10 [i_3 + 1] [i_3 - 1]) ? var_13 : (arr_10 [i_3 + 1] [i_3 + 2]))), ((min((var_8 % 126), var_1)))));
                                var_21 = (min(var_21, (arr_6 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(var_22, (((var_6 == (((4524473204271858156 ? (((-4524473204271858133 + 9223372036854775807) >> (var_4 - 3292567706914473349))) : (var_7 != var_12)))))))));
    #pragma endscop
}
