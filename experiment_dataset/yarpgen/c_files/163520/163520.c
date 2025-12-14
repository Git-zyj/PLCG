/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [7] = (((((-((-(arr_2 [i_0])))))) ? (((5115315854954631076 - 1048575) ? var_4 : var_9)) : (!1)));
                arr_8 [i_0] [i_0] [i_1 - 1] = (arr_0 [i_0 - 2]);
                arr_9 [i_1 - 1] [i_1] [i_0 + 1] = (max((((((var_10 ? var_10 : 4294967278)) >= ((((!(arr_2 [i_0 - 2])))))))), (((arr_2 [i_0 + 1]) ? (max(var_1, (arr_2 [i_0 + 2]))) : (!var_7)))));
                arr_10 [i_0] [i_1] [i_0] = ((-((var_10 + (arr_5 [i_0 + 2])))));
                arr_11 [i_0 + 1] [i_0 + 1] |= (-32 - (((((74 ? 1829574282 : 1))) ? 1 : (~1048558))));
            }
        }
    }
    var_12 = (var_11 > var_1);
    var_13 = var_10;
    var_14 = ((((min(var_6, var_0) + var_8))));
    #pragma endscop
}
