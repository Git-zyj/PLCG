/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_12 *= ((~(arr_1 [i_0 + 1])));
                var_13 *= ((-72 && (((var_4 ? (arr_0 [i_0 + 1] [i_0]) : (arr_0 [i_0 - 1] [i_0]))))));
            }
        }
    }
    var_14 = 4986;
    var_15 = (((((((max(var_2, var_11)))) <= var_6)) ? ((~((10 ? var_2 : var_8)))) : var_7));
    var_16 = var_3;
    var_17 = ((min(-1132628529, 4986)));
    #pragma endscop
}
