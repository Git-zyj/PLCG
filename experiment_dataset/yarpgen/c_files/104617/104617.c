/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = (((~(arr_1 [i_0]))));
                var_19 = ((var_15 <= (min((max((arr_2 [i_0] [i_0]), (arr_1 [i_0]))), (!var_15)))));
                arr_5 [i_0] [i_1] = (15102376032311549271 % -31);
                arr_6 [i_0] [i_1] [i_0] = (!3344368041398002326);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                var_20 = (min((min(-var_10, (!2766778211))), ((var_11 + (max(var_8, var_17))))));
                arr_12 [1] [i_3] = ((((max(-14575, 3344368041398002345)) * (!var_4))));
            }
        }
    }
    #pragma endscop
}
