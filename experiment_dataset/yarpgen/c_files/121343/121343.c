/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 -= (-1 < 1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = (arr_1 [i_0] [i_0]);
        var_13 -= (((arr_0 [1]) ^ var_0));
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] = ((((arr_3 [i_1]) != var_1)));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_14 [i_1] [i_1] = (377278545069520326 == 3317173617);
                        arr_15 [i_1] [i_2] [i_1] = (((var_1 != 1) ? var_3 : ((((((arr_11 [7] [i_2] [i_3]) - (arr_9 [i_1] [i_2] [i_3] [i_1])))) ? var_8 : var_4))));
                    }
                    var_14 = (((((var_2 ? var_1 : (arr_8 [i_1]))) ? (arr_2 [i_1]) : (((arr_5 [i_1]) ^ (arr_5 [i_1]))))));
                }
            }
        }
    }
    var_15 = (max(var_15, ((((var_2 >> (var_5 != var_7))) <= var_9))));
    #pragma endscop
}
