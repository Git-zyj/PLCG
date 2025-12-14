/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    var_16 = (~-1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    var_17 = ((-(arr_4 [i_0] [10])));
                    arr_10 [10] [i_1] [i_2 + 1] = ((!(arr_0 [i_1] [9])));
                }
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_18 = (min(var_18, (arr_11 [i_0] [i_1] [i_1])));
                                var_19 = (arr_3 [i_3 - 1] [i_3 + 1]);
                                var_20 = ((((((arr_9 [i_0] [i_1]) ? var_5 : (arr_1 [i_5] [i_4])))) ? (arr_16 [i_3 + 1] [i_3] [i_3 - 1]) : (((arr_6 [i_3]) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
                            }
                        }
                    }
                    var_21 &= (min(var_9, ((137 | (((arr_6 [i_0]) ? (arr_4 [i_0] [14]) : (arr_11 [i_0] [i_1] [1])))))));
                    arr_20 [i_0] [i_0] [5] [i_3] = (((((var_12 ? (!var_14) : (arr_5 [1] [i_1] [i_0])))) ? (arr_0 [i_0] [i_3]) : ((min(108, var_12)))));
                }
                var_22 = var_9;
                var_23 = (max(var_23, ((((((41 > (((arr_5 [i_0] [i_0] [i_0]) ? var_8 : (arr_6 [i_0])))))) <= (((arr_1 [i_1] [i_0]) & var_3)))))));
            }
        }
    }
    var_24 &= (var_3 == var_7);
    #pragma endscop
}
