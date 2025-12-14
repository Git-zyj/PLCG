/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = -var_2;
                var_16 = (max((min((((arr_1 [i_1]) ? var_8 : (arr_3 [i_1] [10]))), (((var_2 > (arr_2 [i_0])))))), (65535 / var_3)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            {
                var_17 = var_8;
                var_18 = (arr_3 [i_3 + 3] [i_3 + 2]);
                var_19 = (((((65535 ? 0 : 12))) ? -1934407884 : (((arr_4 [i_3 - 1]) ? (((arr_5 [i_3] [3]) ? var_5 : (arr_5 [i_3 + 1] [i_2]))) : var_7))));
            }
        }
    }
    var_20 = -var_1;
    var_21 ^= var_5;
    #pragma endscop
}
