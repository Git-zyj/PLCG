/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 = ((arr_0 [0] [0]) < ((62 * (arr_2 [i_0 + 2] [i_0 + 1] [i_0 + 1]))));
                    arr_7 [23] [i_1] [i_2] = (((arr_1 [i_0 - 1] [i_0 + 2]) || (((1 ? (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 2]) : (arr_1 [i_0 + 2] [i_0 + 1]))))));
                    var_18 ^= (arr_6 [i_2] [i_1] [i_1] [i_0 - 1]);
                }
            }
        }
    }
    var_19 = (((((((max(var_8, 26949))) ^ (var_9 != 20487)))) ? ((max(((((((((-2147483647 - 1) + 2147483647)) + 2147483647)) >> (var_4 - 5080803028772583957)))), 2774435685))) : (((var_4 ^ var_1) & var_3))));
    #pragma endscop
}
