/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [17] [0] [i_2] [0] [i_4] = (~0);
                                arr_14 [i_0] [4] [17] [i_3] [i_4] = ((var_11 <= (arr_8 [i_0] [i_1] [7] [7] [i_4])));
                                var_16 = (min(var_16, ((max(var_9, ((min(14276819685015193842, var_8))))))));
                                var_17 = ((var_0 ? (arr_6 [i_1] [i_3] [i_3]) : (arr_4 [i_1] [i_1] [i_3])));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_0] [i_0] = ((((18446744073709551615 << (-1486986837 + 1486986882))) == (((var_8 - (arr_9 [i_0] [i_0] [i_0] [i_1] [i_2]))))));
                }
            }
        }
    }
    var_18 = (min(var_18, ((min(-var_6, var_1)))));
    #pragma endscop
}
