/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((min((((37024 ? 3342266818033900010 : var_1)), (~var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = (min(((((arr_1 [i_1 - 3] [i_1]) | (arr_1 [i_1 - 3] [i_0])))), ((32767 ? var_8 : (min((arr_3 [17]), var_12))))));
                var_16 -= (arr_2 [i_0] [1]);
                var_17 = ((535822336 ? 32767 : 32767));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_11 [i_4] = arr_3 [i_0];
                                var_18 = (max(var_18, (((((-535822337 ? -51 : 61419)) != (arr_8 [i_0] [i_1 + 3] [i_2] [1]))))));
                                var_19 = (max(var_19, ((max((~32767), (((62 % var_3) ? (arr_5 [i_4] [i_4] [i_4] [i_4 - 1]) : (((~(arr_7 [i_0] [i_3] [i_3])))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
