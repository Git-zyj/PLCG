/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (max(((((arr_2 [i_1 - 1] [i_0 + 1]) <= (arr_2 [i_1 - 2] [i_0 - 1])))), (((arr_2 [i_1 - 2] [i_0 - 1]) ? (arr_2 [i_1 + 1] [i_0 - 2]) : (arr_2 [i_1 - 1] [i_0 + 1])))));
                var_18 = ((-68 ? ((min(-168500962, (arr_2 [i_0] [i_1 - 2])))) : 239710561));
                var_19 = (4268056764 && 4268056748);
            }
        }
    }
    var_20 = (4268056785 | 35199);
    var_21 = var_8;
    #pragma endscop
}
