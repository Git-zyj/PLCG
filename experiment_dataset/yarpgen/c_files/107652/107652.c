/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = ((~(max((max(var_0, var_9)), (arr_3 [0])))));
                var_18 = (min(var_18, (((((max(137952284, (~var_12)))) >= (max((arr_2 [i_0] [i_0] [i_0]), (var_3 % var_5))))))));
                var_19 = var_10;
                var_20 = ((((min(((((arr_1 [i_0 + 1]) ? (arr_0 [i_1]) : var_2))), 4157015011))) ? 9223372036854775807 : var_1));
                var_21 = (arr_3 [i_0]);
            }
        }
    }
    var_22 = -9223372036854775807;
    var_23 |= var_3;
    var_24 = (max(var_24, var_8));
    #pragma endscop
}
