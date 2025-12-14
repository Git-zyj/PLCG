/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = (((((255 ? var_17 : 2945006928))) ? (arr_2 [i_1] [i_1 - 1] [i_1 + 2]) : (!65532)));
                arr_4 [i_0] [i_1] [10] = ((((max(((31124 ? var_18 : var_4)), 3370427189))) ? ((-((var_5 ? var_2 : (arr_0 [4]))))) : (max(0, 8642258525450018274))));
                var_20 = (max(var_20, ((((max(var_7, var_6)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_21 = (min(var_21, (((-(~1970389675))))));
                            arr_9 [i_0] [i_0] [1] [i_1] [i_1] [3] = (min(1, (((arr_5 [i_0] [i_1]) ? (2324577620 - 4294967295) : (var_14 && var_12)))));
                            var_22 = (max(var_22, ((((((2324577621 ^ ((var_8 ? 4611686018427387903 : var_0))))) ? ((((178 ? 2324577628 : 2324577620)))) : var_3)))));
                            var_23 ^= (max((min(var_10, 1970389675)), var_2));
                            arr_10 [i_0] [i_1] [i_0] [14] [19] = (var_2 && 9262223707568048646);
                        }
                    }
                }
                var_24 -= max(-var_15, (((0 ? 115 : 1))));
            }
        }
    }
    var_25 = (((min(1, 14053447966754398910))));
    var_26 = var_14;
    var_27 = (min(var_27, var_10));
    #pragma endscop
}
