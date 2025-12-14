/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((!var_10) ? var_5 : ((-((var_3 ? var_10 : var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = ((~((((max((arr_4 [0]), 209035224072290429))) ? -var_9 : 0))));
                arr_5 [i_0] = ((18446744073709551605 << ((-(arr_1 [i_1])))));
                var_13 = (min(var_13, (((!((max(0, 0))))))));
                var_14 = ((((((var_6 ? 23 : (arr_2 [i_0] [i_0] [i_1]))) > 18446744073709551603)) ? ((((((23 || (arr_1 [15])))) <= (arr_3 [i_0] [i_1])))) : -var_8));
            }
        }
    }
    var_15 = ((-var_8 ? (var_10 && 18446744073709551615) : ((-((var_4 ? 18446744073709551603 : 18446744073709551609))))));
    #pragma endscop
}
