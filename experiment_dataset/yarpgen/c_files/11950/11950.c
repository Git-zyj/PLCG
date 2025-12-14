/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    var_18 = (max(var_4, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = ((((-(~var_4))) == (!var_15)));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_19 = ((-(((arr_5 [i_0] [11]) ? ((((arr_1 [i_0]) >> (var_1 - 6798)))) : -var_9))));
                            var_20 = (min(var_3, (min(2645748015, -65513))));
                            arr_11 [i_2] [i_0] [i_2] [i_3] &= var_16;
                            var_21 = ((-(arr_2 [i_1] [i_1] [i_1 + 1])));
                        }
                    }
                }
            }
        }
    }
    var_22 = ((var_13 ^ (min((~var_16), (~-22)))));
    var_23 = (-((~(max(var_16, var_4)))));
    #pragma endscop
}
