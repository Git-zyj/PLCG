/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((min((var_10 % 1), (var_11 & var_5))))));
                arr_7 [i_0] = (((((var_9 ? (((max((arr_5 [i_1]), (arr_3 [i_0]))))) : (((arr_5 [i_0 + 3]) ^ var_10))))) ? ((((!(var_11 >= var_5))))) : (max(var_0, var_6))));
            }
        }
    }
    var_13 = (max(var_13, var_6));
    var_14 &= var_3;
    #pragma endscop
}
