/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_11 ? (min(var_0, var_1)) : var_17);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_21 = 0;
                    var_22 = var_17;
                    var_23 = ((((min((((var_4 > (arr_3 [i_0])))), (arr_5 [i_0])))) ? (((arr_3 [i_1]) ? (var_17 && var_10) : 0)) : (0 && var_3)));
                }
            }
        }
    }
    var_24 = (max(var_5, var_10));
    var_25 = var_13;
    #pragma endscop
}
