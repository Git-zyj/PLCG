/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_13;
    var_18 ^= (min(((((12025831062829506767 && var_6) ? var_8 : (((var_14 + 2147483647) >> (var_12 - 766105490)))))), var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = (i_0 % 2 == 0) ? (((~(((((arr_4 [i_0] [i_1] [13]) + 2147483647)) >> ((((~(arr_3 [i_0] [i_0]))) - 222995168))))))) : (((~(((((arr_4 [i_0] [i_1] [13]) + 2147483647)) >> ((((((~(arr_3 [i_0] [i_0]))) - 222995168)) - 368902019)))))));
                var_20 = (~252);
            }
        }
    }
    var_21 = (min(-var_5, (~var_15)));
    var_22 = (min(var_22, -var_13));
    #pragma endscop
}
