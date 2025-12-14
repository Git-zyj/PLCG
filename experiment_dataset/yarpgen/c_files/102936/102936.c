/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((3318493157532623710 <= 225) ? var_13 : (((((225 << (var_15 + 423378557)))) ? -509916142033287587 : var_10))));
    var_18 -= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((((251 ? (((arr_0 [i_0]) ^ 225)) : (30 <= 225)))) && ((max(var_4, var_0)))));
                arr_5 [i_0] [i_0] = (((var_3 ? (arr_0 [i_1 - 3]) : var_9)));
                arr_6 [i_0] [i_0] = var_3;
            }
        }
    }
    var_19 = var_9;
    #pragma endscop
}
