/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 = ((((((var_16 != 0) ? (max(var_11, var_10)) : (((31 ? 225 : 877131963)))))) >= ((-((var_15 ? var_0 : var_3))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1] [i_2] [i_2] = (((((((var_11 ? 0 : (arr_1 [i_0])))) + var_4)) - (((((var_2 ? (arr_7 [3] [i_1] [7]) : (arr_3 [i_0 + 1])))) ? (~65535) : ((168 ? 63441 : (arr_3 [i_1])))))));
                    arr_11 [9] = ((((((min((arr_9 [i_0 + 1] [i_1] [10]), (arr_3 [i_0]))) << (var_3 - 7429156371534649817)))) ? ((min(0, (~var_2)))) : ((694346650 ? 694346650 : 0))));
                    var_20 = (min(var_12, (max(((877131993 ? var_11 : 7061)), var_15))));
                }
            }
        }
    }
    #pragma endscop
}
