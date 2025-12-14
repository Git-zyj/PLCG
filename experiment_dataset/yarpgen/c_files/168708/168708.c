/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((max((((0 ? var_9 : -58))), 1158)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = -58;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_19 = ((((max((max(var_2, (arr_7 [i_2] [i_2] [i_2] [10] [i_2]))), ((1674026436 ? 1674026435 : 54))))) ? (((!(((var_3 ? 16 : 127)))))) : ((2088960 ? ((121 ? var_6 : var_2)) : (var_13 / var_1)))));
                            var_20 = (min(var_20, (((-16 ? (var_5 / -122) : (((max((arr_3 [i_2 - 1]), (arr_4 [i_2 + 1] [i_3 + 1]))))))))));
                        }
                    }
                }
                var_21 = (max((((-77 >= (min(4292878335, var_1))))), (arr_8 [9] [i_1] [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
