/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~((var_3 ? 95 : var_12))));
    var_19 = var_16;
    var_20 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = (((arr_5 [i_0] [i_0] [i_1]) | ((((arr_5 [1] [18] [i_1]) ? (arr_5 [i_0] [i_1] [i_0]) : (arr_5 [i_0] [i_0] [20]))))));
                var_22 = (min(((((min(226, (arr_3 [i_1] [i_1] [i_1])))) ? 231 : ((-(arr_4 [i_0] [i_0]))))), var_7));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                {
                    var_23 = ((min((227 < 232), 3692288341904513197)));
                    arr_14 [i_4 - 1] [i_4 - 1] [i_2] [i_3 + 2] = (min(var_15, var_15));
                }
            }
        }
    }
    #pragma endscop
}
