/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] = var_13;
                var_18 = (min(((((var_15 ? (arr_2 [i_0 - 1]) : var_0)))), ((-var_4 ? var_7 : ((((arr_4 [i_0]) - var_2)))))));
                var_19 = 146;
                var_20 *= ((((((-2147483647 - 1) ? 691044111 : -var_2))) ? (~var_12) : ((-(~4305596452875503664)))));
                var_21 = min(((((var_8 - (arr_3 [i_1] [i_1]))))), (arr_3 [i_1] [i_1]));
            }
        }
    }
    var_22 = (~var_1);
    #pragma endscop
}
