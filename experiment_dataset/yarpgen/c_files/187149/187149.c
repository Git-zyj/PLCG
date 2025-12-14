/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (5334855492647579590 >= -1);
                arr_5 [i_0] [i_0] = ((-((((var_2 != (arr_1 [i_0]))) ? (arr_1 [i_0]) : (arr_2 [i_0 + 1])))));
            }
        }
    }
    var_14 = var_4;
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                {
                    var_15 -= ((-(((var_7 || (arr_8 [i_3 - 1] [i_2 - 3]))))));
                    arr_12 [i_2 + 1] [i_3 + 1] [i_3] &= -32741;
                }
            }
        }
    }
    #pragma endscop
}
