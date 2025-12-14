/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((536751757209538610 ? (min(var_2, 541830642)) : ((max(var_1, var_10))))));
    var_20 ^= -15271;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 6;i_2 += 1)
            {
                {
                    arr_8 [i_1] = ((((min(0, 16515072))) ? (~536751757209538595) : (max((arr_5 [i_0] [i_1] [i_1 + 1]), -653747223504346821))));
                    var_21 = (((((var_15 ? var_1 : -3042374796275363444))) ? ((23906 ? -3801 : -12820)) : (((arr_2 [i_0 - 2] [i_1 - 3]) ? var_0 : (arr_2 [i_0 - 3] [i_1 - 3])))));
                }
            }
        }
    }
    var_22 &= ((((!(((-1 ? var_14 : var_0)))))));
    #pragma endscop
}
