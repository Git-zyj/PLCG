/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_10 = ((((((min((arr_0 [i_0]), (arr_4 [i_0] [i_0] [i_0])))) || ((!(arr_2 [i_0] [i_0]))))) ? (((!1) ? ((((arr_3 [i_0] [i_1]) > 1))) : (~1))) : (((arr_3 [i_0] [i_1 - 1]) ? (~var_8) : (!var_1)))));
                var_11 = (min(var_11, ((max(((-((min(1, 29))))), 99)))));
            }
        }
    }
    var_12 *= -var_5;
    var_13 |= ((((var_4 ^ ((var_9 ? var_2 : 1)))) % (((~var_4) ? var_7 : (~29)))));
    var_14 = (max(var_14, var_8));
    #pragma endscop
}
