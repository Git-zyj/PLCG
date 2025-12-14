/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((((-7753 ? -82 : var_4))) ? var_0 : ((var_15 ? 8345008123990721809 : var_13))))) ? -8345008123990721809 : (var_5 & 1)));
    var_21 -= ((((1874082411 ? 23455 : -1)) - var_19));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_22 *= 1041503946;
                    arr_7 [i_0] [i_0] = ((var_6 & (max((max(1221508906, 0)), -1041503934))));
                    arr_8 [i_0] [i_1] [i_1] |= (max((((arr_6 [i_0] [i_1] [i_2 - 2] [i_2]) ? (arr_2 [i_1] [i_2]) : -1041503946)), (~-1401323248)));
                }
            }
        }
    }
    var_23 = (max(((((max(1, var_4))) ? 1956299322 : var_10)), var_3));
    var_24 += (max((((0 > ((var_9 ? 9223372036854775807 : 2478490553005933599))))), var_17));
    #pragma endscop
}
