/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [2] [i_1] = (arr_2 [i_0]);
                arr_8 [i_0] [i_1] = (((-4238319936187422839 * 0) <= (((((arr_6 [i_0 - 2]) <= (arr_5 [i_0] [i_1] [i_1])))))));
                var_17 = (max((((1163030768 % var_8) + (arr_1 [i_1]))), ((max(33118, 1)))));
                arr_9 [i_1] [i_0] = ((!(((15 / (arr_0 [i_0 - 2]))))));
                var_18 ^= ((((~((var_6 ? (arr_1 [3]) : 14787930558632791658)))) > (((var_4 ? (max(1642027152, -4238319936187422839)) : (!-4238319936187422839))))));
            }
        }
    }
    var_19 += (max(((min(2047, (-32767 - 1)))), (max(var_8, ((var_14 ? 9007199254740991 : -32219))))));
    #pragma endscop
}
