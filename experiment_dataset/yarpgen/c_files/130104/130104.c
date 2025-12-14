/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((-79 + 2147483647) << (4294967295 - 4294967295)));
                var_13 = (max(var_13, ((max((((((0 ? 17178584084201985033 : 37))) ? ((var_5 ? 67108736 : 87)) : (arr_0 [i_0] [i_1]))), 59)))));
                var_14 = max((((75 | (max((arr_1 [i_0] [i_1]), 662920986))))), (((min((arr_2 [i_1]), 16)) ^ (arr_3 [1] [i_1] [i_1]))));
                var_15 += max((min(9223372036854775807, (arr_3 [i_0] [i_0] [i_1]))), (((-(arr_3 [i_0] [i_0] [i_1])))));
            }
        }
    }
    var_16 = (((((var_2 ? var_3 : ((min(1, 4227858560)))))) && var_12));
    var_17 = (min(var_17, (((var_1 * (((((var_5 ? var_12 : 1)) > ((var_3 ? 1 : var_2))))))))));
    var_18 ^= ((-(var_0 <= var_10)));
    #pragma endscop
}
