/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_4 >> (var_10 < var_12)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = (max((((var_7 + ((56 ? var_0 : (arr_1 [6])))))), (max((arr_7 [i_0] [i_0] [i_0]), var_5))));
                    var_19 = ((((((((var_13 ? var_14 : 30529))) < (min(var_15, (arr_0 [i_0])))))) != var_1));
                    arr_9 [i_0] = max((((var_14 || ((max((arr_3 [1]), var_4)))))), (min(-4253360071960551297, ((max(var_13, var_3))))));
                }
            }
        }
    }
    var_20 += ((!(((-(var_15 != 30529))))));
    #pragma endscop
}
