/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [6] [9] [2] = ((-(((!(arr_4 [i_1 - 1] [i_0 - 1] [i_0 - 1]))))));
                var_20 = (((((~(arr_4 [i_0] [i_0] [10])))) ? (max((((arr_4 [10] [i_0] [i_0]) * -1)), ((min(32760, 9866))))) : 7622));
            }
        }
    }
    var_21 = (((!var_4) ? ((var_13 * (var_4 / 23885))) : var_3));
    var_22 = ((~((max(-32761, -32760)))));
    var_23 = (max(((((max(-30820, var_7))) == var_2)), (var_14 && var_4)));
    #pragma endscop
}
