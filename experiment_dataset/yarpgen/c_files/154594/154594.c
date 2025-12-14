/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= ((var_1 / (var_1 / var_4)));
    var_17 += var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_3] = (((-13230 <= (arr_0 [4]))));
                            var_18 += var_5;
                            var_19 = (min(var_19, ((((((16103 * (var_7 / var_9)))) ? (((arr_0 [i_0 - 2]) - 1)) : -var_7)))));
                        }
                    }
                }
                var_20 += ((-((((!var_2) || (2113929216 ^ var_13))))));
                var_21 = (((((-((var_7 - (arr_1 [i_0])))))) - (arr_9 [6] [13] [i_0])));
            }
        }
    }
    #pragma endscop
}
