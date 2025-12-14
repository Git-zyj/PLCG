/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((-1781517665 && var_2) ? var_1 : (min(65524, (~125)))));
                arr_6 [i_0] = 8875;
            }
        }
    }
    var_11 = (min((((~(min(var_3, 1131510855))))), (min((var_5 ^ var_8), ((-2147483631 ? var_3 : 13599403916080907523))))));
    #pragma endscop
}
