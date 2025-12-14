/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [10] [i_0] [i_2] [i_0] = (((arr_2 [i_0]) ? (((var_13 && (((var_1 ^ (arr_5 [i_0] [i_1] [2]))))))) : var_14));
                    arr_9 [i_0 + 1] [i_0 + 1] [i_1] [i_0] = (((((!(((-(arr_5 [i_0] [i_0] [11]))))))) >> ((((((((!(arr_1 [i_0] [i_0]))) ? ((9223372036854775807 >> (((arr_3 [i_0]) - 66)))) : (min(-9223372036854775803, (-9223372036854775807 - 1))))) - -9223372036854775804)) + 35))));
                }
            }
        }
    }
    var_16 = (((((var_7 == (((var_11 + 9223372036854775807) >> (-32764 + 32791)))))) >> 1));
    #pragma endscop
}
