/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((max(34, -146)))) ? (max((var_8 >= var_10), -4234552311653826544)) : ((var_0 ? (min(4194303, var_7)) : (var_7 + var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = ((((min(((var_10 ? (arr_2 [i_0]) : (arr_0 [i_1] [0]))), 4194303))) ? (((((min((arr_3 [i_0] [i_1]), (arr_1 [i_0])))) <= (((arr_3 [i_1] [i_1]) ? 21137 : var_5))))) : var_5));
                var_13 -= max(var_6, (((((max(0, var_7))) / (max(var_4, var_3))))));
            }
        }
    }
    #pragma endscop
}
