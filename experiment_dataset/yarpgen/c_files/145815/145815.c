/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0 - 1] = -0;
        arr_3 [i_0] = (min((arr_0 [i_0 + 1]), (((min((arr_0 [i_0]), 0)) << ((min((arr_1 [i_0]), 1)))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_19 = (min(var_19, (arr_5 [i_1] [i_1])));
        arr_8 [i_1] [i_1] = (-431775599 ? 62 : 3915870205);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        var_20 = (((arr_4 [i_3] [i_2]) > -4271907467942096547));

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            arr_22 [i_1] [i_2] [i_3] [i_3] [i_4] [i_5] |= (((0 ? 43027 : 39637)));
                            var_21 ^= ((((((var_2 ? (arr_14 [i_5] [i_1] [i_1] [6]) : (arr_17 [i_1] [i_2] [i_3] [i_4] [i_1]))) >> (((var_6 < (arr_6 [i_3])))))) <= (arr_12 [i_1] [i_1] [i_3])));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_22 = (min(var_22, (~var_13)));
                            arr_25 [i_1] [i_2] [6] [i_4] [i_2] = var_0;
                        }
                        var_23 += ((((!(((var_1 ? var_18 : (arr_15 [i_1] [i_1] [i_4])))))) ? (arr_17 [i_3] [i_3] [i_3] [i_2] [i_3]) : (((((-99 ? (arr_12 [i_1] [i_2] [i_3]) : var_18)) <= ((1 ? -62 : (arr_11 [i_1] [i_1] [i_3]))))))));
                    }
                }
            }
        }
        arr_26 [i_1] = ((~((((arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) < (arr_0 [i_1]))))));
        var_24 = (max(var_24, ((min((arr_14 [i_1] [i_1] [i_1] [i_1]), (((arr_5 [i_1] [i_1]) ? (max((arr_10 [i_1]), var_12)) : var_6)))))));
    }
    var_25 = (max(var_25, var_2));
    #pragma endscop
}
