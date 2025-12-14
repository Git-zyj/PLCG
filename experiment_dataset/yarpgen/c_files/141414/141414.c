/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (min((arr_2 [i_0] [16] [i_0]), ((((var_0 ? 748894074 : (arr_3 [i_0] [i_1]))) ^ (max((arr_3 [i_0] [i_1]), (arr_2 [i_0 - 1] [i_0 - 1] [i_0])))))));
                arr_4 [i_0] = (max(2190926422838390112, 202));
                var_18 = ((((((min(var_1, var_8))) == (min((arr_3 [i_0] [i_1]), (arr_2 [i_0] [i_1] [i_0]))))) ? (((!(arr_0 [i_0])))) : ((((arr_3 [i_0] [7]) != (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))))));
                arr_5 [i_0] = (((((-(arr_1 [i_0])))) ? 3546073221 : (max((arr_3 [i_0] [i_0 + 1]), (arr_0 [i_0])))));
            }
        }
    }
    var_19 = var_14;
    #pragma endscop
}
