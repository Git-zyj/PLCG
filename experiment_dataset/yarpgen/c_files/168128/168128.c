/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((((2013265920 ? 0 : 6))) ? (6 && 7) : 0))) ? (((((max(1, 15))) ? (!0) : ((4398045462528 ? -1 : 5))))) : (min(((9223372036854775807 ? 1 : 18446744073709551615)), (((-284869662 ? 562949953421311 : 562949953421311)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((24 < ((1 ? (max(9223372036854775807, -4581084560835286771)) : (min(536870911, 9223372036854775807))))));
                arr_7 [4] = ((((!(((-19858 ? 1 : 22)))))));
            }
        }
    }
    #pragma endscop
}
