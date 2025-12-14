/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [2] |= ((-1276801697082364551 ? ((((var_6 == (arr_2 [i_0] [i_1]))))) : ((var_7 ? var_5 : var_4))));
                var_19 = (max(var_19, (arr_1 [i_0])));
            }
        }
    }
    var_20 = var_4;
    var_21 = ((((120 ? ((max(var_2, 11))) : (!18446744073709551610)))) ? ((((((-127 - 1) ? var_18 : var_0))) ? 7537756253798996270 : (1 % var_7))) : ((((-96 ? var_1 : var_2)))));
    var_22 = var_7;
    #pragma endscop
}
