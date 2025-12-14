/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (((arr_1 [i_1 - 1]) > ((((arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1]) == (arr_4 [i_1 - 1] [i_1] [i_1 - 1]))))));
                arr_5 [i_0] [i_0] [14] = (var_0 ? (arr_2 [i_0] [i_0] [i_1]) : (((arr_3 [i_0]) ? (min((arr_4 [7] [i_0] [i_1]), var_19)) : (var_14 > var_2))));
                arr_6 [i_0] = (max((max(((min((arr_4 [i_0] [i_0] [i_1]), (arr_0 [i_0])))), (min(var_12, (arr_0 [i_0]))))), ((max((arr_1 [i_1 - 1]), (var_9 * var_18))))));
                arr_7 [i_0] [i_0] [i_0] = (max(((((arr_0 [i_0]) > (arr_0 [i_1])))), var_14));
            }
        }
    }
    #pragma endscop
}
