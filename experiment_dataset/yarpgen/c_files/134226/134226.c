/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 190;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((((234 ? var_15 : (arr_5 [i_0]))) ^ (((((arr_1 [i_0]) ? 6328872877817461735 : var_10))))));
                var_17 = (max(var_17, -82));
            }
        }
    }
    var_18 = (((~190) < var_12));
    var_19 = var_14;
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            {
                arr_14 [i_3] [i_3 + 1] = var_15;
                arr_15 [i_3] = (((arr_5 [1]) & (((((50 ? var_6 : 91))) ? (arr_0 [i_3 + 2] [i_2 + 3]) : (var_11 & var_15)))));
            }
        }
    }
    #pragma endscop
}
