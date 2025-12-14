/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (((((((var_2 ? var_10 : 108))) ? ((max(145, var_10))) : ((max(6727, 110))))) > 110));
                var_11 = ((((((var_1 & var_3) ? 18446744073709551611 : (var_0 - 0)))) ? ((var_4 ? ((var_5 ? var_1 : 141)) : var_4)) : ((max((2957811839 || 138), (129 > var_10))))));
                arr_6 [1] [1] [1] = (((~-111) ? (((110 ? ((min(1, var_4))) : var_1))) : var_1));
            }
        }
    }
    var_12 = (max((((-((133 ? var_2 : 38268))))), (((((145 ? var_0 : var_10))) ? (((4294967278 ? var_5 : 1))) : var_7))));
    #pragma endscop
}
