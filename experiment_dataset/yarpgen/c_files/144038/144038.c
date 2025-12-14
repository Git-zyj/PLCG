/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((!-1) ? 22099 : var_0));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_21 *= (max(((((min(var_15, (arr_3 [2] [2]))) & ((var_11 ? var_12 : var_9))))), (((var_7 * var_18) & ((((!(-2147483647 - 1)))))))));
                var_22 *= var_18;
                arr_6 [i_1] [i_0] = ((-((min(((min(1, (arr_3 [7] [4])))), (max(56094, var_4)))))));
                arr_7 [i_0] [i_0 - 1] [i_1] = ((!((!(arr_1 [i_0 + 1] [i_1])))));
            }
        }
    }
    #pragma endscop
}
