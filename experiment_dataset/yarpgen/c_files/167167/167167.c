/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_10 ^= (((~((108 ? 0 : (arr_4 [i_1]))))));

                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        arr_9 [i_1] [i_1] [i_1] [18] [i_1] [i_2] = 1;
                        var_11 = (max(var_11, ((((min((((232 ? (arr_3 [i_0] [i_1] [1]) : 232))), ((1 ? -1 : 4129842191)))) >= (arr_2 [i_2]))))));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_12 [14] [i_1] [i_2] [i_1] = ((-var_5 ? (((arr_11 [i_1]) ? (arr_11 [i_0]) : (arr_11 [i_0]))) : ((max((arr_3 [i_0] [i_1] [i_2]), (arr_5 [i_0]))))));
                        var_12 = ((min(17550, (max(17550, 1)))));
                    }
                }
            }
        }
    }
    var_13 = -61;
    var_14 = ((((((13 ? -108 : var_6)) + var_6)) ^ var_2));
    var_15 ^= (max(0, (max((min(-1654432187, 16285)), var_6))));
    var_16 |= (((~var_2) ? ((((var_2 ? 4294967290 : 1)) << var_0)) : ((((var_9 * var_2) * -1)))));
    #pragma endscop
}
