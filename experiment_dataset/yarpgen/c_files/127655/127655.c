/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((var_7 || var_15) ? (max(var_2, var_2)) : 729127688226027806))) ? (max((min(12126881383656970778, var_4)), var_11)) : (~var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = ((((((arr_3 [i_0 + 1]) >> (((arr_3 [i_0 + 1]) - 16188330041264158553))))) ? ((~(arr_3 [i_0 + 1]))) : (((arr_3 [i_0 + 1]) ? 0 : var_2))));
                var_20 = ((-var_2 ^ (((-(var_9 * var_5))))));
                arr_5 [i_1] = ((((arr_3 [i_0]) * ((var_3 ? var_8 : (arr_1 [i_0]))))));
            }
        }
    }
    var_21 = var_13;
    #pragma endscop
}
