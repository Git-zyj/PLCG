/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (((((var_11 | var_12) != ((var_12 << (var_1 - 155))))) ? var_10 : -var_8));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, var_10));
                    var_15 = ((~((~(arr_6 [i_0] [i_0] [i_0])))));

                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        arr_9 [i_0 - 4] [i_0] = var_7;
                        var_16 = (max(var_16, ((min((((!var_1) % var_7)), (~var_0))))));
                        var_17 = (max(var_17, (((((((var_11 + var_6) + (arr_0 [i_2] [i_2])))) ? (var_0 * var_8) : (((max(((((arr_4 [i_0] [i_1]) || var_7))), var_2)))))))));
                    }
                    var_18 = ((~(max((arr_8 [i_0 - 4] [i_0 - 4] [i_0 - 3] [i_2] [i_0 - 3]), (~var_0)))));
                    var_19 += (((((arr_7 [i_0 - 3] [i_2] [i_0 - 1] [i_0 - 2] [i_0 + 2] [i_0 - 2]) / (arr_4 [i_1] [i_1]))) - var_7));
                }
            }
        }
    }
    #pragma endscop
}
