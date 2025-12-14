/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (max((var_9 != var_3), var_1));
    var_12 |= (min(452381436341104397, 2984090812));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_13 = ((1365924625 >> ((((min((arr_2 [i_1]), var_1))) << (arr_2 [i_1])))));
                var_14 = (((arr_0 [i_1 - 1] [i_1 - 1]) - (((-(arr_2 [i_1 - 1]))))));
                arr_6 [i_0] [i_0] = var_8;
                var_15 = (arr_2 [i_1 + 1]);
            }
        }
    }
    #pragma endscop
}
