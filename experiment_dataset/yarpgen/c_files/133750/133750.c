/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = (((((arr_0 [i_2 + 1]) < 4294967290)) ? ((((-27579 - (arr_16 [i_0] [i_1] [i_0] [i_3]))))) : (max((((~(arr_8 [i_0] [i_0] [9] [i_0])))), var_0))));
                                var_14 |= ((27564 == (((min(var_6, (arr_16 [i_0] [i_4] [i_2] [i_0]))) & var_0))));
                            }
                        }
                    }
                    var_15 = ((((max((arr_12 [i_0]), ((((arr_6 [i_0]) ? 27578 : (arr_2 [6]))))))) ? (arr_0 [i_1]) : (max((max(var_4, (arr_4 [i_0] [i_1] [i_2]))), (((var_1 >= (arr_13 [i_0] [i_0] [i_1] [i_1]))))))));
                    var_16 = (arr_0 [i_0]);
                }
            }
        }
    }
    var_17 |= ((var_11 % ((var_9 - ((-5579 ? var_7 : var_11))))));
    #pragma endscop
}
