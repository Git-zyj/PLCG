/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((((var_9 ? -87 : var_3))))));
    var_11 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (((((min(var_2, var_9)))) ? (((((-114 ? (arr_3 [i_0] [14]) : var_3))))) : (max(((((arr_0 [15] [i_1]) ? (arr_1 [i_0]) : -1874751459))), (max(var_1, var_2))))));
                var_13 = (min(var_13, (((+((var_3 % (((arr_2 [15] [i_0]) ? 15871311281466439902 : -125)))))))));
            }
        }
    }
    var_14 = var_7;
    #pragma endscop
}
