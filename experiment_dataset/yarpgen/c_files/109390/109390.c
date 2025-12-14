/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 219;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0] = (1 ^ 1555005080);
                var_21 = (23849 / (min(var_4, 2107740370)));
                var_22 = (min(var_22, 2959836436));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_23 = (max(var_23, (arr_6 [i_2])));
        var_24 = var_10;
        var_25 = (max(var_25, (var_0 & 219)));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = (((((-(~var_18)))) ? (arr_6 [i_3]) : (var_0 || var_1)));
        var_26 = (max(var_26, (((((!(arr_5 [i_3]))) ? ((((!((var_10 > (arr_7 [i_3]))))))) : ((((arr_8 [i_3]) ^ 3811570340586651075))))))));
    }
    #pragma endscop
}
