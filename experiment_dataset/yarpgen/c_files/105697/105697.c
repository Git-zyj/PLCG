/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (!var_6)));
                    var_14 = (min(var_14, (((((((((39360 << (74 - 74))) < 26185)))) <= (arr_1 [4]))))));
                }
            }
        }
    }
    var_15 = 157;
    var_16 |= (((((var_12 & var_5) & (var_9 + var_2))) != (max((var_3 > var_9), -var_9))));
    var_17 = var_0;
    #pragma endscop
}
