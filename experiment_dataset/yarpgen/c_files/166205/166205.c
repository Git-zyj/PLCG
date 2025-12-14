/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] &= (min((((~((~(arr_5 [13] [13] [13] [i_3])))))), (((arr_6 [i_0] [2] [i_2] [i_3]) ? (((var_15 ? 0 : (arr_6 [i_0] [9] [i_2] [i_3])))) : (min(var_6, 7957959853969429623))))));
                            var_19 = (min((((!(arr_9 [i_2] [i_2] [i_2] [1] [i_2])))), (max(var_4, (max((arr_2 [2]), var_8))))));
                            var_20 = (min(var_20, ((max((min((arr_9 [i_0] [1] [8] [i_0] [i_0]), var_4)), (((var_12 ? (arr_8 [i_3] [i_1] [i_3]) : (var_1 <= var_4)))))))));
                        }
                    }
                }
                var_21 = ((44729 || ((((var_12 ? var_11 : var_13)) > (max(1351895702, 44716))))));
            }
        }
    }
    var_22 = ((1 ? (min(var_11, var_6)) : 44729));
    #pragma endscop
}
