/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((var_0 ? 1201779449 : (!var_5)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_13 = ((var_9 ? (!-var_10) : ((0 ? var_1 : (arr_5 [i_0] [i_2])))));
                    arr_6 [i_0] = 80;
                }
                var_14 ^= ((((-5550 >= (min(1465413635, var_11)))) ? ((~(((arr_2 [i_1] [i_1] [i_0]) ? 449204567 : var_8)))) : (((min(20760, 0))))));
            }
        }
    }
    var_15 = ((((max((max(1465413625, var_1)), ((min(var_11, var_4)))))) ? var_5 : (max((max(var_5, var_11)), var_11))));
    var_16 -= ((((min(var_4, ((var_8 ? var_3 : var_6))))) ? var_3 : -5549587391690423970));
    var_17 = -111;
    #pragma endscop
}
