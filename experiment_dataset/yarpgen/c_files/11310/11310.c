/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((min(var_7, var_6)), var_9));
    var_14 = ((((((22183 == var_10) ? ((20624 ? var_7 : var_12)) : var_9))) ? ((var_0 | (((min(var_2, var_4)))))) : 143));
    var_15 += 1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) >= var_9));
        var_16 = 388944020;
        var_17 = (max(var_17, 44911));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = (max((min((arr_1 [i_1]), (arr_0 [i_1] [i_1]))), (((~(arr_0 [i_1] [i_1]))))));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            arr_9 [i_1] = (((arr_0 [i_2 + 2] [i_1]) ? 43352 : 44939));
            arr_10 [i_1] [i_1] = (arr_7 [i_2 + 1]);
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_18 = -388944035;
                            var_19 = var_4;
                            arr_20 [i_1] [6] [2] [i_3] [i_5 - 1] &= ((-(arr_6 [i_1] [i_1])));
                            var_20 = (max(var_20, 2601551291367225434));
                            arr_21 [i_1] [i_2 - 1] [i_5] [i_3] [i_5] [i_3] [i_5 + 1] = 3410143948610119599;
                        }
                    }
                }
            }
            var_21 = (max(var_21, ((((arr_7 [i_2 + 1]) * (arr_0 [i_2 + 3] [i_2 + 3]))))));
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        arr_24 [i_6 - 1] = (arr_22 [i_6 - 1]);
        var_22 = (min(var_22, 12032510108603036597));
    }
    #pragma endscop
}
