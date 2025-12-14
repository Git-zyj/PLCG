/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_14 += (max((max(22026, var_5)), (((((arr_0 [i_0]) < 22026)) ? -34 : ((max(var_8, (arr_3 [1]))))))));
                arr_4 [i_0] [i_1 - 1] [3] = (min((((~((~(arr_1 [i_0] [i_1])))))), (arr_1 [i_1 - 1] [i_1 + 1])));
            }
        }
    }
    #pragma endscop
}
