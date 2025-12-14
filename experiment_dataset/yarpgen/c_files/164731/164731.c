/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(max((min(var_12, var_12)), ((max(var_7, var_9)))))));
    var_17 = 115919074;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_18 ^= ((!(arr_0 [i_0] [i_0])));
        var_19 = var_13;
        arr_2 [i_0] = (((0 ^ var_4) <= 115919074));
        arr_3 [i_0] [i_0] = var_13;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_2] [i_2] [i_3] [i_4] = 120296198;
                        var_20 = (~41);
                    }
                }
            }
        }
        var_21 = (min(var_21, (((-(arr_4 [i_1]))))));
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 12;i_7 += 1)
            {
                {
                    arr_24 [i_5] [i_7] [i_7] [i_7] = ((+(((arr_6 [i_7 - 1] [i_7 - 2]) - 115919074))));
                    var_22 = (max(var_22, (((var_10 ? (((((arr_6 [i_6] [i_7 + 1]) && (arr_6 [i_5] [i_7 + 1]))))) : (((arr_6 [i_5] [i_7 - 2]) | var_6)))))));
                }
            }
        }
        var_23 = ((((!((min(var_3, var_4))))) ? ((((max((arr_6 [i_5] [i_5]), 0))) ? (max(0, 115919074)) : -41)) : ((((max(var_6, 13)))))));
    }
    var_24 = ((((((115919074 ? var_9 : var_9))) ? (-5283370447015389877 >= var_10) : -5283370447015389877)));
    #pragma endscop
}
