/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_7 ^ 406383474867213710) ? (var_10 | var_8) : (406383474867213727 >> 32))) ^ ((max(406383474867213710, var_2)))));
    var_16 = ((+(min((2097152 / -4142329134723613577), (((var_5 ? 15728640 : 1)))))));
    var_17 = ((39570 && (((var_10 ? var_4 : ((56 << (var_3 + 2371755830955625401))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = ((-(min(((13 ? var_13 : 16)), (arr_5 [i_1] [i_1] [i_2])))));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_19 = -var_6;
                        var_20 -= (arr_1 [17] [i_1]);

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_21 = var_6;
                            var_22 ^= ((((max((arr_12 [i_3] [i_1]), -15801))) ? ((((arr_1 [i_4] [i_3]) ? (arr_8 [10]) : ((var_2 | (arr_4 [i_0])))))) : ((60 & ((39570 ? -24 : 69))))));
                            var_23 = (max(((((arr_9 [i_1]) <= (arr_9 [i_1])))), var_8));
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            arr_15 [i_1] [i_1 - 2] [3] [i_1 - 2] [13] [3] [i_5] = (~8188);
                            arr_16 [i_1] [i_2] = (max(1, 21));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
