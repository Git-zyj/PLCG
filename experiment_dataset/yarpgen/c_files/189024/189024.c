/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_18 ? var_2 : (min(((min(116, var_9))), var_15))));
    var_21 = ((((!(((-46 ? var_0 : 199))))) ? 56 : ((-4969 * (min(var_18, 24))))));
    var_22 = (min(6972, 27642));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_23 = ((-((min((arr_5 [i_0]), (arr_2 [i_0]))))));
                arr_6 [i_0] [i_0] = ((1 ^ ((2013905078 ? 22655 : (!22)))));
                arr_7 [i_0] [i_0] [i_1 - 1] = 22655;
            }
        }
    }
    #pragma endscop
}
