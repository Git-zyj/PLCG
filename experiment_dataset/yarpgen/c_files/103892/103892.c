/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, (((((min((arr_4 [i_0 + 1] [i_0 - 3] [i_0 - 2]), -22830))) + ((-(arr_2 [i_0 + 1] [i_0 - 2]))))))));
                    var_13 = 1;
                    var_14 = (max(var_1, ((((arr_2 [i_0] [i_0 - 3]) ? var_4 : (arr_3 [i_1] [i_2]))))));
                }
            }
        }
    }
    var_15 = var_2;
    #pragma endscop
}
