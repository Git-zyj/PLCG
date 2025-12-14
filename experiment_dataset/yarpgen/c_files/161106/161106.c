/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-(((((var_2 ? var_9 : var_4))) ? (min(var_3, var_4)) : var_6))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((-((var_8 ? var_8 : var_7))))) ? (arr_2 [i_0] [i_0] [i_0]) : (((((var_3 ? (arr_1 [i_0]) : var_3))) ? var_1 : ((var_8 ? var_6 : 15652839767996581189)))));

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    var_12 = (((((arr_7 [7] [i_1] [13] [i_2 + 1]) + 9223372036854775807)) >> (((((arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2 + 2]) ? (arr_7 [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0 - 1]) : (arr_7 [i_0] [i_2] [i_0] [i_0]))) + 4631191042421304))));
                    var_13 = ((var_9 ? (arr_0 [i_0] [i_1]) : (((var_1 && (arr_7 [i_0] [i_0] [9] [i_2]))))));
                    arr_8 [i_0 - 1] [i_1] [i_2] [i_2] = var_8;
                }
            }
        }
    }
    var_14 = var_2;
    #pragma endscop
}
