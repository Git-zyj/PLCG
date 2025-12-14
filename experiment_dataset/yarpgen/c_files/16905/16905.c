/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((-var_13 <= 6373984288344247867), (52158 & var_10)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] [i_2] = (((262143 >= 29688) | var_0));
                    arr_8 [i_2] [i_2] = (arr_5 [10] [10] [5] [i_0]);
                    arr_9 [i_2] [i_2] = (arr_5 [i_1] [1] [16] [15]);
                    var_18 = (((!var_14) ? (((2848892765 ? var_2 : (arr_3 [i_0] [i_1] [12])))) : ((32764 | (min((arr_6 [i_2] [i_2] [i_1] [i_2]), 193))))));
                    arr_10 [4] [i_2] [i_2] [0] = 8904362193117438734;
                }
            }
        }
    }
    var_19 = (min(var_9, (!var_11)));
    var_20 = ((((max(2924383036, -3886483087446247790))) ? ((((var_11 < (var_15 != 3084304244))))) : var_0));
    #pragma endscop
}
