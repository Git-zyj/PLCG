/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((var_2 + 2147483647) << (18446744073709551607 * var_6)))) ? ((var_7 & ((var_9 ? var_5 : var_0)))) : var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = min(((((min(-6207597542358362262, 78)) == (((var_14 & (arr_2 [i_0] [1]))))))), (min(((-66 & (arr_2 [1] [i_1]))), var_4)));
                var_18 = arr_2 [i_1 + 2] [i_0];
            }
        }
    }
    #pragma endscop
}
