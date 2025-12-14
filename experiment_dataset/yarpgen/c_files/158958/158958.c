/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = (max((max((arr_1 [i_0 - 2]), (arr_2 [i_0 - 2] [i_0 + 2]))), (((var_10 & var_7) ? (max(var_15, -1)) : (max(var_0, var_7))))));
                var_17 = ((((-55 ? -55 : (arr_0 [i_0 + 1] [i_1])))) ? -8634098687000809516 : (((max((arr_4 [i_0 + 1] [i_1]), (arr_4 [i_0 + 1] [i_1]))))));
                var_18 = (max(((var_9 ? var_8 : (arr_6 [i_0 + 1]))), (max((min(var_11, -8634098687000809516)), ((3 ? (arr_1 [i_0]) : (arr_6 [5])))))));
            }
        }
    }
    var_19 = ((((((106 < var_16) & (max(var_15, -2508916035185449602))))) && (var_9 - var_12)));
    var_20 = (min(var_20, (((((-var_8 & ((var_11 ? var_14 : var_12))))) ? (var_1 & var_16) : (((!var_7) & (min(-55, -1))))))));
    var_21 = min((max((max(var_12, var_14)), var_6)), (((max(-1, var_1)))));
    var_22 = ((((max(var_6, var_4))) ? (((max(var_16, var_13)))) : ((var_7 ? -126 : -8876121592943651091))));
    #pragma endscop
}
