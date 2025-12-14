/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((var_4 && var_8) && (-2133529361 && var_5))))) - ((((((-22 + 2147483647) << (var_0 - 18026)))) + (1785011868 ^ 35)))));
    var_19 -= (22 == 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] &= (((((var_11 - var_8) != ((946132611 * (arr_5 [i_0] [7] [i_1]))))) && (((var_14 && 15347610928018463004) || (var_3 || 0)))));
                arr_7 [i_1] = (((((1 ^ 0) * (((var_1 < (arr_2 [i_0] [i_1 + 2])))))) + ((((946132611 != 1) <= (((arr_2 [i_0] [i_1 - 2]) + 57)))))));
            }
        }
    }
    #pragma endscop
}
