/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((min(1, -2029174636812968250)) / (((min(-124, var_2)))))) - ((((var_6 + 233653615) - (565658876 - 233653615))))));
    var_17 -= ((((var_6 ? (max(var_8, 1124437209)) : var_2)) < (((min(var_8, var_7))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 = ((+(((arr_1 [i_1]) ? (arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_0]) : (((arr_2 [2] [i_1] [i_2]) ? 233653617 : (arr_3 [i_0])))))));
                    var_19 = (min(var_19, (~233653615)));
                    var_20 = (((((arr_4 [i_1 - 2] [i_1]) ? (arr_4 [i_1 + 1] [i_1]) : (arr_4 [i_1 + 3] [i_1]))) > (arr_4 [i_1 - 3] [i_1 - 3])));
                    var_21 = (min(var_21, ((((!4061313680) ? (arr_3 [i_2]) : ((4061313681 ? var_6 : (arr_0 [i_0] [10]))))))));
                }
            }
        }
    }
    var_22 = (max(var_22, var_14));
    #pragma endscop
}
