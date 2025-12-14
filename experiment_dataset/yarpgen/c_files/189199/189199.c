/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((max(var_14, var_6)) ? ((-7292793026725446026 ? ((var_13 ? var_16 : var_18)) : ((var_18 ? 108 : -111)))) : var_12);
    var_21 = (min(var_21, (min((((!(((9 ? var_2 : var_17)))))), var_7))));
    var_22 = (((var_14 ? (max(var_8, 4294967281) : (~4294967270)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_23 = ((~(!9)));
                    var_24 = ((((((123 ? 13 : 82)))) ? (((((((arr_5 [i_1] [i_2]) ? (arr_3 [5]) : (arr_4 [i_2])))) ? ((-7292793026725446009 ? var_16 : (arr_2 [9] [9] [i_2]))) : (~139)))) : (((((-4370676766650213238 ? -9839 : -4791051500235619579))) ? ((((arr_0 [7]) ? 46559 : var_8))) : (min((arr_7 [i_0]), (arr_0 [10])))))));
                }
            }
        }
    }
    var_25 = (min(((max(((2009124977 ? var_1 : var_5)), ((var_8 ? var_10 : var_9))))), ((min(-5490536456206443518, var_1)))));
    #pragma endscop
}
