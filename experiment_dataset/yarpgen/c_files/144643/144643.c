/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_11 [i_0 - 2] [i_1] = (max(855609754950019075, (arr_10 [i_1] [i_1])));
                        arr_12 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = ((((((arr_8 [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1] [i_3 + 3] [i_3]) | (arr_8 [i_3 + 2] [i_3] [i_3] [i_3 + 2] [i_3 - 1] [i_3])))) ? ((~(arr_8 [i_3 + 3] [i_3 + 3] [i_3 + 3] [i_3 + 3] [i_3 - 1] [i_3]))) : (max((arr_8 [i_3 + 1] [i_3] [i_3 + 1] [i_3] [i_3 + 3] [i_3]), (arr_8 [i_3 - 1] [i_3 - 1] [i_3] [i_3] [i_3 + 1] [i_3])))));
                        var_15 = ((1272853546 ? ((((((arr_2 [i_0 - 1] [i_0 - 1]) > 1272853539)) ? var_9 : 3022113742))) : (((3022113750 % 1300475128) ? (!3022113756) : (max(3022113757, (arr_8 [i_0] [i_1] [i_1] [i_1] [i_1] [i_3])))))));
                        arr_13 [i_3 + 1] [i_2] [i_1] [i_0] = (arr_8 [i_0] [i_1] [i_1] [i_1] [i_2] [3]);
                        var_16 = (max(var_16, (arr_6 [i_3] [i_0] [i_1] [i_0])));
                    }
                }
            }
        }
        var_17 = ((-((min((arr_1 [i_0 - 1] [i_0 - 1]), (arr_1 [i_0 - 1] [i_0 - 1]))))));
        arr_14 [i_0] [i_0 - 2] = (((arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (!-1326917815) : ((((((!(arr_5 [i_0] [i_0]))))) - ((-181012797 ? 3846017083 : var_14))))));
    }
    var_18 = min(var_8, var_2);
    var_19 = 1272853544;
    var_20 = var_9;
    #pragma endscop
}
