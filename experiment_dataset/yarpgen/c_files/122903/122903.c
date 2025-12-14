/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((((var_5 ? (-127 - 1) : var_7)) * var_9))) ? (((((var_9 ? var_7 : var_5))) ? ((var_1 ? (-32767 - 1) : var_0)) : var_9)) : var_2));
    var_11 = ((~((min((max(var_6, var_9)), ((min(1, var_3))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_0] = var_8;
                    arr_9 [i_0 + 3] [7] = (max((((((arr_5 [1] [9] [9]) ? 2147483647 : (-32767 - 1))) - ((var_9 ? var_4 : (arr_0 [i_2 + 3]))))), (arr_4 [i_1 + 2] [i_2 - 2])));
                    var_12 = (!var_8);
                }
            }
        }
    }
    var_13 = (max(var_13, var_3));
    #pragma endscop
}
