/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((!(((var_0 ? var_7 : var_4))))) ? (((!(((var_2 ? 2954074271186510051 : var_10)))))) : (((!(((var_3 ? var_5 : 51231))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = ((+((+((var_2 ? (arr_1 [i_0 + 2] [i_0]) : (arr_4 [i_1])))))));
                arr_5 [i_0] [i_0] = -33;
            }
        }
    }
    var_15 = ((-((1 ? var_3 : var_11))));
    var_16 = var_12;
    #pragma endscop
}
