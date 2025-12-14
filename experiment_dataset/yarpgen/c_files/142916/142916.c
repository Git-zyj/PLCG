/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_6, 18446744073709551614));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_12 |= ((!(arr_6 [i_0 + 1])));
                arr_7 [i_0] [i_0] [i_0] = (((var_6 ? 15 : var_4)));
                var_13 = max((((~(arr_6 [i_0 + 1])))), ((((min(1844, 2014484108))) ? (max(72057592964186112, 388724371)) : (arr_0 [i_0]))));
            }
        }
    }
    var_14 += (min((((~18446744073709551615) ? ((var_0 ? var_2 : var_3)) : (((var_2 ? var_6 : var_3))))), var_1));
    #pragma endscop
}
