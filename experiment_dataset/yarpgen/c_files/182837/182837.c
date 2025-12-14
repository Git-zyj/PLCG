/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, -22));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] = (min(((-123 * (((arr_3 [i_0] [i_0] [i_1]) ? var_13 : (arr_0 [i_0] [4]))))), (((((((arr_2 [i_0] [i_1]) ? 2259826201 : var_11))) ? var_5 : (arr_4 [10] [i_1] [i_0 - 1]))))));
                arr_6 [i_0] [i_1] [i_0] = (max((((var_4 ? (arr_1 [i_0]) : (arr_1 [i_0])))), ((((min((arr_0 [i_0 - 1] [i_0 - 1]), (arr_3 [i_0] [i_0] [i_1])))) ? (arr_3 [i_1] [i_0] [i_0 - 1]) : ((var_8 | (arr_3 [i_1] [i_0] [i_0])))))));
            }
        }
    }
    #pragma endscop
}
