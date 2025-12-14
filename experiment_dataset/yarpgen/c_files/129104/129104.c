/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = (arr_0 [i_0]);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_12 = ((((min(((((arr_6 [i_0] [i_0] [i_0]) && var_3))), (arr_7 [i_1])))) != (arr_5 [i_1] [8])));
                    var_13 = (-(arr_4 [i_1] [i_2]));
                    var_14 = ((arr_6 [i_2] [i_1] [i_0]) ? (((arr_7 [i_2]) ? (arr_7 [i_2]) : (arr_2 [i_0]))) : (arr_0 [i_2]));
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_15 = (arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_1] [i_3] [0] [i_5] [i_5] = (max(((((arr_6 [i_1] [7] [i_5]) && (arr_2 [i_0])))), (arr_12 [i_5])));
                                var_16 = (min(var_16, ((max((max((arr_11 [i_5] [8] [i_3] [6]), (var_4 | var_8))), (((((((arr_12 [i_0]) < (arr_13 [i_5])))) <= (arr_4 [i_0] [i_4])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
