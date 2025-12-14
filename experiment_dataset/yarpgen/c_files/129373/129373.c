/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((2199224150 ? var_13 : (((var_12 ? (!var_8) : var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 &= (!-12);
                var_17 -= (((((+((var_2 ? (arr_4 [i_0]) : (arr_3 [i_0] [i_0] [11])))))) ? ((((((arr_2 [i_0]) & (arr_1 [i_0])))) ? (min((arr_2 [i_0]), (arr_1 [i_0]))) : (min((arr_3 [i_0] [6] [i_0]), (arr_1 [i_0]))))) : (((((~(arr_2 [i_1])))) ? ((((arr_1 [i_0]) ? var_2 : (arr_4 [i_0])))) : (arr_3 [i_1] [i_1] [3])))));
                var_18 = (min(var_18, (arr_0 [15])));
            }
        }
    }
    #pragma endscop
}
