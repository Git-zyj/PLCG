/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((var_4 ? var_3 : var_7)))) ? ((((max(32759, var_4))) ? (~var_1) : (((1821895713 ? var_2 : -32750))))) : ((var_7 ? (!var_4) : var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (arr_2 [i_0] [i_1])));
                var_14 = (max(var_14, (((82 ? 32767 : ((~(arr_0 [i_0]))))))));
                var_15 = ((32734 ? (((-114 ? -32752 : 0))) : ((3933312258 ? (~-32750) : (min((arr_5 [i_0]), var_5))))));
                var_16 = ((~((1 >> (-1827150346 + 1827150373)))));
                var_17 = 82;
            }
        }
    }
    var_18 = (min(((!(var_5 / var_8))), var_6));
    var_19 = ((!((((var_2 | var_4) ? var_6 : (64 & -1614))))));
    #pragma endscop
}
