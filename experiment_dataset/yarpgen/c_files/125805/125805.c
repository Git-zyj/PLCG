/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(1, 3495696726));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((((3495696717 ? -var_8 : (arr_1 [12])))))));
                var_13 = (arr_1 [10]);
            }
        }
    }
    var_14 &= (-350837634060048045 + 3495696722);
    #pragma endscop
}
