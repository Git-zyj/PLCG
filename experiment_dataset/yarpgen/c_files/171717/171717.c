/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((8601 > (((arr_2 [i_1 - 1] [i_1 - 1]) ? (arr_1 [i_1 + 1] [i_1 - 1]) : 28910))));
                var_10 = (max(var_10, (((arr_0 [i_1 + 1]) ? ((((-(arr_1 [i_0] [i_1]))))) : (((arr_1 [i_0] [i_0]) ? ((var_9 ? 8601 : 3716976535)) : var_6))))));
            }
        }
    }
    var_11 = (min((max(-8602, var_2)), ((max((((((-32767 - 1) + 2147483647)) >> (32767 - 32755))), (18446744073709551615 || -32764))))));
    #pragma endscop
}
