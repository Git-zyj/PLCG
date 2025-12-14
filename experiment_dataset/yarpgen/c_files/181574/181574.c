/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_1 && var_8);
    var_14 = (((((var_11 || (((4988 ? 1 : 1)))))) >> (((max((var_7 + var_10), var_1)) - 1695446035185626347))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] = (((arr_3 [i_0] [i_1 - 1]) ? 1 : ((max(1, 1)))));
                var_15 |= ((((((arr_1 [8]) ? var_12 : 4294967294))) ? (arr_1 [6]) : (1 * 0)));
            }
        }
    }
    var_16 = (((min((min(4294967294, 1)), var_1)) % var_4));
    #pragma endscop
}
