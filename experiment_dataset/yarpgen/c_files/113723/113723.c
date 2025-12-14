/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (min(-1897905760537586234, ((((arr_1 [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_1]))))));
                var_15 = ((((((arr_3 [i_1]) || (arr_2 [i_1] [i_0])))) == (max((arr_2 [i_1] [i_1]), (arr_2 [i_1] [i_1])))));
                var_16 = ((((min(var_1, (arr_1 [i_1])))) ? (((((0 ? var_12 : 32767))) ? ((((arr_4 [i_1] [i_1]) ? var_4 : var_10))) : 4294934537)) : (arr_4 [16] [2])));
            }
        }
    }
    var_17 |= var_11;
    #pragma endscop
}
