/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] = arr_3 [1] [i_1] [i_1];
                arr_6 [i_0] = ((((((((((arr_2 [i_0] [i_0]) && (arr_1 [i_0]))))) & 16776192))) <= (min((arr_2 [i_0] [i_1]), (min(3412765108311647128, var_0))))));
                arr_7 [i_0] [i_0] = 12;
            }
        }
    }
    #pragma endscop
}
