/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 &= (~(((arr_4 [i_0]) ? (arr_4 [i_0]) : (arr_4 [i_0]))));
                arr_7 [i_1] [i_1] [i_1] = 3987792879;
            }
        }
    }
    var_20 = (max(var_15, -2665678432839004022));
    var_21 = (((((!var_8) & (max(var_10, var_8)))) - var_8));
    #pragma endscop
}
