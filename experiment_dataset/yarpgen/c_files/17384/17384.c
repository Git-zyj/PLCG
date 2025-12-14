/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = (!(-127 - 1));
                    arr_9 [i_1] [i_1] [i_2] [i_2] = (~18446744073709551615);
                    var_19 = arr_5 [i_0] [i_1] [1];
                    arr_10 [i_0] [i_1] [i_1] = (((1 >= (arr_2 [i_1 + 1] [i_1]))));
                }
            }
        }
    }
    var_20 = (-127 - 1);
    var_21 += (!(((((max(96, var_15))) ? (((var_4 ? 3044131794 : var_2))) : var_4))));
    #pragma endscop
}
