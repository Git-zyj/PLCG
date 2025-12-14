/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((max((((8655305954075069216 ? -14 : 12))), ((-2 ? var_6 : 477298885)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] = (max(-1, -26));
                var_14 = (min(var_14, ((((((43 ? (13 < var_4) : ((36462 / (arr_7 [i_1 + 1] [i_0] [i_0])))))) ? ((17146314752 ? 31102 : (arr_4 [i_0] [i_1 + 3]))) : var_8)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_15 ^= (((arr_6 [i_3] [i_1 + 3]) ? ((((var_3 ? var_11 : (arr_1 [1] [i_2]))) >> (((arr_12 [i_0] [i_2] [i_3] [i_2]) + 973908889)))) : (!-42)));
                            var_16 = ((~(((((15 ? var_1 : (arr_2 [i_3] [i_0]))) >= var_7)))));
                            arr_13 [i_0] [1] [1] [i_2] = (arr_7 [i_0] [i_1 + 1] [i_1 + 1]);
                        }
                    }
                }
                arr_14 [i_1] [i_0] = (((((max(34433, 1)))) ? var_0 : (((((12 ? -28 : 0)))))));
                var_17 += 31103;
            }
        }
    }
    var_18 = var_5;
    var_19 = ((((max(12, var_2)) >> (var_1 + 78))));
    var_20 = var_4;
    #pragma endscop
}
