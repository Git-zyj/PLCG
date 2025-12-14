/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_10 = (min((23 | 71), (((~255) ? (((~(arr_4 [i_0] [i_1 - 3])))) : (arr_1 [i_0])))));
                arr_6 [i_0] [i_0] = ((+(((arr_5 [i_0]) ? (-1 ^ var_6) : (arr_2 [i_0])))));
            }
        }
    }
    var_11 = max(((~((var_1 ? var_7 : -19)))), (((570809709 ? ((max(107, var_4))) : var_0))));
    #pragma endscop
}
