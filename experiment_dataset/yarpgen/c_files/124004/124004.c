/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((-(min(var_4, var_8))))) ? (((min((!var_13), (var_13 <= -21247))))) : (((var_14 * var_14) * var_5))));
    var_21 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_22 = ((-((min((max(var_18, (arr_2 [i_0]))), (arr_2 [i_2 - 1]))))));
                    arr_8 [i_0] [i_0] [i_0] [0] = (arr_5 [i_0] [i_0] [i_0] [i_0]);
                    arr_9 [i_2 - 1] [i_1] [1] [i_0] = 27;
                }
            }
        }
    }
    var_23 = -5316834321430931993;
    #pragma endscop
}
