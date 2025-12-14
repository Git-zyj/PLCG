/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [12] = (0 <= var_11);
                arr_6 [i_0] [i_0] [i_0] = (max((arr_1 [i_1 + 2]), (((!(arr_1 [i_0]))))));
            }
        }
    }
    var_19 = (((((-((18 ? var_18 : var_10))))) ? (!-var_15) : var_2));
    var_20 = 5;
    #pragma endscop
}
