/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (max((max(((min(896, 896))), (888 ^ 1))), (min(var_10, (~1)))));
    var_15 = (max(var_15, (max(var_2, (max(-64645, 137434759168))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = ((min((~65161), ((max(28643, 65179))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] [i_1] [i_2] [i_3] [i_0] = 0;
                            arr_14 [i_1] [i_1] = (max((min(((max(-28643, 1))), 323770330282620789)), ((((!3487306772593220432) & 1)))));
                            var_17 = (max((((47546 && -1455694531412513394) || (!1))), (((!1) && 1455694531412513394))));
                        }
                    }
                }
                var_18 = 1045986752;
                arr_15 [i_0] [i_1] [i_1] = 25165824;
                var_19 = ((((max(((max(-28644, 892))), ((-24 ? 1 : 1))))) > (max(4963442535772138965, 64633))));
            }
        }
    }
    #pragma endscop
}
