/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = (min((((arr_3 [i_1]) ? (arr_0 [i_1]) : (arr_3 [i_0]))), ((((((var_5 ? 7 : -192))) || (arr_0 [i_0]))))));
                var_12 = ((var_1 == ((((!209) < (min((arr_3 [i_0]), (arr_2 [7] [7] [i_0]))))))));
                arr_4 [i_1] |= (min((((!(((var_9 ? (arr_2 [14] [i_1] [i_1]) : (arr_2 [i_0] [i_0] [i_1]))))))), (min(var_2, ((213 << (var_7 - 53740)))))));
                var_13 *= (((min((arr_0 [i_1]), 47321))) ? var_10 : (((2147483647 ? 65535 : 2))));
            }
        }
    }
    var_14 = (min((var_9 > 49981), var_10));
    var_15 |= 3998;
    var_16 = (((var_10 & var_1) ? var_6 : (((0 < var_8) << 4015))));
    #pragma endscop
}
