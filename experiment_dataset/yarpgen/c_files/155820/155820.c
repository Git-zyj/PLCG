/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= 32767;
    var_16 = (max(var_16, 32741));
    var_17 |= -32726;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_18 ^= (((~32741) ? 32758 : 2441026239));
                arr_6 [0] [0] |= ((32767 ? 1792110509870412352 : -1881900968));
                var_19 -= 32767;
                var_20 = (min(var_20, 1));
            }
        }
    }
    #pragma endscop
}
