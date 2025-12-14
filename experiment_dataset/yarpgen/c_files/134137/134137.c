/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((-110 ? 6598348327511234609 : 102))) ? var_8 : var_8));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (15866572630643398320 >= -110);
                var_19 = (arr_5 [i_0] [i_0 - 1]);
                var_20 = (arr_1 [i_0]);
            }
        }
    }
    var_21 = var_10;
    #pragma endscop
}
