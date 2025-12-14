/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((var_7 ? var_3 : var_1)) ? (((var_2 ? var_10 : var_7))) : 8151))));
    var_12 -= ((((var_4 - var_6) + var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((18446744073709551615 ? 7 : 13113212))) + (30774 + var_2));
                var_13 -= ((((((arr_1 [i_1] [i_1 - 1]) ? 74 : (arr_1 [i_1 - 1] [i_1 + 1])))) ? 1145603311617466491 : ((((min(var_5, (arr_1 [i_0] [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
