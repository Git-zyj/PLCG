/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = min(var_9, ((21 ? ((21 ? var_16 : 7234186252575198157)) : (var_9 + var_0))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (((((~var_12) & (arr_2 [i_0] [3] [1])))) ? (((var_6 + -36) | (arr_2 [i_0] [i_0] [1]))) : ((min((21 / 235), (arr_1 [i_0 + 1] [i_1])))));
                var_21 += ((((14628602695506098927 ? (arr_0 [i_0 - 3]) : ((var_14 - (arr_2 [1] [i_1] [i_1]))))) >> (((((((234 << (189 - 178)))) ? ((55371 ? (arr_0 [i_0 + 1]) : var_8)) : -19635)) - 8110))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_22 = (((((35 ? (arr_3 [i_1] [i_4]) : (arr_2 [17] [i_1] [i_2 - 2])))) ? (((arr_8 [i_0]) ? (arr_8 [i_0]) : (arr_2 [i_0 + 1] [i_2 - 2] [i_3]))) : (((arr_8 [i_0]) << (((arr_2 [9] [i_2 - 2] [i_3]) - 42857))))));
                                arr_14 [i_0] [0] [i_0] [i_3] [i_4] = (min((((~(arr_7 [i_0] [i_2 + 2] [i_3] [i_4])))), 19626));
                                var_23 = (min(var_23, ((((((((var_16 ? (arr_7 [20] [i_1] [i_2] [11]) : (arr_4 [i_1])))) ? (var_8 && 44944) : (arr_0 [i_1])))) | (max(((23184 ? 1 : var_7)), ((min((arr_2 [i_0] [14] [i_2]), 44944)))))))));
                            }
                        }
                    }
                }
                var_24 = (((arr_0 [i_1]) ? ((((min(var_18, var_18))))) : ((((max(var_4, var_6))) ? (arr_8 [i_0]) : (min(1, (arr_5 [i_0] [1] [i_0 + 2])))))));
            }
        }
    }
    var_25 |= var_12;
    #pragma endscop
}
