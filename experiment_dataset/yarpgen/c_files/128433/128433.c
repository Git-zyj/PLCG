/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] [i_0] = 127;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_20 = (min(var_20, ((((((2801306837291201168 ? 121 : (arr_7 [5] [i_0] [6] [5] [i_3])))) != (((arr_4 [i_0] [i_0]) ? 2050619617 : 2541895486)))))));
                        arr_9 [9] [9] [9] = var_14;

                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            var_21 = (min(var_21, ((((arr_7 [i_2] [i_0] [i_2] [i_0] [i_0]) ^ -var_12)))));
                            var_22 |= (arr_4 [i_4 - 2] [i_4 + 2]);
                            var_23 = (max(var_23, ((((arr_12 [i_2] [6] [i_2] [i_2] [i_4 + 2]) >> (var_8 - 23008))))));
                        }
                    }
                }
            }
        }
    }
    var_24 = (min(var_18, (((-(2525836709 != 1181762026))))));
    #pragma endscop
}
