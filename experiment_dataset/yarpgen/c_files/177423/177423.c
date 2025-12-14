/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((95 ? var_1 : -var_3))) ? var_2 : var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = ((((((max(18446744073709551615, var_1))) ? (((arr_1 [i_0]) ? 19118 : var_6)) : var_1)) | ((min(3129780191, ((var_5 ? var_4 : (arr_1 [i_1]))))))));
                var_16 = 13079782370516079497;
                arr_5 [i_0] [i_0] = ((0 ? 3839890576 : 4262371332));
            }
        }
    }
    #pragma endscop
}
