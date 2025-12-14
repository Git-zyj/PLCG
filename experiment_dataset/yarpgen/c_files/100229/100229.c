/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((min(1, 2923081556))) ? ((-79 / (2923081556 / 1371885740))) : 65));
    var_11 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [3] = (min(((min(2923081561, (arr_3 [i_1] [i_1])))), ((((((1371885753 / (arr_2 [i_0] [i_1])))) && (arr_2 [1] [i_1]))))));
                arr_5 [i_1] [i_1] = (min(((((((arr_0 [i_0]) ? var_9 : var_1)) & ((~(arr_1 [i_0] [i_0])))))), (min((arr_0 [i_0]), (((arr_1 [i_1] [i_0]) ? (arr_3 [i_1] [i_1]) : (arr_1 [i_0] [i_0])))))));
            }
        }
    }
    var_12 = ((var_3 ? var_1 : (min((var_5 * var_8), 1371885735))));
    var_13 = ((var_0 * var_9) ? (min((min(var_8, var_8)), ((min(var_5, var_5))))) : var_8);
    #pragma endscop
}
