/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_13 <= -1543896668009675805);
    var_21 = ((((((var_8 << (((var_7 + 5280972283385286418) - 19)))) / ((var_8 ? var_15 : -1))))) ? ((~(~var_1))) : (((var_4 >= (max(1382872948, 250))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_1 + 1] [i_1 + 2] = min((!8116), (arr_0 [i_0] [i_1]));
                var_22 = ((((arr_2 [i_0 + 1] [i_1] [i_1 + 1]) > (arr_4 [i_0 + 1]))) ? (min((arr_0 [i_0] [i_1]), -1)) : (((arr_4 [i_1]) ? (arr_0 [i_0] [i_1 - 1]) : (arr_3 [i_0 - 2] [i_0 - 2]))));
            }
        }
    }
    #pragma endscop
}
