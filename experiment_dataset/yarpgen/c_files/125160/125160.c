/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= ((+(((!var_0) | (min(var_9, var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_12 = (arr_2 [i_0]);
                            var_13 *= ((((min(var_4, 0))) ? (arr_7 [i_1] [i_2 + 2]) : (min(var_10, (arr_7 [i_3] [i_2 + 1])))));
                            var_14 = (max(var_14, ((((((var_0 ? var_4 : (arr_13 [i_3] [10] [i_2 - 1] [10])))) ? (arr_13 [i_3] [i_3] [i_2 + 2] [i_3]) : (arr_13 [i_3] [i_3] [i_2 - 2] [i_3]))))));
                        }
                    }
                }
                arr_15 [i_0] = (max(var_3, ((((min(0, var_8))) ? (((var_10 | (arr_11 [i_0])))) : ((var_2 ? var_7 : (arr_0 [i_0])))))));
                var_15 = (min(0, 2073361014046253822));
            }
        }
    }
    #pragma endscop
}
