/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((((((var_0 ? var_0 : var_18)) >= ((min(109, 103)))))), var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [19] = (min(((((1782353988 | 130) >> (var_7 - 13823)))), 566767031));
                arr_6 [i_0] [i_0] [i_0] = ((((max(144, 126))) ? (((min(var_14, var_2)))) : (((((min(var_11, var_7)))) & (var_7 | var_17)))));
                var_20 = ((127 ? 119 : 1));
                var_21 *= var_12;
                var_22 = (min(((((max(7057996985593837936, 3142488300))) ? var_5 : (var_17 / var_10))), (((52460 ? 138 : ((min(-81, 134))))))));
            }
        }
    }
    #pragma endscop
}
