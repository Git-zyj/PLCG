/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_4;
    var_11 = (((((var_5 ? 1 : var_5))) ? ((var_9 ? 13152883265254672675 : (9222809086901354496 >= -1))) : (((1 > 13152883265254672675) ? var_8 : (~5293860808454878941)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 ^= (max(1155272424, (~5293860808454878941)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_13 = (max(var_13, var_7));
            arr_7 [14] = 0;
            arr_8 [i_0] = 5293860808454878941;
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_14 = ((-((((var_5 ^ 49951) == (arr_10 [i_0] [i_0] [i_2]))))));
            var_15 = var_9;
            arr_11 [i_2] [i_2] = (min(((var_2 ? ((59 ? (arr_2 [i_0] [3]) : -2317697930945929544)) : (((27576 ? var_7 : 1))))), 4104679096034817320));
        }
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            arr_14 [14] [i_3] [i_3 + 3] = 23366;
            var_16 = ((-(((arr_0 [i_3 + 1] [i_3 + 3]) ? (arr_0 [i_3 + 1] [i_3 + 3]) : (arr_0 [i_3 + 1] [i_3 + 3])))));
            var_17 = ((~(min((((13152883265254672675 ? 32880113 : 1))), -2212974679969772155))));
        }
    }
    #pragma endscop
}
