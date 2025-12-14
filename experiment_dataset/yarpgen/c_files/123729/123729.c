/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-19 * 1);
    var_14 = ((var_3 ? var_5 : ((max(var_6, 1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = ((((((min((arr_2 [i_0] [2]), (arr_2 [i_0] [i_0]))) ? ((-(arr_8 [i_0] [2] [i_1] [i_2]))) : (min(var_5, (arr_5 [i_0])))))) ? (min((arr_8 [i_0] [i_1] [0] [i_2]), (arr_8 [i_0] [i_1] [i_2] [i_2]))) : ((((arr_7 [i_2] [i_0] [i_0]) ? (1 * 69) : (!42))))));
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((-(((max(143, 7))))));
                }
            }
        }
    }
    #pragma endscop
}
