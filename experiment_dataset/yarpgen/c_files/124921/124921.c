/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = ((!(arr_4 [i_0 - 1] [i_0 - 1])));
                arr_5 [i_0] [6] = (((((arr_2 [i_1] [i_0 - 1] [i_1]) ? (max((arr_1 [i_0 - 1] [1]), (arr_2 [i_0] [i_1] [i_0]))) : ((var_8 ? (arr_4 [i_0] [i_0]) : (arr_1 [i_1] [i_1]))))) + (max((arr_1 [i_1] [i_1]), (arr_1 [i_1] [i_1])))));
                var_16 = (arr_1 [i_0 - 1] [i_1]);
                arr_6 [i_1] = ((((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))) / (((((arr_1 [i_0] [i_0]) ? (arr_4 [i_1] [i_1]) : (arr_1 [i_0] [i_1]))) % (arr_0 [i_0])))));
            }
        }
    }
    var_17 = (max(-3853283781, 1));
    var_18 = (min(((((var_8 ? var_14 : var_12)) & var_8)), ((3853283799 ? 100 : 11248062609900487984))));
    #pragma endscop
}
