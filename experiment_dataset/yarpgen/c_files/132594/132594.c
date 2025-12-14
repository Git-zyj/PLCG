/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (arr_3 [i_0 + 1] [i_0 - 2]);
                var_12 = (((max((arr_1 [i_1] [i_0]), (arr_3 [i_0 - 2] [8]))) | (arr_3 [i_0 - 1] [i_0 - 2])));
                arr_4 [i_0] [i_0 + 1] = ((((((min((arr_2 [i_0] [i_1]), (arr_2 [i_0 - 1] [i_1]))) ? ((((arr_3 [i_0] [i_0]) ^ (arr_3 [i_1] [i_1])))) : (min((arr_1 [15] [i_1]), (arr_0 [i_0] [i_1])))))) ? (((arr_2 [i_0 + 1] [i_0 - 1]) - (((arr_1 [i_0 - 4] [17]) ? (arr_1 [1] [i_1]) : (arr_3 [12] [i_1]))))) : (((((arr_1 [i_0 - 2] [18]) != (((((arr_2 [i_1] [i_0]) <= (arr_3 [i_0] [i_1])))))))))));
            }
        }
    }
    var_13 = (((min(((var_0 ? var_8 : var_1)), (var_9 <= var_4))) + (max((var_6 ^ var_5), ((var_0 ? var_10 : var_6))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_11 [i_3] = (((((arr_3 [i_2] [i_2]) || (arr_6 [i_3]))) ? ((min(254, 1))) : (((((arr_9 [i_2] [12] [i_3]) && (arr_6 [i_3])))))));
                var_14 = ((min((max((arr_2 [i_2] [i_3]), (arr_5 [i_3]))), ((((arr_10 [i_3] [i_3]) != (arr_8 [i_2] [13] [13])))))));
            }
        }
    }
    var_15 = ((max((var_8 != var_1), (var_6 != var_6))) ? ((max((var_2 != var_8), (max(var_2, var_3))))) : var_8);
    #pragma endscop
}
