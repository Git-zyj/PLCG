/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (6429754585619620159 - (max((~50458), 6429754585619620141)));
    var_13 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                arr_6 [i_0] = (max(((48 + (max(var_0, (arr_0 [i_0]))))), (arr_5 [i_1])));
                var_14 = ((12 ? ((max((arr_2 [i_0 - 1]), 1))) : (((arr_5 [i_1 - 1]) >> ((((-45 ? var_0 : 38338)) - 2316275798))))));
            }
        }
    }
    #pragma endscop
}
