/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 28719925;
    var_16 += min(28719920, var_8);
    var_17 = ((!(((28719925 ? 1103357119 : (3125260854 || 2892255391))))));
    var_18 = ((((((!4025211810) << ((((3833996104 ? var_7 : var_9)) - 3474462923))))) < ((var_6 ? var_2 : 460971186))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 += ((((max((arr_2 [i_2]), var_6))) && ((min((arr_1 [i_0 - 1] [i_1 - 1]), (arr_5 [i_0] [i_1 - 1]))))));
                    var_20 *= ((arr_6 [i_2]) ? (max((arr_3 [i_0] [i_0 - 1] [i_2]), 460971191)) : (max((~var_2), (!4294967267))));
                }
            }
        }
    }
    #pragma endscop
}
