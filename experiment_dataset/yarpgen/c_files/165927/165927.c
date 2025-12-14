/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((127 ? 0 : -1790262322));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [13] [i_0] [i_0] = (min((((~2047) ? -1790262330 : (arr_5 [i_0]))), (min(8865064033230354869, 991129145))));
                    var_21 = (min(var_21, (arr_3 [6])));
                    var_22 = ((47561 ? (arr_0 [i_1 + 1] [i_2 + 2]) : ((((arr_1 [i_0]) / (arr_4 [i_2] [i_0]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                var_23 = ((-((((var_1 == (arr_14 [i_3] [i_4] [i_4]))) ? ((var_13 ? var_2 : 1)) : (max((arr_12 [i_3]), (arr_10 [i_4])))))));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_24 = (((var_14 ? (arr_14 [i_3] [i_4] [i_4]) : (arr_14 [i_3] [i_3] [8]))));
                    var_25 = var_18;
                    arr_18 [i_3] = (((arr_10 [i_3 + 1]) << (((arr_10 [i_3 - 3]) - 35))));
                }
                var_26 = (min(var_26, var_10));
            }
        }
    }
    #pragma endscop
}
