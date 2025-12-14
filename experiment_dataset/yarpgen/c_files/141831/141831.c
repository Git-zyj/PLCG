/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_16 ? var_1 : var_8)) - 0)));
    var_19 = (((30124 * 0) <= 1));
    var_20 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_21 -= max(((max((48368 != var_2), (((arr_3 [i_0] [i_1 - 3]) ? 1 : 1))))), ((~(max(1, (arr_5 [i_0] [i_0]))))));
                arr_7 [i_1] = (max((((+(min((arr_1 [i_0] [i_0]), 1))))), var_13));
            }
        }
    }
    var_22 -= 1;
    #pragma endscop
}
