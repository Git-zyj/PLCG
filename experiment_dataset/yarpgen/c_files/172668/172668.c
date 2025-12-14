/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 ^= (((var_8 ? var_6 : (arr_0 [i_0] [1]))));
                var_13 ^= min((max((arr_2 [i_0 + 1] [1] [i_0 + 1]), var_2)), ((((arr_0 [i_0 - 3] [14]) < (arr_2 [i_0 - 1] [22] [i_0 - 1])))));
                var_14 = (min(var_14, (arr_4 [0] [i_1])));
            }
        }
    }
    var_15 |= (max(((max(5, -787853113564892165))), var_2));
    #pragma endscop
}
