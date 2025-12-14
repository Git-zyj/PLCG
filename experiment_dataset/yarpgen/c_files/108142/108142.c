/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_2 % var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] |= ((((min((max((arr_2 [i_1] [i_0]), (arr_1 [i_0] [i_1]))), (((!(arr_4 [i_0]))))))) ? (max(((3500729985853863972 >> (-7000685134560568784 + 7000685134560568804))), -3001236951593166592)) : 156336490189690142));
                arr_6 [i_0] [i_1] [i_1] = (arr_0 [i_1]);
                arr_7 [i_0] [i_1] [i_0] = ((~(arr_4 [i_0])));
            }
        }
    }
    var_18 = (min(var_18, (((-1964184401238931068 ? ((var_4 / (max(var_1, var_0)))) : var_13)))));
    #pragma endscop
}
