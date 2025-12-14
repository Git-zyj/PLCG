/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (min(var_19, (((~((1 ? 1 : (arr_1 [1]))))))));
        var_20 = ((-(arr_0 [i_0])));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                {
                    var_21 = (((((((arr_1 [i_2]) ? 1 : (arr_8 [i_1] [i_2] [i_3]))))) ? ((max(32751, 1))) : ((min((min(1, var_9)), 1)))));

                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_22 = 1023;
                        var_23 *= 1;
                        var_24 = (max(var_24, ((min((arr_4 [i_3 - 2] [i_2 + 2]), (max(((181 ? 4294967295 : 4294967295)), (arr_1 [i_1]))))))));
                        var_25 = 1;
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_26 = (1 + 1);
                        var_27 = ((((740736609 < (min(4294967295, (arr_11 [i_3] [i_3] [i_3] [i_5] [i_3]))))) ? (arr_0 [i_5]) : (min(220206074, (max((arr_11 [i_1] [i_1] [i_1] [i_1] [i_1]), 1023))))));
                        var_28 = 21710;
                    }
                    for (int i_6 = 1; i_6 < 7;i_6 += 1)
                    {
                        var_29 = 1;
                        var_30 = (-(min(675857253, ((31 ? var_7 : (arr_11 [i_2 + 1] [i_2] [i_3 + 1] [i_2 + 1] [i_6]))))));
                    }
                    var_31 = (min(43826, 18314));
                }
            }
        }
    }
    #pragma endscop
}
