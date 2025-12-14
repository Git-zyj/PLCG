/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_0;
    var_18 = ((~(var_9 * var_12)));
    var_19 = (max(3665, var_14));
    var_20 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_21 -= (((arr_3 [i_0] [i_0] [i_0]) >> (var_13 - 23228)));
                    var_22 = (min((((var_7 && (arr_6 [13] [i_1 + 1] [i_0])))), -var_11));
                    var_23 = (max(var_23, ((max(((max((arr_3 [i_1 - 2] [i_1 - 1] [i_1 - 1]), (arr_3 [i_1 - 1] [i_1 - 2] [i_1 - 2])))), (((arr_3 [i_1 - 1] [i_1 - 2] [i_1 + 1]) ? 3665 : (arr_3 [i_1 + 1] [i_1 - 1] [i_1 - 2]))))))));
                }
            }
        }
    }
    #pragma endscop
}
