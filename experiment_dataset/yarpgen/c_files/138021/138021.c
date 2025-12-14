/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (max(((var_7 ? (((max(var_5, 1)))) : (8 ^ 4503599627370495))), (~var_2)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [7] [21] |= (min(0, 18446744073709551615));
                arr_5 [i_1] [i_0 - 2] = ((((max((arr_2 [i_0 + 3] [i_1] [i_1]), (arr_2 [i_0] [3] [i_0 - 1])))) ? 7714031837032992333 : (((arr_2 [i_0] [i_0 - 2] [14]) << 1))));
                arr_6 [i_1] = ((-var_5 < (min(var_9, (arr_0 [i_0 + 1])))));
                var_11 = (max(var_11, ((min((((((arr_0 [i_0]) + 9223372036854775807)) << ((((~(-9223372036854775807 - 1))) - 9223372036854775807)))), (~0))))));
            }
        }
    }
    #pragma endscop
}
