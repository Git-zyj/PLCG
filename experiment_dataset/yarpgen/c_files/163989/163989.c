/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = (arr_3 [i_0]);
                var_16 &= ((-((min(0, 65535)))));
            }
        }
    }
    var_17 &= min(65523, 5715185918087038090);

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_18 = (min(((min(550, 1))), (min((max((arr_7 [i_2]), (arr_6 [i_2] [i_2]))), (arr_6 [i_2] [i_2])))));
        var_19 = ((((min(14124520129274912092, ((max((arr_6 [i_2] [i_2]), var_13)))))) ? ((((!((min((arr_7 [i_2]), 4))))))) : 436277029));

        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            var_20 &= (arr_5 [i_3 + 1]);
            var_21 &= (5 - 14192230785895106740);
            var_22 = ((max(4841159411732336305, ((-(arr_8 [i_2] [i_3 - 1]))))));
            var_23 = ((+(max((arr_9 [i_2] [i_2] [i_2]), ((128 ? 1 : 12))))));
        }
    }
    #pragma endscop
}
