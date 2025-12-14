/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 = (max(((((((arr_6 [i_2] [i_0] [i_1] [i_0]) ? 1 : (arr_3 [i_0]))) <= var_10))), (-127 - 1)));
                    var_14 = var_5;
                    var_15 = (((((arr_7 [i_0] [11] [i_2]) | (1 >> 1)))) ? (--3189719964681764506) : (((1 ? ((1 ? 705519853 : 255)) : var_11))));
                }
            }
        }
    }
    var_16 = (min(var_16, ((((max(var_11, var_0)) + 1)))));
    #pragma endscop
}
