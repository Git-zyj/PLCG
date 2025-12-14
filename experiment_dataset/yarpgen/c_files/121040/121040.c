/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_11 = ((((min(0, var_3))) ? ((-(arr_0 [i_1 + 2] [i_1 - 2]))) : ((min(var_8, (arr_0 [i_1 + 2] [i_1 + 3]))))));
                var_12 = ((((((arr_2 [i_1 - 1] [i_1 + 1]) - ((max(10, 24)))))) ? ((~(arr_2 [i_1 + 2] [i_1 + 3]))) : (((arr_2 [i_1 + 1] [i_1 - 2]) ? -var_7 : -1))));
                arr_4 [i_0] [i_1] = ((((min(var_2, var_10))) % (arr_3 [i_1 + 1] [i_1] [i_1 + 2])));
            }
        }
    }
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_14 &= (((arr_1 [i_2]) / var_10));
                var_15 = ((((max((arr_5 [i_2]), (arr_5 [i_3])))) ? ((min(var_2, (arr_2 [i_2] [i_2])))) : (var_10 % -var_2)));
                var_16 = ((var_0 ? (arr_1 [i_2]) : ((max((arr_5 [i_3]), (arr_5 [i_2]))))));
                var_17 = (((!(arr_7 [i_3] [i_3] [i_3]))));
                arr_9 [i_3] [i_2] = (max(((-((var_5 ? var_0 : (arr_6 [i_2]))))), ((((((var_6 ? -1 : var_3)) + 2147483647)) << (1 - 1)))));
            }
        }
    }
    #pragma endscop
}
