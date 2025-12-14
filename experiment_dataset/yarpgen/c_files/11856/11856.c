/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 -= (max(32767, (max((arr_6 [i_0]), (((arr_3 [i_2] [i_1]) ? -1056516973 : var_16))))));
                    var_21 &= var_7;
                    var_22 = (max((arr_6 [i_0]), (arr_5 [i_2 + 2] [i_2 - 1] [i_1])));
                }
            }
        }
    }
    var_23 = (((var_2 || var_12) / (max((var_18 >= -1056516959), var_11))));
    var_24 = var_18;
    #pragma endscop
}
