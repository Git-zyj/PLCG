/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_1 & var_12);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1 - 1] [i_2] [20] [i_3] = ((((((32767 <= -1) * (!var_7)))) ? var_0 : (arr_4 [i_0] [i_2])));
                            var_21 = 2047;
                        }
                    }
                }
                var_22 = ((((((((!(arr_8 [i_1] [i_0] [i_0] [i_0]))))) >= ((var_0 ? var_14 : var_3)))) ? ((-(arr_1 [i_1 - 1] [i_0 + 1]))) : (arr_6 [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
