/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((18620 | (~127))) & var_15));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [7] [i_0] = (min(((min((arr_0 [i_0]), (arr_0 [i_0])))), (((var_8 + 2147483647) << var_11))));
        var_21 -= (min(5991, ((min(var_15, (arr_0 [i_0]))))));
        var_22 = (min(var_22, (arr_0 [i_0])));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            {
                var_23 = (arr_6 [i_1]);
                var_24 = (((max((~var_9), var_12)) >= (((arr_7 [i_1 - 1]) ? (arr_7 [i_1 + 4]) : ((min(var_9, 254)))))));
            }
        }
    }
    #pragma endscop
}
