/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-var_5 ? var_9 : (var_3 > -var_2)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (max(31607, (((((max(var_14, (arr_6 [15] [i_2])))) && (arr_3 [1] [i_0] [i_0]))))));
                                arr_13 [i_2] [i_0] = var_1;
                                var_17 -= 1;
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_0] = (max(((((arr_6 [11] [i_1 - 1]) >> (((max(-26514, (arr_8 [i_0] [i_1] [i_2 - 1] [i_2] [i_1 + 2] [i_0]))) - 4294940761))))), (((var_9 | -31610) ^ ((var_6 ? -31594 : (arr_2 [i_0] [i_0])))))));
                    var_18 = var_14;
                    var_19 = ((!(((((-31408 < (arr_10 [i_0]))) ? (((var_13 ? var_9 : (arr_1 [i_0])))) : var_15)))));
                }
            }
        }
    }
    #pragma endscop
}
