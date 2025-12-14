/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= var_1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((max(15504069571554092891, (15581703539238509261 || 124))))));
                var_14 = ((var_5 % var_1) ? (((-((255 ? (arr_2 [10] [i_1] [i_1]) : var_2))))) : (min((arr_3 [6] [9] [i_0]), var_0)));
            }
        }
    }
    var_15 = (((((var_6 / (var_7 ^ var_5)))) ? (((!(!-658096226)))) : ((var_8 / (var_4 >= 15)))));
    var_16 = (max((!var_2), var_5));
    #pragma endscop
}
