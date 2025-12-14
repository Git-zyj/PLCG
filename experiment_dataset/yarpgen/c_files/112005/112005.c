/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_3 == var_8);
    var_20 = ((((max(1, ((var_2 ? -104 : var_10))))) ? ((-var_6 ? ((min(87, var_2))) : (var_16 > var_1))) : (var_4 && var_16)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_21 = ((arr_1 [i_0]) ? var_18 : var_9);
        var_22 = ((((((arr_2 [i_0]) ^ (arr_2 [i_0])))) ? (-87 | 2588622591) : ((1 ? 1 : 3378755786701200503))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_23 += (max((-105 * 87), (arr_5 [i_0] [i_0] [i_0])));
            var_24 += (arr_0 [14]);
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] = ((((((arr_7 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3]) + (arr_9 [i_3 + 1] [i_3] [i_3] [1] [i_3] [i_3])))) ? (((arr_7 [i_3 + 1] [i_3] [i_3] [i_3]) ? var_2 : (arr_9 [i_3 - 1] [i_3] [i_3] [i_3] [i_3] [i_3]))) : ((min((arr_7 [i_3 - 1] [i_3] [i_3] [i_3]), (arr_9 [i_3 + 1] [i_3] [i_3] [i_3] [i_3] [i_3]))))));
                        var_25 = max((min(1, (-3378755786701200504 < 4609904228100422726))), 1);
                        arr_12 [9] [i_1] [1] [i_0] = ((!(((arr_1 [i_0]) && 1631612297))));
                    }
                }
            }
            var_26 = (((((max((arr_5 [i_1] [i_1] [i_0]), (max(1, 104)))))) < (min((2067655652 & 100), (arr_8 [i_0] [i_0])))));
        }
    }
    var_27 = ((((max(((2596492574431035870 ? 3378755786701200503 : var_0)), var_9))) ? ((128 ? -78 : ((max(var_0, var_5))))) : 0));
    #pragma endscop
}
