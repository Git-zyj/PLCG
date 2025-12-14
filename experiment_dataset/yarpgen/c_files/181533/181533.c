/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_0 - 2] = var_12;
                var_19 = (((((arr_1 [i_0 - 1]) ? (arr_0 [i_1]) : var_9)) < -1916102438));
                arr_6 [i_0] [i_1] [1] = (((((1837828283 >> (((arr_4 [i_0] [i_0] [16]) - 27055)))) >= ((((arr_1 [i_1]) - (arr_0 [i_1])))))));
                arr_7 [i_0] = var_8;
                arr_8 [i_1] [18] [i_0 + 1] = ((max((arr_2 [i_0 + 1] [i_0 - 1]), var_6)));
            }
        }
    }
    #pragma endscop
}
