/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_5, (~var_12)));
    var_18 = (((((((max(var_8, var_0))) >> (-13599 + 13623)))) ? (((((min(0, 352407492)) != var_12)))) : 18446744073709551615));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = var_4;
                    arr_10 [i_0] [i_1] [i_0] [i_2 - 1] = 13403;
                }
            }
        }
        var_20 = (max(var_20, (((-var_10 ? ((max(2547153309, 14))) : 30)))));
        var_21 = (max((max((arr_0 [i_0] [i_0 + 3]), (arr_2 [i_0 + 2]))), ((1768294554 ? (arr_0 [i_0] [i_0 + 3]) : (arr_2 [i_0 + 2])))));
    }
    var_22 = (min(var_22, var_14));
    var_23 = var_4;
    #pragma endscop
}
