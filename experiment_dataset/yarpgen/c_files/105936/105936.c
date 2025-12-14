/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((!-13071) != (~var_5))) ? ((var_13 ? ((2147483647 << ((((-2147483647 - (-2147483647 - 1))) - 1)))) : ((5270446400408495178 ? 13071 : 0)))) : (((~var_7) ? (~26499) : var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = (min(var_21, ((min((((9223372036854775807 / -26500) / (((max((arr_0 [i_0] [i_1]), var_0)))))), (arr_3 [i_1] [i_0] [i_0]))))));
                var_22 += var_19;
            }
        }
    }
    var_23 = ((!(((var_0 ? (3113903777552552794 && -1) : 2147483647)))));
    #pragma endscop
}
