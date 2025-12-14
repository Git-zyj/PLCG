/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= 226;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_18 = (-(max((arr_1 [i_0 + 1]), var_5)));
                var_19 = (min(var_19, (((((max(32767, (var_14 >= 507309257157568180)))) >> (((((arr_5 [i_0 - 2] [i_1 - 2]) ? (arr_0 [i_0 + 1]) : (arr_5 [i_0 - 1] [i_1 + 1]))) - 261850537)))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                {
                    var_20 -= ((((((var_9 < (arr_12 [i_2] [i_4 + 1] [i_3]))))) - (max((((arr_13 [i_2] [i_2] [i_4] [i_4]) | 2018086483)), (arr_7 [i_3 + 1] [i_3 + 1])))));
                    var_21 *= var_9;
                }
            }
        }
    }
    #pragma endscop
}
