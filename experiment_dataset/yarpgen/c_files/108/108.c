/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [i_2] = ((((!(arr_3 [i_0])))));
                    var_15 = (arr_5 [i_0] [i_0] [i_0]);
                    var_16 = (var_8 ^ 28);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_0] [i_0] = var_2;
                                arr_16 [i_0] [i_0] [i_0] [i_2] [i_0] = ((1 ? 60 : (27 || 1)));
                                var_17 = var_2;
                                arr_17 [i_0] [i_2] [i_2] [i_2] [i_2] = (max(var_11, (max((arr_10 [i_4 + 1] [i_4 + 1] [i_4 + 1]), (arr_10 [i_4 + 1] [i_4 + 1] [i_4 + 1])))));
                                arr_18 [i_2] [i_2] [i_2] [i_2] = (max(((((122 ? -122 : 8)) >= (arr_13 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 + 3]))), ((!(((var_2 << (-14 + 49))))))));
                            }
                        }
                    }
                    var_18 = (min(var_18, var_5));
                }
            }
        }
    }
    #pragma endscop
}
