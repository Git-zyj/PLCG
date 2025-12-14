/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_2 + 1] = (((arr_6 [i_2]) ? var_12 : (((((0 ? var_10 : (arr_8 [i_0]))) <= var_8)))));
                    var_18 = (--var_14);
                    var_19 = (((!1747947499) <= ((1664204980 ? (arr_6 [i_1]) : (arr_5 [i_2] [i_0] [i_0])))));
                }
            }
        }
    }
    var_20 = ((((max((var_4 | var_12), var_9))) ? var_9 : ((~((var_15 ? var_6 : var_1))))));
    #pragma endscop
}
