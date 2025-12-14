/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_0, var_0));
    var_21 = (max(var_21, 11804));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_22 += (11804 == 11802);
                arr_5 [4] = (arr_2 [1] [i_1] [i_1]);
            }
        }
    }
    var_23 = (~(((var_4 || (var_7 * -1)))));
    #pragma endscop
}
