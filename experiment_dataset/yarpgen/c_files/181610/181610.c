/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = var_6;
                var_13 |= (((min(var_8, ((min(43928, (arr_2 [10] [i_1] [0])))))) - (arr_0 [14] [20])));
            }
        }
    }
    var_14 = (min(((9223372036854775807 ? var_5 : (((21607 ? 21610 : var_2))))), (((var_0 <= (min(var_0, 21607)))))));
    #pragma endscop
}
