/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(35, 5923211192828630632));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 &= (!var_0);
                var_18 = ((((((arr_3 [i_0 + 1] [i_0 + 1]) / (arr_3 [i_0 + 1] [i_0 - 4])))) ? (-32767 - 1) : (max(16, (arr_0 [i_0 - 1])))));
                var_19 = (max(var_19, var_12));
                arr_5 [i_0] [i_0] [11] = ((1110416504 * (((var_2 | 4294967290) & (var_10 <= var_5)))));
            }
        }
    }
    #pragma endscop
}
