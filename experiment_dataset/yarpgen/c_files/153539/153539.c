/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_1 ? var_6 : var_1))) * (((-((var_7 ? 86 : var_3))))));
    var_12 = ((18446744073709551615 / 31894) ? (((1 ? 13 : -16163))) : ((~(min(var_9, 559945612)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_1] [i_0] = ((((((var_10 ? (arr_4 [i_0] [i_1]) : var_3)) == var_10)) ? (arr_5 [i_0]) : ((2147483647 ? (arr_5 [i_1]) : 11584316833810553724))));
                    var_13 = ((2147483647 * (arr_0 [18])));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((!((((((arr_6 [i_2] [i_1] [7] [7]) ? 65535 : var_3)) % ((min(var_7, 86))))))));
                }
            }
        }
    }
    #pragma endscop
}
