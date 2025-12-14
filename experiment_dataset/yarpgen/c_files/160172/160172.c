/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((((min(var_1, 1)) ^ (min(614832924, (-32767 - 1))))), -32763));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                var_14 &= (((max(18446744073709551615, (~var_3))) == ((max(4294967273, (max(1966892201285287694, 72)))))));
                var_15 = 57333303;
                arr_5 [i_0] = (max(-36816359, ((min(15, 223)))));
            }
        }
    }
    var_16 |= var_5;
    var_17 = (-32767 - 1);
    #pragma endscop
}
