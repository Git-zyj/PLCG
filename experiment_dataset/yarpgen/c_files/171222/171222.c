/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((11811033997118365507 ? (min(var_3, (~var_5))) : ((min(var_3, var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = (((((((min(1038510899790943452, 1))) && var_10))) > (((((-(arr_0 [i_0] [i_1])))) ? ((~(arr_0 [i_0] [i_1]))) : ((-(arr_1 [i_1])))))));
                var_15 = (((0 > var_4) % var_3));
            }
        }
    }
    #pragma endscop
}
