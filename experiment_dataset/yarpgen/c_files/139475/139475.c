/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_0;
    var_18 = (max(var_9, (max((var_6 / 239), var_4))));
    var_19 = ((0 ? var_15 : (max(0, (77 - var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_20 = ((-(((9223372036854775807 ? 9223372036854775780 : 18446744073709551615)))));
                arr_6 [i_1] = (((max((min(var_9, -9223372036854775807)), (arr_1 [i_0 - 1] [i_0 - 1])))) % (min(18356041697643131099, 1253548643)));
            }
        }
    }
    var_21 = 252;
    #pragma endscop
}
