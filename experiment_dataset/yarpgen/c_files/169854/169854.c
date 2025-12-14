/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, -1501733262));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_1] [i_2] [i_3] [i_1] [i_4] = (arr_13 [i_0] [i_0] [i_0]);
                                arr_15 [i_4] = (((66977792 | 66977792) || ((max((max((arr_1 [i_1] [12]), (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]))), ((var_7 ? var_10 : (arr_6 [i_0]))))))));
                                arr_16 [i_4] = (max(((-var_2 * (min((arr_0 [i_0]), (arr_2 [i_0] [i_0]))))), var_2));
                                var_15 = (((((!var_1) | var_11))) ? (((arr_3 [i_0]) ? (((((arr_11 [i_0] [i_0] [i_0] [i_0]) != var_10)))) : (max((arr_0 [i_4]), var_8)))) : (12710782691833407937 & var_11));
                            }
                        }
                    }
                    arr_17 [i_0] = min((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]), -18016449593121570033);
                    arr_18 [i_0] [i_1] [i_1] [i_1] = (((max((arr_0 [i_0]), (arr_0 [i_2]))) * ((-1112751136 ? (arr_9 [i_1] [i_1] [i_2] [i_2] [i_0]) : (arr_0 [i_1])))));
                    var_16 = (min(var_16, ((min((((!(arr_5 [i_0] [i_0] [i_0])))), (arr_5 [i_2] [i_2] [i_2]))))));
                }
            }
        }
    }
    var_17 = var_9;
    var_18 = (((!var_0) == -66977792));
    #pragma endscop
}
