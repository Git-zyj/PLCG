/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = 19049;
                var_12 = ((((((arr_1 [i_1 - 1]) - (arr_3 [i_1 + 1])))) ? (min((arr_3 [i_1 + 1]), (arr_3 [i_1 + 3]))) : ((-(arr_3 [i_1 + 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] [i_1] [i_2] [i_3] [i_3] = max(((min(((-1 ? var_4 : 27909)), ((min(var_0, (arr_12 [6] [4] [i_2] [4] [i_3] [i_0]))))))), (((arr_9 [i_0] [i_3 + 2]) ? (((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? 18446744073709551615 : var_1)) : -19)));
                            arr_14 [i_0] [i_1] = ((!(arr_10 [i_0])));
                        }
                    }
                }
            }
        }
    }
    var_13 = (var_5 < var_0);
    #pragma endscop
}
