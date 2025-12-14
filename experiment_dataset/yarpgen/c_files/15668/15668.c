/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_5);
    var_11 |= (min((((!var_3) ? 4750864620462124746 : ((min(var_2, 1221223581))))), 99));
    var_12 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = ((((((arr_1 [i_0] [i_0]) * (arr_1 [i_0] [i_0])))) ? (min(((var_2 ? var_5 : (arr_0 [i_0]))), ((((arr_2 [i_0]) ? 169 : -723796984))))) : (((((min((arr_3 [i_0] [i_1]), 99))) ? (((arr_4 [14] [i_0]) ? 0 : (arr_0 [i_0]))) : (!-1))))));
                var_14 = (max((((((min(-32296, (arr_0 [i_0])))) && var_1))), (arr_0 [i_0])));
                var_15 = (((min((arr_4 [i_0] [i_0]), var_6))) ? (((arr_4 [i_0] [i_0]) ? (arr_3 [i_0] [5]) : (arr_3 [i_0] [i_1]))) : ((-(arr_4 [i_0] [i_0]))));
                arr_5 [i_0] [i_0] = ((((((-(arr_1 [i_0] [i_0])))) % var_8)));
            }
        }
    }
    #pragma endscop
}
