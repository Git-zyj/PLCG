/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((var_3 ? (max((arr_0 [i_0]), (min(var_1, (arr_1 [i_0] [i_1]))))) : ((min(((302967791 >> (var_1 - 55377))), (min(var_7, var_3)))))));
                arr_5 [i_0] [i_0] [i_1] = (min((((-(arr_3 [i_0])))), var_10));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {

                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_14 = (((((var_4 ? var_12 : (arr_10 [i_2] [i_2]))) + 4294967295)));
                                arr_22 [i_5] = ((min(var_8, (arr_14 [i_4 + 2] [i_3]))));
                            }
                        }
                    }
                    var_15 = (!((max((((arr_14 [i_2] [i_2]) ? var_4 : var_12)), ((((arr_7 [i_3] [i_3]) >> (var_11 - 36262))))))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    var_16 = (arr_21 [i_7] [i_7] [i_7] [i_3]);
                    arr_25 [i_2] [i_2] [i_2] [i_2] = var_5;
                }
                arr_26 [i_2] [i_2] = (((((((max(var_6, (arr_9 [i_2] [i_2])))) ? ((-(arr_20 [i_2] [i_2] [i_2] [i_2] [i_2]))) : (arr_12 [i_2] [i_2] [i_3])))) ? (!1) : (!var_0)));
            }
        }
    }
    var_17 = (max((min((min(var_6, var_8)), 1)), 237));
    #pragma endscop
}
