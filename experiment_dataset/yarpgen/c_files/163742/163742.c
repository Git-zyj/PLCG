/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 3919790091;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = ((var_8 ? (arr_0 [i_0] [i_0]) : (min(-1, 2152685599632094618))));
                arr_5 [i_0] [i_1] = ((((arr_2 [i_0 - 2]) / (arr_2 [i_0 - 1]))));
                var_19 = ((!(arr_1 [i_0 + 1])));
            }
        }
    }

    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        var_20 = ((arr_7 [i_2] [8]) ? ((var_10 ? var_4 : (arr_7 [i_2 + 1] [i_2 + 2]))) : (arr_6 [9]));
        var_21 = (arr_7 [14] [i_2]);
        var_22 = ((~((~(arr_6 [i_2 + 2])))));
    }
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        var_23 = (arr_6 [i_3 - 1]);
        var_24 = (((((~((-3754141485146676698 ? 3797095609 : 375177195))))) ? ((((4 + (arr_8 [i_3]))))) : ((-((3797095628 ? 497871692 : var_2))))));
        var_25 = (min(var_25, (((((((((79 != (arr_8 [0]))))) * (arr_7 [i_3 + 1] [i_3]))) * 18092167003168486270)))));
    }
    for (int i_4 = 2; i_4 < 20;i_4 += 1)
    {
        var_26 = ((max((min((arr_6 [18]), 94)), 6986474999808495594)));
        var_27 = min((((arr_7 [i_4 - 1] [i_4]) ? var_3 : (arr_7 [i_4 - 1] [i_4]))), var_14);
    }
    #pragma endscop
}
