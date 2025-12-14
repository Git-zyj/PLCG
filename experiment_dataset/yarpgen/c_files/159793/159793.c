/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [6] [i_0] = var_7;
                arr_7 [i_0 + 1] [i_0] [i_1] = (((((-(arr_2 [i_1 - 1])))) ? ((min((arr_2 [i_1 - 1]), (arr_2 [i_1 - 1])))) : (arr_2 [i_1 - 1])));
                var_12 *= var_4;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_13 [i_3] [i_0] [i_0] [i_0] = ((((max(var_0, (arr_4 [i_0 - 2] [i_0 - 2] [0])))) ? (min((arr_2 [i_0]), (max(var_3, (arr_12 [i_0] [i_1] [i_2 - 1] [i_3]))))) : ((25734 ? 1 : 31359))));
                            var_13 = (((((((arr_12 [1] [i_1 - 1] [i_2 - 1] [i_3]) > (arr_12 [i_2 - 1] [i_2 - 1] [i_1] [1]))) ? -var_9 : ((((arr_9 [i_0] [i_2] [i_2]) * (arr_8 [0] [i_1] [i_2 - 1] [i_3])))))) == (((var_3 >> (arr_3 [i_0]))))));
                            var_14 |= (((min(-65, (arr_3 [6])))));
                        }
                    }
                }
            }
        }
    }
    var_15 -= (min((var_4 * var_11), var_8));
    #pragma endscop
}
