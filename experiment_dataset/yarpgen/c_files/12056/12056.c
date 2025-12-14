/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (max((2408066980855319396 | 334632333), var_4));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 |= (max(((min((arr_7 [i_0] [i_0] [i_0]), var_15))), (max(-7173895197177226944, 1))));
                    var_18 = ((+((((arr_2 [i_0]) > (arr_7 [i_0] [i_0] [i_0 - 1]))))));
                }
            }
        }
        var_19 = ((((arr_1 [i_0 - 2]) ? (min(8785218768091992175, var_11)) : -577397639)));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_20 |= min((min(((min((arr_8 [i_3] [i_3]), var_5))), -15156387326448879587)), 3290356747260672029);
        var_21 |= (min((min((((arr_9 [i_3] [i_3]) ? (arr_9 [i_3] [i_3]) : 1)), ((max(1914265908, 1))))), 19117));
        var_22 = (((arr_9 [i_3] [11]) | (((min((min((arr_8 [i_3] [4]), -32763)), (arr_8 [i_3] [i_3])))))));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_23 = -1914265908;
        var_24 = (arr_11 [i_4]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_25 = ((var_7 ? (arr_14 [i_5]) : -85));
        var_26 = (min(var_26, var_6));
    }
    #pragma endscop
}
