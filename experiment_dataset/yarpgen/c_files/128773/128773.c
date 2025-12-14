/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((var_5 ? (min(((var_9 ? var_9 : 1775460944)), (~var_6))) : (((max(10278464960486092564, var_8)) & (var_2 > var_2))))))));
    var_12 -= (7017370655722059539 * 11429373417987492074);
    var_13 = (max(var_13, (((!(((max(var_10, var_6)))))))));
    var_14 += var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_15 |= (arr_2 [i_0] [18]);
                var_16 = ((((-(arr_2 [i_1 + 1] [i_0])))) ? ((var_3 - (arr_3 [i_0] [i_1 + 1]))) : (arr_2 [i_1 + 1] [i_0]));
            }
        }
    }
    #pragma endscop
}
